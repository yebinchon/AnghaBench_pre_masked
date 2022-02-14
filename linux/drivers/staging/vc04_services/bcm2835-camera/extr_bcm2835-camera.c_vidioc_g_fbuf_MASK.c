
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int width; int height; } ;
struct TYPE_7__ {TYPE_2__ video; } ;
struct vchiq_mmal_port {TYPE_3__ es; } ;
struct TYPE_8__ {int width; int height; int bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct v4l2_framebuffer {int capability; TYPE_4__ fmt; int flags; } ;
struct file {int dummy; } ;
struct bm2835_mmal_dev {TYPE_1__** component; } ;
struct TYPE_5__ {struct vchiq_mmal_port* output; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bm2835_mmal_dev* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8,
    struct v4l2_framebuffer *VAR_9)
{



 struct bm2835_mmal_dev *VAR_10 = FUNC_0(VAR_7);
 struct vchiq_mmal_port *VAR_11 =
  &VAR_10->component[VAR_1]->output[VAR_0];

 VAR_9->capability = VAR_3 |
   VAR_4;
 VAR_9->flags = VAR_5;
 VAR_9->fmt.width = VAR_11->es.video.width;
 VAR_9->fmt.height = VAR_11->es.video.height;
 VAR_9->fmt.pixelformat = VAR_6;
 VAR_9->fmt.bytesperline = VAR_11->es.video.width;
 VAR_9->fmt.sizeimage = (VAR_11->es.video.width *
          VAR_11->es.video.height * 3) >> 1;
 VAR_9->fmt.colorspace = VAR_2;

 return 0;
}
