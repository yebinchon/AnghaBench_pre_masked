
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ irqs; } ;
struct TYPE_3__ {int speed; } ;
struct pxa25x_udc {scalar_t__ has_cfr; TYPE_2__ stats; TYPE_1__ gadget; } ;


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
 int FUNC_0 (struct pxa25x_udc*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pxa25x_udc*,int) ;
 int FUNC_3 (struct pxa25x_udc*,int) ;
 int FUNC_4 (struct pxa25x_udc*,int ) ;
 int FUNC_5 (struct pxa25x_udc*,int) ;
 int FUNC_6 (struct pxa25x_udc*,int ,int) ;

__attribute__((used)) static void FUNC_7 (struct pxa25x_udc *VAR_16)
{
 FUNC_3(VAR_16, VAR_10);


 FUNC_2(VAR_16, VAR_8| VAR_5);

 FUNC_0(VAR_16);
 VAR_16->gadget.speed = VAR_15;
 VAR_16->stats.irqs = 0;







 FUNC_5(VAR_16, VAR_10);
 if (!(FUNC_4(VAR_16, VAR_3) & VAR_9))
  FUNC_2(VAR_16, VAR_6);

 if (VAR_16->has_cfr ) {



  FUNC_6(VAR_16, VAR_0, VAR_1 | VAR_2);
 } else {






  FUNC_6(VAR_16, VAR_11, 0x00);
  FUNC_6(VAR_16, VAR_12, 0x00);
 }


 FUNC_3(VAR_16, VAR_7 | VAR_4);


 FUNC_6(VAR_16, VAR_13, FUNC_4(VAR_16, VAR_13) & ~VAR_14);


 FUNC_1();
}
