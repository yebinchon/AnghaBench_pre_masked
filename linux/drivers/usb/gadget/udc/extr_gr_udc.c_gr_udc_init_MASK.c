
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int * ep0; int speed; int ep_list; } ;
struct gr_udc {int nepo; int nepi; TYPE_6__* epi; TYPE_4__* epo; scalar_t__ remote_wakeup; int ep_list; TYPE_2__ gadget; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_12__ {TYPE_5__* regs; int ep; } ;
struct TYPE_11__ {int dmactrl; int epctrl; } ;
struct TYPE_10__ {TYPE_3__* regs; } ;
struct TYPE_9__ {int dmactrl; int epctrl; } ;
struct TYPE_7__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct gr_udc*,int,int,int) ;
 int FUNC_2 (struct gr_udc*,int ) ;
 int FUNC_3 (struct gr_udc*,int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int,int*) ;

__attribute__((used)) static int FUNC_6(struct gr_udc *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->dev->of_node;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13 = 0;
 u32 VAR_14;

 FUNC_2(VAR_8, 0);

 FUNC_0(&VAR_8->gadget.ep_list);
 VAR_8->gadget.speed = VAR_7;
 VAR_8->gadget.ep0 = &VAR_8->epi[0].ep;

 FUNC_0(&VAR_8->ep_list);
 FUNC_3(VAR_8, VAR_2);

 for (VAR_12 = 0; VAR_12 < VAR_8->nepo; VAR_12++) {
  if (FUNC_5(VAR_9, "epobufsizes", VAR_12, &VAR_14))
   VAR_14 = 1024;
  VAR_13 = FUNC_1(VAR_8, VAR_12, 0, VAR_14);
  if (VAR_13)
   return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_8->nepi; VAR_12++) {
  if (FUNC_5(VAR_9, "epibufsizes", VAR_12, &VAR_14))
   VAR_14 = 1024;
  VAR_13 = FUNC_1(VAR_8, VAR_12, 1, VAR_14);
  if (VAR_13)
   return VAR_13;
 }


 VAR_8->remote_wakeup = 0;


 VAR_10 = (VAR_6 << VAR_4) | VAR_3;
 VAR_11 = VAR_1 | VAR_0;
 FUNC_4(&VAR_8->epo[0].regs->epctrl, VAR_10);
 FUNC_4(&VAR_8->epi[0].regs->epctrl, VAR_10 | VAR_5);
 FUNC_4(&VAR_8->epo[0].regs->dmactrl, VAR_11);
 FUNC_4(&VAR_8->epi[0].regs->dmactrl, VAR_11);

 return 0;
}
