
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdc_cmap_regs {int lut; int addr; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int *) ;
 struct mdc_cmap_regs* VAR_0 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
     unsigned int VAR_3, unsigned int VAR_4,
     struct fb_info *VAR_5)
{
 struct mdc_cmap_regs *VAR_6 = VAR_0;
 unsigned long VAR_7;

 FUNC_1(VAR_7);


 FUNC_3(VAR_1, &VAR_6->addr);
 FUNC_2();
 FUNC_3(VAR_2, &VAR_6->lut);
 FUNC_2();
 FUNC_3(VAR_3, &VAR_6->lut);
 FUNC_2();
 FUNC_3(VAR_4, &VAR_6->lut);

 FUNC_0(VAR_7);
 return 0;
}
