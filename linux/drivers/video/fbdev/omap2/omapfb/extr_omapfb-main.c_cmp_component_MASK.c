
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_bitfield {scalar_t__ length; scalar_t__ offset; scalar_t__ msb_right; } ;



__attribute__((used)) static bool FUNC_0(struct fb_bitfield *VAR_0, struct fb_bitfield *VAR_1)
{
 return VAR_0->length == VAR_1->length &&
  VAR_0->offset == VAR_1->offset &&
  VAR_0->msb_right == VAR_1->msb_right;
}
