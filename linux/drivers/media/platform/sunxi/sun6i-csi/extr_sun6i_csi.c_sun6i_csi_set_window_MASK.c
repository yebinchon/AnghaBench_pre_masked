
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun6i_csi_config {int width; int height; int pixelformat; } ;
struct TYPE_2__ {struct sun6i_csi_config config; } ;
struct sun6i_csi_dev {int* planar_offset; int regmap; int dev; TYPE_1__ csi; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct sun6i_csi_dev *VAR_3)
{
 struct sun6i_csi_config *VAR_4 = &VAR_3->csi.config;
 u32 VAR_5;
 u32 VAR_6;
 int *VAR_7 = VAR_3->planar_offset;
 u32 VAR_8 = VAR_4->width;
 u32 VAR_9 = VAR_4->height;
 u32 VAR_10 = VAR_8;

 switch (VAR_4->pixelformat) {
 case 130:
 case 128:
 case 134:
 case 133:
  FUNC_6(VAR_3->dev,
   "Horizontal length should be 2 times of width for packed YUV formats!\n");
  VAR_10 = VAR_8 * 2;
  break;
 default:
  break;
 }

 FUNC_7(VAR_3->regmap, VAR_1,
       FUNC_2(VAR_10) |
       FUNC_3(0));
 FUNC_7(VAR_3->regmap, VAR_2,
       FUNC_4(VAR_9) |
       FUNC_5(0));

 VAR_7[0] = 0;
 switch (VAR_4->pixelformat) {
 case 139:
 case 138:
 case 136:
 case 137:
 case 135:
  VAR_5 = VAR_8;
  VAR_6 = VAR_8;
  VAR_7[1] = VAR_5 * VAR_9;
  VAR_7[2] = -1;
  break;
 case 132:
 case 129:
  VAR_5 = VAR_8;
  VAR_6 = VAR_8 / 2;
  VAR_7[1] = VAR_5 * VAR_9;
  VAR_7[2] = VAR_7[1] +
    VAR_6 * VAR_9 / 2;
  break;
 case 131:
  VAR_5 = VAR_8;
  VAR_6 = VAR_8 / 2;
  VAR_7[1] = VAR_5 * VAR_9;
  VAR_7[2] = VAR_7[1] +
    VAR_6 * VAR_9;
  break;
 default:
  FUNC_6(VAR_3->dev,
   "Calculating pixelformat(0x%x)'s bytesperline as a packed format\n",
   VAR_4->pixelformat);
  VAR_5 = (FUNC_8(VAR_4->pixelformat) *
      VAR_4->width) / 8;
  VAR_6 = 0;
  VAR_7[1] = -1;
  VAR_7[2] = -1;
  break;
 }

 FUNC_7(VAR_3->regmap, VAR_0,
       FUNC_0(VAR_6) |
       FUNC_1(VAR_5));
}
