
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speed; } ;
struct pxa25x_udc {TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pxa25x_udc*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pxa25x_udc*,int ) ;
 int FUNC_3 (struct pxa25x_udc*,int) ;
 int FUNC_4 (struct pxa25x_udc*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct pxa25x_udc *VAR_8)
{

 FUNC_3(VAR_8, VAR_1|VAR_0);
 FUNC_4(VAR_8, VAR_5, 0xff);
 FUNC_4(VAR_8, VAR_6, 0xff);
 FUNC_4(VAR_8, VAR_3, VAR_4);


 FUNC_1();

 FUNC_2(VAR_8, VAR_2);

 FUNC_0 (VAR_8);
 VAR_8->gadget.speed = VAR_7;
}
