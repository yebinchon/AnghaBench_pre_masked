
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lxfb_par {int output; } ;
struct TYPE_2__ {int sync; } ;
struct fb_info {TYPE_1__ var; struct lxfb_par* par; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct lxfb_par*,int ) ;
 int FUNC_1 (struct lxfb_par*,int ) ;
 int FUNC_2 (struct lxfb_par*,int ,int) ;
 int FUNC_3 (struct lxfb_par*,int ,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_32)
{
 struct lxfb_par *VAR_33 = VAR_32->par;
 u32 VAR_34, VAR_35;


 FUNC_3(VAR_33, VAR_31, 0);



 VAR_35 = FUNC_1(VAR_33, VAR_16);

 VAR_35 &= ~(VAR_19 | VAR_25 |
   VAR_18 | VAR_21);

 VAR_35 |= (VAR_20 | VAR_26
   | VAR_23);

 if (VAR_32->var.sync & VAR_0)
  VAR_35 |= VAR_18;

 if (VAR_32->var.sync & VAR_1)
  VAR_35 |= VAR_21;

 if (VAR_33->output & VAR_15) {
  u32 VAR_36, VAR_37;

  FUNC_2(VAR_33, VAR_6, 0);
  VAR_34 = VAR_9;

  if (!(VAR_32->var.sync & VAR_0))
   VAR_34 |= VAR_8;

  if (!(VAR_32->var.sync & VAR_1))
   VAR_34 |= VAR_10;

  FUNC_2(VAR_33, VAR_7, VAR_34);
  FUNC_2(VAR_33, VAR_2, VAR_3);

  VAR_36 = VAR_13;
  VAR_37 = VAR_12;

  FUNC_4(VAR_11, VAR_36, VAR_37);
 }

 if (VAR_33->output & VAR_14) {
  VAR_35 |= VAR_17 | VAR_24 |
    VAR_27 | VAR_22;
 }

 FUNC_3(VAR_33, VAR_16, VAR_35);



 if (VAR_33->output & VAR_14) {
  VAR_34 = FUNC_1(VAR_33, VAR_28);
  VAR_34 &= ~(VAR_30 | VAR_29);
  FUNC_3(VAR_33, VAR_28, VAR_34);
 }


 if (VAR_33->output & VAR_15)
  FUNC_2(VAR_33, VAR_4, FUNC_0(VAR_33, VAR_4) | VAR_5);
}
