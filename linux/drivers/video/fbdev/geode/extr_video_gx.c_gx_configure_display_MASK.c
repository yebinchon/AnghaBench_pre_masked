
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gxfb_par {scalar_t__ enable_crt; } ;
struct TYPE_2__ {int sync; } ;
struct fb_info {TYPE_1__ var; struct gxfb_par* par; } ;


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
 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct gxfb_par*,int ) ;
 int FUNC_2 (struct gxfb_par*,int ,int) ;

void FUNC_3(struct fb_info *VAR_15)
{
 struct gxfb_par *VAR_16 = VAR_15->par;
 u32 VAR_17, VAR_18;


 VAR_17 = FUNC_1(VAR_16, VAR_2);


 VAR_17 &= ~(VAR_10 | VAR_9);
 FUNC_2(VAR_16, VAR_2, VAR_17);


 VAR_17 &= ~(VAR_5
    | VAR_4 | VAR_7
    | VAR_10 | VAR_9);


 VAR_17 |= VAR_6;


 VAR_17 |= VAR_9 | VAR_10;

 VAR_18 = FUNC_1(VAR_16, VAR_11);


 VAR_18 |= VAR_14;

 if (VAR_16->enable_crt) {


  VAR_18 &= ~(VAR_12 | VAR_13);
  FUNC_2(VAR_16, VAR_11, VAR_18);




  if (!(VAR_15->var.sync & VAR_0))
   VAR_17 |= VAR_4;
  if (!(VAR_15->var.sync & VAR_1))
   VAR_17 |= VAR_7;
 } else {

  VAR_18 |= (VAR_12 | VAR_13);
  FUNC_2(VAR_16, VAR_11, VAR_18);
 }




 VAR_17 |= VAR_3 | VAR_8;



 FUNC_2(VAR_16, VAR_2, VAR_17);



 if (VAR_16->enable_crt == 0)
  FUNC_0(VAR_15);
}
