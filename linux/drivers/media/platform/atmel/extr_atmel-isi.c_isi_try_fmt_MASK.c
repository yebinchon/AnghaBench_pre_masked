
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int field; int pixelformat; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct isi_format {int bpp; int mbus_code; int fourcc; } ;
struct TYPE_4__ {int subdev; } ;
struct atmel_isi {int num_user_formats; TYPE_2__ entity; struct isi_format** user_formats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int,unsigned int,int ) ;
 struct isi_format* FUNC_1 (struct atmel_isi*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_3 (struct v4l2_pix_format*,int *) ;
 int FUNC_4 (int ,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_5(struct atmel_isi *VAR_6, struct v4l2_format *VAR_7,
         const struct isi_format **VAR_8)
{
 const struct isi_format *VAR_9;
 struct v4l2_pix_format *VAR_10 = &VAR_7->fmt.pix;
 struct v4l2_subdev_pad_config VAR_11;
 struct v4l2_subdev_format VAR_12 = {
  .which = VAR_3,
 };
 int VAR_13;

 VAR_9 = FUNC_1(VAR_6, VAR_10->pixelformat);
 if (!VAR_9) {
  VAR_9 = VAR_6->user_formats[VAR_6->num_user_formats - 1];
  VAR_10->pixelformat = VAR_9->fourcc;
 }


 VAR_10->width = FUNC_0(VAR_10->width, 0U, VAR_1);
 VAR_10->height = FUNC_0(VAR_10->height, 0U, VAR_0);

 FUNC_2(&VAR_12.format, VAR_10, VAR_9->mbus_code);
 VAR_13 = FUNC_4(VAR_6->entity.subdev, VAR_4, VAR_5,
          &VAR_11, &VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_3(VAR_10, &VAR_12.format);

 VAR_10->field = VAR_2;
 VAR_10->bytesperline = VAR_10->width * VAR_9->bpp;
 VAR_10->sizeimage = VAR_10->bytesperline * VAR_10->height;

 if (VAR_8)
  *VAR_8 = VAR_9;

 return 0;
}
