
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int buf_used; } ;
struct uvc_video {int fid; TYPE_1__ queue; } ;
struct uvc_buffer {int bytesused; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct uvc_video *VAR_2, struct uvc_buffer *VAR_3,
  u8 *VAR_4, int VAR_5)
{
 VAR_4[0] = 2;
 VAR_4[1] = VAR_1 | VAR_2->fid;

 if (VAR_3->bytesused - VAR_2->queue.buf_used <= VAR_5 - 2)
  VAR_4[1] |= VAR_0;

 return 2;
}
