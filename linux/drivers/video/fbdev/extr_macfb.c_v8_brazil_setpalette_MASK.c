
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct TYPE_4__ {int lut; int addr; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1, unsigned int VAR_2,
    unsigned int VAR_3, unsigned int VAR_4,
    struct fb_info *VAR_5)
{
 unsigned int VAR_6 = VAR_5->var.bits_per_pixel;
 unsigned long VAR_7;

 FUNC_1(VAR_7);







 VAR_1 = (VAR_1 << (8 - VAR_6)) | (0xFF >> VAR_6);
 FUNC_3(VAR_1, &VAR_0->addr);
 FUNC_2();


 FUNC_3(VAR_2, &VAR_0->lut);
 FUNC_2();
 FUNC_3(VAR_3, &VAR_0->lut);
 FUNC_2();
 FUNC_3(VAR_4, &VAR_0->lut);

 FUNC_0(VAR_7);
 return 0;
}
