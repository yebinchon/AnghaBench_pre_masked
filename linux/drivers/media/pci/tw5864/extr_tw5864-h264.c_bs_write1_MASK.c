
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bs {int* ptr; int* buf_end; int bits_left; } ;



__attribute__((used)) static void FUNC_0(struct bs *VAR_0, u32 VAR_1)
{
 if (VAR_0->ptr < VAR_0->buf_end) {
  *VAR_0->ptr <<= 1;
  *VAR_0->ptr |= VAR_1;
  VAR_0->bits_left--;
  if (VAR_0->bits_left == 0) {
   VAR_0->ptr++;
   VAR_0->bits_left = 8;
  }
 }
}
