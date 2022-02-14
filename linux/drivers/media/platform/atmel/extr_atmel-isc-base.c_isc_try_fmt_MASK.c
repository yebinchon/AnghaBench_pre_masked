
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; int which; } ;
struct v4l2_pix_format {int width; int height; int bytesperline; int sizeimage; int field; scalar_t__ pixelformat; } ;
struct TYPE_4__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct isc_format {scalar_t__ fourcc; int mbus_code; } ;
struct TYPE_6__ {int bpp; scalar_t__ fourcc; struct isc_format* sd_format; } ;
struct isc_device {int num_user_formats; TYPE_3__ try_config; int v4l2_dev; TYPE_2__* current_subdev; struct isc_format** user_formats; } ;
struct TYPE_5__ {int sd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct isc_format* FUNC_1 (struct isc_device*,scalar_t__) ;
 int FUNC_2 (struct isc_device*) ;
 int FUNC_3 (struct isc_device*,int) ;
 int FUNC_4 (struct isc_device*) ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,int ,int *,char*,char*,...) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,struct v4l2_pix_format*,int ) ;
 int FUNC_9 (struct v4l2_pix_format*,int *) ;
 int FUNC_10 (int ,int ,int ,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_11(struct isc_device *VAR_10, struct v4l2_format *VAR_11,
   u32 *VAR_12)
{
 int VAR_13;
 struct isc_format *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 struct v4l2_pix_format *VAR_16 = &VAR_11->fmt.pix;
 struct v4l2_subdev_pad_config VAR_17;
 struct v4l2_subdev_format VAR_18 = {
  .which = VAR_5,
 };
 u32 VAR_19;
 int VAR_20;
 bool VAR_21 = 0;

 if (VAR_11->type != VAR_3)
  return -VAR_0;


 for (VAR_13 = 0; VAR_13 < VAR_10->num_user_formats; VAR_13++) {
  if (FUNC_0(VAR_10->user_formats[VAR_13]->mbus_code)) {
   VAR_14 = VAR_10->user_formats[VAR_13];
   break;
  }
 }



 VAR_15 = FUNC_1(VAR_10, VAR_16->pixelformat);




 if (VAR_15 && VAR_14 && VAR_8)
  VAR_14 = VAR_15;


 if (VAR_15 && !VAR_14)
  VAR_14 = VAR_15;




 if (VAR_14 == VAR_15)
  VAR_21 = 1;





 if (!VAR_14 && !VAR_15) {
  VAR_14 = VAR_10->user_formats[VAR_10->num_user_formats - 1];
  FUNC_6(1, VAR_6, &VAR_10->v4l2_dev,
    "Sensor not supporting %.4s, using %.4s\n",
    (char *)&VAR_16->pixelformat, (char *)&VAR_14->fourcc);
 }

 if (!VAR_14) {
  VAR_20 = -VAR_0;
  goto isc_try_fmt_err;
 }


 FUNC_6(1, VAR_6, &VAR_10->v4l2_dev,
   "Preferring to have sensor using format %.4s\n",
   (char *)&VAR_14->fourcc);


 VAR_10->try_config.sd_format = VAR_14;


 if (VAR_16->width > VAR_2)
  VAR_16->width = VAR_2;
 if (VAR_16->height > VAR_1)
  VAR_16->height = VAR_1;





 VAR_19 = VAR_14->mbus_code;





 VAR_10->try_config.fourcc = VAR_16->pixelformat;

 if (FUNC_4(VAR_10)) {
  VAR_16->pixelformat = VAR_10->try_config.fourcc = VAR_14->fourcc;

  VAR_20 = FUNC_4(VAR_10);
  if (VAR_20)
   goto isc_try_fmt_err;
 }

 VAR_20 = FUNC_3(VAR_10, VAR_21);
 if (VAR_20)
  goto isc_try_fmt_err;

 VAR_20 = FUNC_2(VAR_10);
 if (VAR_20)
  goto isc_try_fmt_err;

 FUNC_8(&VAR_18.format, VAR_16, VAR_19);
 VAR_20 = FUNC_10(VAR_10->current_subdev->sd, VAR_7, VAR_9,
          &VAR_17, &VAR_18);
 if (VAR_20 < 0)
  goto isc_try_fmt_subdev_err;

 FUNC_9(VAR_16, &VAR_18.format);

 VAR_16->field = VAR_4;
 VAR_16->bytesperline = (VAR_16->width * VAR_10->try_config.bpp) >> 3;
 VAR_16->sizeimage = VAR_16->bytesperline * VAR_16->height;

 if (VAR_12)
  *VAR_12 = VAR_19;

 return 0;

isc_try_fmt_err:
 FUNC_7(&VAR_10->v4l2_dev, "Could not find any possible format for a working pipeline\n");
isc_try_fmt_subdev_err:
 FUNC_5(&VAR_10->try_config, 0, sizeof(VAR_10->try_config));

 return VAR_20;
}
