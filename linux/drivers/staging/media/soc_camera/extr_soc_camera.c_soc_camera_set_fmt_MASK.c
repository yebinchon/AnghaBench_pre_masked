
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; int field; int colorspace; int sizeimage; int bytesperline; int height; int width; } ;
struct TYPE_5__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct soc_camera_host {TYPE_4__* ops; } ;
struct soc_camera_device {int user_height; int user_width; int pdev; int field; int colorspace; int sizeimage; int bytesperline; TYPE_3__* current_fmt; int parent; } ;
struct TYPE_8__ {int (* set_fmt ) (struct soc_camera_device*,struct v4l2_format*) ;int (* set_bus_param ) (struct soc_camera_device*) ;} ;
struct TYPE_7__ {TYPE_2__* host_fmt; } ;
struct TYPE_6__ {scalar_t__ fourcc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct soc_camera_device*,struct v4l2_format*) ;
 int FUNC_4 (struct soc_camera_device*,struct v4l2_format*) ;
 int FUNC_5 (struct soc_camera_device*) ;
 struct soc_camera_host* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct soc_camera_device *VAR_1,
         struct v4l2_format *VAR_2)
{
 struct soc_camera_host *VAR_3 = FUNC_6(VAR_1->parent);
 struct v4l2_pix_format *VAR_4 = &VAR_2->fmt.pix;
 int VAR_5;

 FUNC_0(VAR_1->pdev, "S_FMT(%c%c%c%c, %ux%u)\n",
  FUNC_2(VAR_4->pixelformat), VAR_4->width, VAR_4->height);


 VAR_5 = FUNC_3(VAR_1, VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = VAR_3->ops->set_fmt(VAR_1, VAR_2);
 if (VAR_5 < 0) {
  return VAR_5;
 } else if (!VAR_1->current_fmt ||
     VAR_1->current_fmt->host_fmt->fourcc != VAR_4->pixelformat) {
  FUNC_1(VAR_1->pdev,
   "Host driver hasn't set up current format correctly!\n");
  return -VAR_0;
 }

 VAR_1->user_width = VAR_4->width;
 VAR_1->user_height = VAR_4->height;
 VAR_1->bytesperline = VAR_4->bytesperline;
 VAR_1->sizeimage = VAR_4->sizeimage;
 VAR_1->colorspace = VAR_4->colorspace;
 VAR_1->field = VAR_4->field;

 FUNC_0(VAR_1->pdev, "set width: %d height: %d\n",
  VAR_1->user_width, VAR_1->user_height);


 return VAR_3->ops->set_bus_param(VAR_1);
}
