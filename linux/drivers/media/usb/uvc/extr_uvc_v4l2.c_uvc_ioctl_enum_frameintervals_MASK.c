
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int denominator; int numerator; } ;
struct TYPE_8__ {int denominator; int numerator; } ;
struct TYPE_7__ {int denominator; int numerator; } ;
struct TYPE_10__ {TYPE_4__ step; TYPE_3__ max; TYPE_2__ min; } ;
struct TYPE_6__ {int denominator; int numerator; } ;
struct v4l2_frmivalenum {scalar_t__ pixel_format; unsigned int index; scalar_t__ width; scalar_t__ height; TYPE_5__ stepwise; int type; TYPE_1__ discrete; } ;
struct uvc_streaming {unsigned int nformats; struct uvc_format* format; } ;
struct uvc_frame {scalar_t__ wWidth; scalar_t__ wHeight; int * dwFrameInterval; scalar_t__ bFrameIntervalType; } ;
struct uvc_format {scalar_t__ fcc; unsigned int nframes; struct uvc_frame* frame; } ;
struct uvc_fh {struct uvc_streaming* stream; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int*,int,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
      struct v4l2_frmivalenum *VAR_5)
{
 struct uvc_fh *VAR_6 = VAR_4;
 struct uvc_streaming *VAR_7 = VAR_6->stream;
 struct uvc_format *VAR_8 = ((void*)0);
 struct uvc_frame *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_7->nformats; VAR_12++) {
  if (VAR_7->format[VAR_12].fcc == VAR_5->pixel_format) {
   VAR_8 = &VAR_7->format[VAR_12];
   break;
  }
 }
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_11 = VAR_5->index;
 for (VAR_12 = 0; VAR_12 < VAR_8->nframes; VAR_12++) {
  if (VAR_8->frame[VAR_12].wWidth == VAR_5->width &&
      VAR_8->frame[VAR_12].wHeight == VAR_5->height) {
   VAR_9 = &VAR_8->frame[VAR_12];
   VAR_10 = VAR_9->bFrameIntervalType ?: 1;
   if (VAR_11 < VAR_10)
    break;
   VAR_11 -= VAR_10;
  }
 }
 if (VAR_12 == VAR_8->nframes)
  return -VAR_0;

 if (VAR_9->bFrameIntervalType) {
  VAR_5->type = VAR_1;
  VAR_5->discrete.numerator =
   VAR_9->dwFrameInterval[VAR_11];
  VAR_5->discrete.denominator = 10000000;
  FUNC_0(&VAR_5->discrete.numerator,
   &VAR_5->discrete.denominator, 8, 333);
 } else {
  VAR_5->type = VAR_2;
  VAR_5->stepwise.min.numerator = VAR_9->dwFrameInterval[0];
  VAR_5->stepwise.min.denominator = 10000000;
  VAR_5->stepwise.max.numerator = VAR_9->dwFrameInterval[1];
  VAR_5->stepwise.max.denominator = 10000000;
  VAR_5->stepwise.step.numerator = VAR_9->dwFrameInterval[2];
  VAR_5->stepwise.step.denominator = 10000000;
  FUNC_0(&VAR_5->stepwise.min.numerator,
   &VAR_5->stepwise.min.denominator, 8, 333);
  FUNC_0(&VAR_5->stepwise.max.numerator,
   &VAR_5->stepwise.max.denominator, 8, 333);
  FUNC_0(&VAR_5->stepwise.step.numerator,
   &VAR_5->stepwise.step.denominator, 8, 333);
 }

 return 0;
}
