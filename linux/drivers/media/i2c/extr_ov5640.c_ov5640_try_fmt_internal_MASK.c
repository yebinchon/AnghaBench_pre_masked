
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int colorspace; int xfer_func; int quantization; int ycbcr_enc; int height; int width; } ;
struct ov5640_mode_info {int vact; int hact; } ;
struct ov5640_dev {int dummy; } ;
typedef enum ov5640_frame_rate { ____Placeholder_ov5640_frame_rate } ov5640_frame_rate ;
struct TYPE_3__ {scalar_t__ code; int colorspace; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct ov5640_mode_info* FUNC_3 (struct ov5640_dev*,int,int ,int ,int) ;
 TYPE_1__* VAR_2 ;
 struct ov5640_dev* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
       struct v4l2_mbus_framefmt *VAR_4,
       enum ov5640_frame_rate VAR_5,
       const struct ov5640_mode_info **VAR_6)
{
 struct ov5640_dev *VAR_7 = FUNC_4(VAR_3);
 const struct ov5640_mode_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7, VAR_5, VAR_4->width, VAR_4->height, 1);
 if (!VAR_8)
  return -VAR_0;
 VAR_4->width = VAR_8->hact;
 VAR_4->height = VAR_8->vact;

 if (VAR_6)
  *VAR_6 = VAR_8;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++)
  if (VAR_2[VAR_9].code == VAR_4->code)
   break;
 if (VAR_9 >= FUNC_0(VAR_2))
  VAR_9 = 0;

 VAR_4->code = VAR_2[VAR_9].code;
 VAR_4->colorspace = VAR_2[VAR_9].colorspace;
 VAR_4->ycbcr_enc = FUNC_2(VAR_4->colorspace);
 VAR_4->quantization = VAR_1;
 VAR_4->xfer_func = FUNC_1(VAR_4->colorspace);

 return 0;
}
