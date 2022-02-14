
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lxfb_par {int dummy; } ;
struct fb_info {struct lxfb_par* par; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int VAR_30 ;
 unsigned int VAR_31 ;
 int VAR_32 ;
 unsigned int VAR_33 ;
 unsigned int FUNC_0 (struct lxfb_par*,int ) ;
 int FUNC_1 (struct lxfb_par*,int ) ;
 unsigned int FUNC_2 (struct lxfb_par*,int ) ;
 unsigned int FUNC_3 (struct lxfb_par*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct lxfb_par*,int ,unsigned int) ;
 int FUNC_6 (struct lxfb_par*,int ,int) ;
 int FUNC_7 (struct lxfb_par*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_34)
{
 struct lxfb_par *VAR_35 = VAR_34->par;
 unsigned int VAR_36, VAR_37;



 FUNC_7(VAR_35, VAR_22, 0);
 FUNC_7(VAR_35, VAR_23, 0);
 FUNC_7(VAR_35, VAR_24, 0);


 VAR_36 = FUNC_0(VAR_35, VAR_4) & ~(VAR_8 |
   VAR_9);

 FUNC_5(VAR_35, VAR_4, VAR_36);

 VAR_36 = FUNC_3(VAR_35, VAR_32) & ~VAR_33;
 FUNC_7(VAR_35, VAR_32, VAR_36);

 FUNC_5(VAR_35, VAR_12, VAR_13 | VAR_16 |
   VAR_14 | VAR_15);

 VAR_36 = FUNC_0(VAR_35, VAR_10) & ~VAR_11;
 FUNC_5(VAR_35, VAR_10, VAR_36);

 VAR_36 = FUNC_0(VAR_35, VAR_0);
 FUNC_5(VAR_35, VAR_0, VAR_36 & ~VAR_1);


 FUNC_6(VAR_35, VAR_17, FUNC_1(VAR_35, VAR_17) & ~VAR_18);

 VAR_36 = FUNC_3(VAR_35, VAR_30) | VAR_31;
 FUNC_7(VAR_35, VAR_30, VAR_36);



 VAR_36 = FUNC_3(VAR_35, VAR_25);
 FUNC_7(VAR_35, VAR_25, VAR_36 & ~(VAR_26 | VAR_28 |
   VAR_29 | VAR_27));

 VAR_37 = FUNC_0(VAR_35, VAR_4);
 VAR_37 &= ~(VAR_5 | VAR_6);
 FUNC_5(VAR_35, VAR_4, VAR_37);


 VAR_36 = FUNC_0(VAR_35, VAR_2);
 VAR_36 &= ~VAR_3;
 FUNC_5(VAR_35, VAR_2, VAR_36);


 FUNC_4(1000);



 VAR_37 &= ~VAR_7;
 FUNC_5(VAR_35, VAR_4, VAR_37);



 do {
  VAR_36 = FUNC_2(VAR_35, VAR_19);
 } while ((VAR_36 & VAR_21) || !(VAR_36 & VAR_20));
}
