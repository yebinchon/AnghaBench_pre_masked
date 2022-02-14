
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gxfb_par {int dummy; } ;
struct TYPE_2__ {unsigned long yres; int sync; } ;
struct fb_info {TYPE_1__ var; struct gxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned long FUNC_1 (struct gxfb_par*,int ) ;
 unsigned long FUNC_2 (struct gxfb_par*,int ) ;
 int FUNC_3 (struct gxfb_par*,int ,unsigned long) ;
 int FUNC_4 (struct gxfb_par*,int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct fb_info *VAR_18)
{
 struct gxfb_par *VAR_19 = VAR_18->par;
 unsigned long VAR_20;
 unsigned long VAR_21;



 FUNC_0(VAR_12, VAR_20);
 VAR_20 &= ~VAR_13;
 VAR_20 |= VAR_14;
 FUNC_5(VAR_12, VAR_20);



 VAR_21 = FUNC_1(VAR_19, VAR_4);
 VAR_21 &= ~VAR_5;
 FUNC_3(VAR_19, VAR_4, VAR_21);



 VAR_21 = FUNC_1(VAR_19, VAR_6);
 VAR_21 &= VAR_7;
 VAR_21 |= VAR_18->var.yres << VAR_8;
 FUNC_3(VAR_19, VAR_6, VAR_21);




 VAR_21 = 0x0F100000;



 if (!(VAR_18->var.sync & VAR_1))
  VAR_21 |= VAR_11;

 if (!(VAR_18->var.sync & VAR_0))
  VAR_21 |= VAR_10;

 FUNC_3(VAR_19, VAR_9, VAR_21);


 FUNC_3(VAR_19, VAR_2, VAR_3);



 VAR_21 = FUNC_2(VAR_19, VAR_15);
 VAR_21 |= VAR_17 | VAR_16;
 FUNC_4(VAR_19, VAR_15, VAR_21);



 VAR_21 = FUNC_1(VAR_19, VAR_4);
 VAR_21 |= VAR_5;
 FUNC_3(VAR_19, VAR_4, VAR_21);
}
