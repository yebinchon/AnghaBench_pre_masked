
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bs {int bits_left; void* ptr; void* buf_end; void* buf; } ;



__attribute__((used)) static void FUNC_0(struct bs *VAR_0, void *VAR_1, int VAR_2)
{
 VAR_0->buf = VAR_1;
 VAR_0->ptr = VAR_1;
 VAR_0->buf_end = VAR_0->ptr + VAR_2;
 VAR_0->bits_left = 8;
}
