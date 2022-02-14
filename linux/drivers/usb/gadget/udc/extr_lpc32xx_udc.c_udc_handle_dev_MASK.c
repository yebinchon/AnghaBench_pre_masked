
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct lpc32xx_udc {scalar_t__ vbus; int poweron; int pullup_job; scalar_t__ driver; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpc32xx_udc*) ;
 int FUNC_2 (struct lpc32xx_udc*,int) ;
 int FUNC_3 (struct lpc32xx_udc*,int) ;
 int FUNC_4 (struct lpc32xx_udc*) ;
 int FUNC_5 (struct lpc32xx_udc*,int ) ;
 int FUNC_6 (struct lpc32xx_udc*,int ) ;

__attribute__((used)) static void FUNC_7(struct lpc32xx_udc *VAR_8)
{
 u32 VAR_9;

 FUNC_6(VAR_8, VAR_0);
 VAR_9 = FUNC_5(VAR_8, VAR_1);

 if (VAR_9 & VAR_4)
  FUNC_4(VAR_8);
 else if (VAR_9 & VAR_3)
  FUNC_2(VAR_8, (VAR_9 & VAR_2));
 else if (VAR_9 & VAR_6) {
  if (VAR_9 & VAR_5) {
   if (VAR_8->vbus == 0)
    FUNC_1(VAR_8);
   else if ((VAR_8->gadget.speed != VAR_7) &&
     VAR_8->driver) {

    VAR_8->poweron = 0;
    FUNC_0(&VAR_8->pullup_job);
    FUNC_3(VAR_8, 1);
   }
  } else if ((VAR_8->gadget.speed != VAR_7) &&
      VAR_8->driver && VAR_8->vbus) {
   FUNC_3(VAR_8, 0);

   VAR_8->poweron = 1;
   FUNC_0(&VAR_8->pullup_job);
  }
 }
}
