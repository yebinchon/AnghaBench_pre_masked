
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uvc_video_queue {int dummy; } ;
struct uvc_buffer {scalar_t__ state; scalar_t__ bytesused; unsigned int length; int* mem; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int*,int const*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct uvc_video_queue *VAR_4, struct uvc_buffer *VAR_5,
  const u8 *VAR_6, unsigned int VAR_7)
{
 static const u8 VAR_8[] = {
  0x11, 0x22, 0x33, 0x44,
  0xde, 0xad, 0xbe, 0xef,
  0xde, 0xad, 0xfa, 0xce
 };

 unsigned int VAR_9, VAR_10;
 u8 *VAR_11;
 int VAR_12 = 0;

 if (VAR_5 == ((void*)0))
  return 0;

 if ((VAR_7 >= 14 && FUNC_0(&VAR_6[2], VAR_8, 12) == 0) ||
     (VAR_7 >= 15 && FUNC_0(&VAR_6[3], VAR_8, 12) == 0)) {
  FUNC_3(VAR_3, "iSight header found\n");
  VAR_12 = 1;
 }


 if (VAR_5->state != VAR_1) {
  if (!VAR_12) {
   FUNC_3(VAR_3, "Dropping packet (out of "
      "sync).\n");
   return 0;
  }

  VAR_5->state = VAR_1;
 }






 if (VAR_12 && VAR_5->bytesused != 0) {
  VAR_5->state = VAR_2;
  return -VAR_0;
 }




 if (!VAR_12) {
  VAR_9 = VAR_5->length - VAR_5->bytesused;
  VAR_11 = VAR_5->mem + VAR_5->bytesused;
  VAR_10 = FUNC_2(VAR_7, VAR_9);
  FUNC_1(VAR_11, VAR_6, VAR_10);
  VAR_5->bytesused += VAR_10;

  if (VAR_7 > VAR_9 || VAR_5->bytesused == VAR_5->length) {
   FUNC_3(VAR_3, "Frame complete "
      "(overflow).\n");
   VAR_5->state = VAR_2;
  }
 }

 return 0;
}
