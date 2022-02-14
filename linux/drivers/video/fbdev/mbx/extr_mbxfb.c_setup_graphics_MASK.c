
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; } ;
struct TYPE_4__ {int bits_per_pixel; TYPE_1__ green; int yres; int xres; } ;
struct fb_info {TYPE_2__ var; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(struct fb_info *VAR_16)
{
 unsigned long VAR_17;
 unsigned long VAR_18;

 VAR_17 = VAR_6 | FUNC_3(VAR_16->var.xres) |
  FUNC_2(VAR_16->var.yres);
 switch (VAR_16->var.bits_per_pixel) {
 case 16:
  if (VAR_16->var.green.length == 5)
   VAR_17 |= VAR_7;
  else
   VAR_17 |= VAR_9;
  break;
 case 24:
  VAR_17 |= VAR_10;
  break;
 case 32:
  VAR_17 |= VAR_8;
  break;
 }

 FUNC_5(VAR_17, VAR_5);
 FUNC_5(0x00000000, VAR_0);
 FUNC_5(0x00ffffff, VAR_1);
 FUNC_5((VAR_4 | FUNC_1(0x6000)), VAR_3);
 FUNC_5(0x00000000, VAR_2);

 VAR_18 = FUNC_4(VAR_11);
 VAR_18 &= ~(FUNC_0(VAR_14) | FUNC_0(VAR_12));
 VAR_18 |= VAR_15 | VAR_13;
 FUNC_5(VAR_18, VAR_11);
}
