
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif_queue {int rx; int vif; int tx; } ;
struct xen_netif_tx_sring {int dummy; } ;
typedef struct xen_netif_tx_sring xen_netif_rx_sring ;
typedef int grant_ref_t ;


 int FUNC_0 (int *,struct xen_netif_tx_sring*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int,void**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct xenvif_queue*) ;

int FUNC_4(struct xenvif_queue *VAR_2,
       grant_ref_t VAR_3,
       grant_ref_t VAR_4)
{
 void *VAR_5;
 struct xen_netif_tx_sring *VAR_6;
 struct xen_netif_rx_sring *VAR_7;

 int VAR_8 = -VAR_0;

 VAR_8 = FUNC_1(FUNC_2(VAR_2->vif),
         &VAR_3, 1, &VAR_5);
 if (VAR_8)
  goto err;

 VAR_6 = (struct xen_netif_tx_sring *)VAR_5;
 FUNC_0(&VAR_2->tx, VAR_6, VAR_1);

 VAR_8 = FUNC_1(FUNC_2(VAR_2->vif),
         &VAR_4, 1, &VAR_5);
 if (VAR_8)
  goto err;

 VAR_7 = (struct xen_netif_rx_sring *)VAR_5;
 FUNC_0(&VAR_2->rx, VAR_7, VAR_1);

 return 0;

err:
 FUNC_3(VAR_2);
 return VAR_8;
}
