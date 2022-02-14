
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_format {int format; int which; } ;
struct TYPE_5__ {int pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct TYPE_8__ {scalar_t__ sd_format; } ;
struct TYPE_7__ {int hist_stat; } ;
struct isc_device {int v4l2_dev; TYPE_4__ try_config; TYPE_4__ config; TYPE_3__ ctrls; struct v4l2_format fmt; TYPE_2__* current_subdev; } ;
struct TYPE_6__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isc_device*) ;
 int FUNC_1 (struct isc_device*,struct v4l2_format*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,int *,char*) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_5(struct isc_device *VAR_5, struct v4l2_format *VAR_6)
{
 struct v4l2_subdev_format VAR_7 = {
  .which = VAR_1,
 };
 u32 VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_3(&VAR_7.format, &VAR_6->fmt.pix, VAR_8);
 VAR_9 = FUNC_4(VAR_5->current_subdev->sd, VAR_3,
          VAR_4, ((void*)0), &VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->fmt = *VAR_6;

 if (VAR_5->try_config.sd_format && VAR_5->config.sd_format &&
     VAR_5->try_config.sd_format != VAR_5->config.sd_format) {
  VAR_5->ctrls.hist_stat = VAR_0;
  FUNC_0(VAR_5);
 }

 VAR_5->config = VAR_5->try_config;

 FUNC_2(1, VAR_2, &VAR_5->v4l2_dev, "New ISC configuration in place\n");

 return 0;
}
