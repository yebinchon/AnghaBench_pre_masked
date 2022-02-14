
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ speed; } ;
struct pxa25x_udc {int active; int clk; TYPE_3__* driver; TYPE_1__ gadget; int suspended; scalar_t__ pullup; scalar_t__ vbus; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_6__ {TYPE_2__ driver; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxa25x_udc*,TYPE_3__*) ;
 int FUNC_4 (struct pxa25x_udc*) ;
 int FUNC_5 (struct pxa25x_udc*) ;

__attribute__((used)) static int FUNC_6(struct pxa25x_udc *VAR_1)
{
 int VAR_2 = VAR_1->vbus && VAR_1->pullup && !VAR_1->suspended;
 FUNC_0("%s\n", VAR_2 ? "active" : "inactive");
 if (VAR_2) {
  if (!VAR_1->active) {
   VAR_1->active = 1;

   FUNC_2(VAR_1->clk);
   FUNC_5(VAR_1);
  }
 } else {
  if (VAR_1->active) {
   if (VAR_1->gadget.speed != VAR_0) {
    FUNC_0("disconnect %s\n", VAR_1->driver
     ? VAR_1->driver->driver.name
     : "(no driver)");
    FUNC_3(VAR_1, VAR_1->driver);
   }
   FUNC_4(VAR_1);

   FUNC_1(VAR_1->clk);
   VAR_1->active = 0;
  }

 }
 return 0;
}
