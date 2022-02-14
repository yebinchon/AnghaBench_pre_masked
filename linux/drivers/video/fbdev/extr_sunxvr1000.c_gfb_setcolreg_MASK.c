
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct fb_info {scalar_t__ pseudo_palette; } ;



__attribute__((used)) static int FUNC_0(unsigned VAR_0,
    unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
    unsigned VAR_4, struct fb_info *VAR_5)
{
 u32 VAR_6;

 if (VAR_0 < 16) {
  VAR_1 >>= 8;
  VAR_2 >>= 8;
  VAR_3 >>= 8;

  VAR_6 = (VAR_3 << 16) | (VAR_2 << 8) | VAR_1;
  ((u32 *)VAR_5->pseudo_palette)[VAR_0] = VAR_6;
 }

 return 0;
}
