
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format {int sizeimage; scalar_t__ bytesperline; int pixelformat; int field; int colorspace; int height; int width; } ;
struct TYPE_3__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18_stream {int vb_bytes_per_frame; scalar_t__ vb_bytes_per_line; int pixelformat; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct TYPE_4__ {int height; int width; } ;
struct cx18 {TYPE_2__ cxhdl; struct cx18_stream* streams; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cx18_open_id* FUNC_0 (void*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_format *VAR_6)
{
 struct cx18_open_id *VAR_7 = FUNC_0(VAR_5);
 struct cx18 *VAR_8 = VAR_7->cx;
 struct cx18_stream *VAR_9 = &VAR_8->streams[VAR_7->type];
 struct v4l2_pix_format *VAR_10 = &VAR_6->fmt.pix;

 VAR_10->width = VAR_8->cxhdl.width;
 VAR_10->height = VAR_8->cxhdl.height;
 VAR_10->colorspace = VAR_1;
 VAR_10->field = VAR_2;
 if (VAR_7->type == VAR_0) {
  VAR_10->pixelformat = VAR_9->pixelformat;
  VAR_10->sizeimage = VAR_9->vb_bytes_per_frame;
  VAR_10->bytesperline = VAR_9->vb_bytes_per_line;
 } else {
  VAR_10->pixelformat = VAR_3;
  VAR_10->sizeimage = 128 * 1024;
  VAR_10->bytesperline = 0;
 }
 return 0;
}
