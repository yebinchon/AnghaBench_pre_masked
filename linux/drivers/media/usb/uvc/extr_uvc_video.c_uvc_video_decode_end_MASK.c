
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uvc_streaming {int last_fid; TYPE_1__* dev; } ;
struct uvc_buffer {scalar_t__ bytesused; int state; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct uvc_streaming *VAR_5,
  struct uvc_buffer *VAR_6, const u8 *VAR_7, int VAR_8)
{

 if (VAR_7[1] & VAR_2 && VAR_6->bytesused != 0) {
  FUNC_0(VAR_4, "Frame complete (EOF found).\n");
  if (VAR_7[0] == VAR_8)
   FUNC_0(VAR_4, "EOF in empty payload.\n");
  VAR_6->state = VAR_0;
  if (VAR_5->dev->quirks & VAR_1)
   VAR_5->last_fid ^= VAR_3;
 }
}
