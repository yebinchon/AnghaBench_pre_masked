
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwMaxVideoFrameSize; } ;
struct uvc_streaming {TYPE_2__* cur_format; TYPE_1__ ctrl; } ;
struct uvc_buffer {scalar_t__ bytesused; int error; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const struct uvc_streaming *VAR_1,
          struct uvc_buffer *VAR_2)
{
 if (VAR_1->ctrl.dwMaxVideoFrameSize != VAR_2->bytesused &&
     !(VAR_1->cur_format->flags & VAR_0))
  VAR_2->error = 1;
}
