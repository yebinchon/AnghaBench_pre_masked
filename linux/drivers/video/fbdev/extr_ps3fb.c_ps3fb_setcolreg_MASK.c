
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct fb_info {scalar_t__ pseudo_palette; } ;



__attribute__((used)) static int FUNC_0(unsigned int VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, unsigned int VAR_3,
      unsigned int VAR_4, struct fb_info *VAR_5)
{
 if (VAR_0 >= 16)
  return 1;

 VAR_1 >>= 8;
 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;

 ((u32 *)VAR_5->pseudo_palette)[VAR_0] = VAR_4 << 24 | VAR_1 << 16 |
            VAR_2 << 8 | VAR_3;
 return 0;
}
