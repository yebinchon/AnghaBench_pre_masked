
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct geodefb_par {scalar_t__ panel_x; scalar_t__ vid_regs; scalar_t__ enable_crt; } ;
struct TYPE_2__ {int sync; } ;
struct fb_info {TYPE_1__ var; struct geodefb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_15)
{
 struct geodefb_par *VAR_16 = VAR_15->par;
 u32 VAR_17;

 VAR_17 = FUNC_0(VAR_16->vid_regs + VAR_12);


 VAR_17 &= ~(VAR_2 | VAR_10
    | VAR_0 | VAR_3
    | VAR_6 | VAR_5
    | VAR_4 | VAR_11
    | VAR_8);


 VAR_17 |= (VAR_1 | VAR_9
   | VAR_7);


 if (VAR_16->enable_crt) {
  VAR_17 |= VAR_4;
  VAR_17 |= VAR_8 | VAR_11;
 }

 if (VAR_16->panel_x > 0) {
  VAR_17 |= VAR_6;
  VAR_17 |= VAR_5;
 }


 if (VAR_15->var.sync & VAR_13)
  VAR_17 |= VAR_0;
 if (VAR_15->var.sync & VAR_14)
  VAR_17 |= VAR_3;

 FUNC_1(VAR_17, VAR_16->vid_regs + VAR_12);
}
