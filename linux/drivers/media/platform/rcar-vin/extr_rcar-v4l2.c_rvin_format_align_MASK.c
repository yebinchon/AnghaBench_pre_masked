
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format {int field; int height; int sizeimage; int bytesperline; int width; int pixelformat; } ;
struct TYPE_3__ {scalar_t__ pixelformat; } ;
struct rvin_dev {TYPE_2__* info; TYPE_1__ format; } ;
struct TYPE_4__ {int max_height; int max_width; } ;


 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rvin_dev*,struct v4l2_pix_format*) ;
 int FUNC_1 (struct rvin_dev*,int ) ;
 int FUNC_2 (struct v4l2_pix_format*) ;
 int FUNC_3 (int *,int,int ,int,int*,int,int ,int,int ) ;
 int FUNC_4 (struct rvin_dev*,char*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rvin_dev *VAR_3, struct v4l2_pix_format *VAR_4)
{
 u32 VAR_5;

 if (!FUNC_1(VAR_3, VAR_4->pixelformat))
  VAR_4->pixelformat = VAR_1;

 switch (VAR_4->field) {
 case 128:
 case 133:
 case 129:
 case 130:
 case 131:
 case 132:
  break;
 case 134:





  VAR_4->field = 132;
  VAR_4->height *= 2;
  break;
 default:
  VAR_4->field = VAR_0;
  break;
 }


 VAR_5 = VAR_3->format.pixelformat == VAR_2 ? 5 : 1;


 FUNC_3(&VAR_4->width, 2, VAR_3->info->max_width, VAR_5,
         &VAR_4->height, 4, VAR_3->info->max_height, 2, 0);

 VAR_4->bytesperline = FUNC_0(VAR_3, VAR_4);
 VAR_4->sizeimage = FUNC_2(VAR_4);

 FUNC_4(VAR_3, "Format %ux%u bpl: %u size: %u\n",
  VAR_4->width, VAR_4->height, VAR_4->bytesperline, VAR_4->sizeimage);
}
