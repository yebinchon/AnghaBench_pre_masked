
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; void* sizeimage; int height; void* bytesperline; int width; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct soc_camera_host {int capabilities; TYPE_2__* ops; } ;
struct soc_camera_format_xlate {int host_fmt; } ;
struct soc_camera_device {int pdev; int parent; } ;
struct TYPE_4__ {int (* try_fmt ) (struct soc_camera_device*,struct v4l2_format*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 void* FUNC_1 (int ,void*,int) ;
 int FUNC_2 (scalar_t__) ;
 struct soc_camera_format_xlate* FUNC_3 (struct soc_camera_device*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,void*,int ) ;
 int FUNC_6 (struct soc_camera_device*,struct v4l2_format*) ;
 struct soc_camera_host* FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct soc_camera_device *VAR_4,
         struct v4l2_format *VAR_5)
{
 struct soc_camera_host *VAR_6 = FUNC_7(VAR_4->parent);
 const struct soc_camera_format_xlate *VAR_7;
 struct v4l2_pix_format *VAR_8 = &VAR_5->fmt.pix;
 int VAR_9;

 FUNC_0(VAR_4->pdev, "TRY_FMT(%c%c%c%c, %ux%u)\n",
  FUNC_2(VAR_8->pixelformat), VAR_8->width, VAR_8->height);

 if (VAR_8->pixelformat != VAR_2 &&
     !(VAR_6->capabilities & VAR_1)) {
  VAR_8->bytesperline = 0;
  VAR_8->sizeimage = 0;
 }

 VAR_9 = VAR_6->ops->try_fmt(VAR_4, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_3(VAR_4, VAR_8->pixelformat);
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_8->width, VAR_7->host_fmt);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->bytesperline = FUNC_1(VAR_3, VAR_8->bytesperline, VAR_9);

 VAR_9 = FUNC_5(VAR_7->host_fmt, VAR_8->bytesperline,
      VAR_8->height);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8->sizeimage = FUNC_1(VAR_3, VAR_8->sizeimage, VAR_9);

 return 0;
}
