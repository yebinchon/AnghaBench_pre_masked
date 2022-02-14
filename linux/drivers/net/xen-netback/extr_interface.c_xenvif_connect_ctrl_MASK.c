
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * sring; } ;
struct xenvif {int ctrl_irq; TYPE_1__ ctrl; int domid; struct net_device* dev; } ;
struct xen_netif_ctrl_sring {int dummy; } ;
struct net_device {int name; } ;
typedef int grant_ref_t ;


 int FUNC_0 (TYPE_1__*,struct xen_netif_ctrl_sring*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,int *,int ,int ,char*,struct xenvif*) ;
 int FUNC_4 (int,struct xenvif*) ;
 int FUNC_5 (int ,int *,int,void**) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (struct xenvif*) ;
 int FUNC_8 (struct xenvif*) ;
 int FUNC_9 (struct xenvif*) ;

int FUNC_10(struct xenvif *VAR_3, grant_ref_t VAR_4,
   unsigned int VAR_5)
{
 struct net_device *VAR_6 = VAR_3->dev;
 void *VAR_7;
 struct xen_netif_ctrl_sring *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_5(FUNC_9(VAR_3),
         &VAR_4, 1, &VAR_7);
 if (VAR_9)
  goto err;

 VAR_8 = (struct xen_netif_ctrl_sring *)VAR_7;
 FUNC_0(&VAR_3->ctrl, VAR_8, VAR_1);

 VAR_9 = FUNC_1(VAR_3->domid, VAR_5);
 if (VAR_9 < 0)
  goto err_unmap;

 VAR_3->ctrl_irq = VAR_9;

 FUNC_8(VAR_3);

 VAR_9 = FUNC_3(VAR_3->ctrl_irq, ((void*)0), VAR_2,
       VAR_0, "xen-netback-ctrl", VAR_3);
 if (VAR_9) {
  FUNC_2("Could not setup irq handler for %s\n", VAR_6->name);
  goto err_deinit;
 }

 return 0;

err_deinit:
 FUNC_7(VAR_3);
 FUNC_4(VAR_3->ctrl_irq, VAR_3);
 VAR_3->ctrl_irq = 0;

err_unmap:
 FUNC_6(FUNC_9(VAR_3),
    VAR_3->ctrl.sring);
 VAR_3->ctrl.sring = ((void*)0);

err:
 return VAR_9;
}
