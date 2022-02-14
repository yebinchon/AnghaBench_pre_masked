
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toby_cmap_regs {int lut; int addr; } ;
struct TYPE_2__ {unsigned int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int *) ;
 struct toby_cmap_regs* VAR_0 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      struct fb_info *VAR_5)
{
 struct toby_cmap_regs *VAR_6 = VAR_0;
 unsigned int VAR_7 = VAR_5->var.bits_per_pixel;
 unsigned long VAR_8;

 VAR_2 = ~VAR_2;
 VAR_3 = ~VAR_3;
 VAR_4 = ~VAR_4;
 VAR_1 = (VAR_1 << (8 - VAR_7)) | (0xFF >> VAR_7);

 FUNC_1(VAR_8);

 FUNC_3(VAR_1, &VAR_6->addr);
 FUNC_2();
 FUNC_3(VAR_2, &VAR_6->lut);
 FUNC_2();
 FUNC_3(VAR_3, &VAR_6->lut);
 FUNC_2();
 FUNC_3(VAR_4, &VAR_6->lut);

 FUNC_0(VAR_8);
 return 0;
}
