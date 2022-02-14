
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int field; int colorspace; scalar_t__ bytesperline; int sizeimage; int pixelformat; int height; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct hdpvr_video_info {int width; int height; int valid; } ;
struct hdpvr_fh {scalar_t__ legacy_mode; } ;
struct hdpvr_device {int width; int bulk_in_size; int height; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdpvr_device*,struct hdpvr_video_info*) ;
 struct hdpvr_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
    struct v4l2_format *VAR_8)
{
 struct hdpvr_device *VAR_9 = FUNC_1(VAR_6);
 struct hdpvr_fh *VAR_10 = VAR_7;
 int VAR_11;
 if (VAR_10->legacy_mode) {
  struct hdpvr_video_info VAR_12;

  VAR_11 = FUNC_0(VAR_9, &VAR_12);
  if (VAR_11 < 0)
   return VAR_11;
  if (!VAR_12.valid)
   return -VAR_0;
  VAR_8->fmt.pix.width = VAR_12.width;
  VAR_8->fmt.pix.height = VAR_12.height;
 } else {
  VAR_8->fmt.pix.width = VAR_9->width;
  VAR_8->fmt.pix.height = VAR_9->height;
 }
 VAR_8->fmt.pix.pixelformat = VAR_5;
 VAR_8->fmt.pix.sizeimage = VAR_9->bulk_in_size;
 VAR_8->fmt.pix.bytesperline = 0;
 if (VAR_8->fmt.pix.width == 720) {

  VAR_8->fmt.pix.colorspace = VAR_2;
  VAR_8->fmt.pix.field = VAR_3;
 } else {

  VAR_8->fmt.pix.colorspace = VAR_1;
  VAR_8->fmt.pix.field = VAR_4;
 }
 return 0;
}
