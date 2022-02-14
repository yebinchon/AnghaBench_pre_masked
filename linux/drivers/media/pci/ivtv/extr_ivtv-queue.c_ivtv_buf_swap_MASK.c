
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ivtv_buffer {int bytesused; scalar_t__ buf; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ivtv_buffer *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->bytesused; VAR_1 += 4)
  FUNC_0((u32 *)(VAR_0->buf + VAR_1));
}
