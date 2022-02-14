
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_7__ {void* code; } ;
struct v4l2_subdev_format {TYPE_3__ format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format_mplane {int pixelformat; int height; int width; } ;
struct TYPE_5__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_6__ {void* mbus_code; } ;
struct ceu_subdev {TYPE_2__ mbus_fmt; struct v4l2_subdev* v4l2_sd; } ;
struct ceu_fmt {int dummy; } ;
struct ceu_device {struct ceu_subdev* sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ceu_device*,struct ceu_fmt const*,struct v4l2_pix_format_mplane*) ;
 struct ceu_fmt* FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_3__*,struct v4l2_pix_format_mplane*) ;
 int FUNC_3 (struct v4l2_pix_format_mplane*,TYPE_3__*) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_5 (int *,int,int ,int,int *,int,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct ceu_device *VAR_10, struct v4l2_format *VAR_11,
    u32 *VAR_12)
{
 struct ceu_subdev *VAR_13 = VAR_10->sd;
 struct v4l2_pix_format_mplane *VAR_14 = &VAR_11->fmt.pix_mp;
 struct v4l2_subdev *VAR_15 = VAR_13->v4l2_sd;
 struct v4l2_subdev_pad_config VAR_16;
 const struct ceu_fmt *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;






 struct v4l2_subdev_format VAR_21 = {
  .which = VAR_7,
 };

 VAR_18 = VAR_13->mbus_fmt.mbus_code;

 switch (VAR_14->pixelformat) {
 case 129:
  VAR_19 = VAR_5;
  break;
 case 131:
  VAR_19 = VAR_3;
  break;
 case 128:
  VAR_19 = VAR_6;
  break;
 case 130:
  VAR_19 = VAR_4;
  break;
 case 134:
 case 132:
 case 135:
 case 133:
  VAR_19 = VAR_13->mbus_fmt.mbus_code;
  break;

 default:
  VAR_14->pixelformat = 134;
  VAR_19 = VAR_13->mbus_fmt.mbus_code;
  break;
 }

 VAR_17 = FUNC_1(VAR_14->pixelformat);


 FUNC_5(&VAR_14->width, 2, VAR_1, 4,
         &VAR_14->height, 4, VAR_0, 4, 0);

 FUNC_2(&VAR_21.format, VAR_14);






 VAR_21.format.code = VAR_19;
 VAR_20 = FUNC_4(VAR_15, VAR_8, VAR_9, &VAR_16, &VAR_21);
 if (VAR_20) {
  if (VAR_20 == -VAR_2) {

   VAR_21.format.code = VAR_18;
   VAR_20 = FUNC_4(VAR_15, VAR_8, VAR_9,
            &VAR_16, &VAR_21);
  }

  if (VAR_20)
   return VAR_20;
 }


 FUNC_3(VAR_14, &VAR_21.format);


 FUNC_0(VAR_10, VAR_17, VAR_14);


 *VAR_12 = VAR_21.format.code;

 return 0;
}
