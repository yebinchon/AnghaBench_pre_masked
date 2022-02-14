
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_otg_caps {scalar_t__ adp_support; scalar_t__ srp_support; scalar_t__ hnp_support; } ;
struct device {int parent; } ;
struct ci_hw_td {int dummy; } ;
struct ci_hw_qh {int dummy; } ;
struct TYPE_6__ {int quirk_avoids_skb_reserve; int is_otg; int dev; int * ep0; int ep_list; struct usb_otg_caps* otg_caps; int name; int max_speed; int speed; int * ops; } ;
struct ci_hdrc {int * qh_pool; int * td_pool; TYPE_3__ gadget; TYPE_2__* ep0in; scalar_t__ is_otg; TYPE_1__* platdata; struct device* dev; } ;
struct TYPE_5__ {int ep; } ;
struct TYPE_4__ {int flags; int name; struct usb_otg_caps ci_otg_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ci_hdrc*) ;
 void* FUNC_2 (char*,int ,int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ci_hdrc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,TYPE_3__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct ci_hdrc *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct usb_otg_caps *VAR_8 = &VAR_6->platdata->ci_otg_caps;
 int VAR_9 = 0;

 VAR_6->gadget.ops = &VAR_5;
 VAR_6->gadget.speed = VAR_4;
 VAR_6->gadget.max_speed = VAR_3;
 VAR_6->gadget.name = VAR_6->platdata->name;
 VAR_6->gadget.otg_caps = VAR_8;

 if (VAR_6->platdata->flags & VAR_1)
  VAR_6->gadget.quirk_avoids_skb_reserve = 1;

 if (VAR_6->is_otg && (VAR_8->hnp_support || VAR_8->srp_support ||
      VAR_8->adp_support))
  VAR_6->gadget.is_otg = 1;

 FUNC_0(&VAR_6->gadget.ep_list);


 VAR_6->qh_pool = FUNC_2("ci_hw_qh", VAR_7->parent,
           sizeof(struct ci_hw_qh),
           64, VAR_0);
 if (VAR_6->qh_pool == ((void*)0))
  return -VAR_2;

 VAR_6->td_pool = FUNC_2("ci_hw_td", VAR_7->parent,
           sizeof(struct ci_hw_td),
           64, VAR_0);
 if (VAR_6->td_pool == ((void*)0)) {
  VAR_9 = -VAR_2;
  goto free_qh_pool;
 }

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  goto free_pools;

 VAR_6->gadget.ep0 = &VAR_6->ep0in->ep;

 VAR_9 = FUNC_7(VAR_7, &VAR_6->gadget);
 if (VAR_9)
  goto destroy_eps;

 FUNC_6(&VAR_6->gadget.dev);
 FUNC_5(&VAR_6->gadget.dev);

 return VAR_9;

destroy_eps:
 FUNC_1(VAR_6);
free_pools:
 FUNC_3(VAR_6->td_pool);
free_qh_pool:
 FUNC_3(VAR_6->qh_pool);
 return VAR_9;
}
