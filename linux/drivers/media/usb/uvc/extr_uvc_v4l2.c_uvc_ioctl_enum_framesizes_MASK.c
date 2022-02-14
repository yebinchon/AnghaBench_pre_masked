
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct v4l2_frmsizeenum {scalar_t__ pixel_format; unsigned int index; TYPE_1__ discrete; int type; } ;
struct uvc_streaming {unsigned int nformats; struct uvc_format* format; } ;
struct uvc_frame {scalar_t__ wWidth; scalar_t__ wHeight; } ;
struct uvc_format {scalar_t__ fcc; unsigned int nframes; struct uvc_frame* frame; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
         struct v4l2_frmsizeenum *VAR_4)
{
 struct uvc_fh *VAR_5 = VAR_3;
 struct uvc_streaming *VAR_6 = VAR_5->stream;
 struct uvc_format *VAR_7 = ((void*)0);
 struct uvc_frame *VAR_8 = ((void*)0);
 unsigned int VAR_9;
 unsigned int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_6->nformats; VAR_10++) {
  if (VAR_6->format[VAR_10].fcc == VAR_4->pixel_format) {
   VAR_7 = &VAR_6->format[VAR_10];
   break;
  }
 }
 if (VAR_7 == ((void*)0))
  return -VAR_0;


 for (VAR_10 = 0, VAR_9 = 0; VAR_10 < VAR_7->nframes; VAR_10++) {
  if (VAR_8 && VAR_8->wWidth == VAR_7->frame[VAR_10].wWidth &&
      VAR_8->wHeight == VAR_7->frame[VAR_10].wHeight)
   continue;
  VAR_8 = &VAR_7->frame[VAR_10];
  if (VAR_9 == VAR_4->index)
   break;
  VAR_9++;
 }

 if (VAR_10 == VAR_7->nframes)
  return -VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->discrete.width = VAR_8->wWidth;
 VAR_4->discrete.height = VAR_8->wHeight;
 return 0;
}
