
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct xen_netif_tx_sring {int dummy; } ;
typedef struct xen_netif_tx_sring xen_netif_rx_sring ;
struct TYPE_2__ {int * sring; } ;
struct netfront_queue {void* tx_ring_ref; void* rx_ring_ref; TYPE_1__ rx; TYPE_1__ tx; } ;
typedef void* grant_ref_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct xen_netif_tx_sring*,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct xen_netif_tx_sring*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (struct netfront_queue*) ;
 int FUNC_6 (struct netfront_queue*) ;
 int FUNC_7 (struct xenbus_device*,int,char*) ;
 int FUNC_8 (struct xenbus_device*,struct xen_netif_tx_sring*,int,void**) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_5,
   struct netfront_queue *VAR_6, unsigned int VAR_7)
{
 struct xen_netif_tx_sring *VAR_8;
 struct xen_netif_rx_sring *VAR_9;
 grant_ref_t VAR_10;
 int VAR_11;

 VAR_6->tx_ring_ref = VAR_2;
 VAR_6->rx_ring_ref = VAR_2;
 VAR_6->rx.sring = ((void*)0);
 VAR_6->tx.sring = ((void*)0);

 VAR_8 = (struct xen_netif_tx_sring *)FUNC_3(VAR_1 | VAR_4);
 if (!VAR_8) {
  VAR_11 = -VAR_0;
  FUNC_7(VAR_5, VAR_11, "allocating tx ring page");
  goto fail;
 }
 FUNC_1(VAR_8);
 FUNC_0(&VAR_6->tx, VAR_8, VAR_3);

 VAR_11 = FUNC_8(VAR_5, VAR_8, 1, &VAR_10);
 if (VAR_11 < 0)
  goto grant_tx_ring_fail;
 VAR_6->tx_ring_ref = VAR_10;

 VAR_9 = (struct xen_netif_rx_sring *)FUNC_3(VAR_1 | VAR_4);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  FUNC_7(VAR_5, VAR_11, "allocating rx ring page");
  goto alloc_rx_ring_fail;
 }
 FUNC_1(VAR_9);
 FUNC_0(&VAR_6->rx, VAR_9, VAR_3);

 VAR_11 = FUNC_8(VAR_5, VAR_9, 1, &VAR_10);
 if (VAR_11 < 0)
  goto grant_rx_ring_fail;
 VAR_6->rx_ring_ref = VAR_10;

 if (VAR_7)
  VAR_11 = FUNC_6(VAR_6);




 if (!VAR_7 || (VAR_7 && VAR_11))
  VAR_11 = FUNC_5(VAR_6);

 if (VAR_11)
  goto alloc_evtchn_fail;

 return 0;




alloc_evtchn_fail:
 FUNC_4(VAR_6->rx_ring_ref, 0);
grant_rx_ring_fail:
 FUNC_2((unsigned long)VAR_9);
alloc_rx_ring_fail:
 FUNC_4(VAR_6->tx_ring_ref, 0);
grant_tx_ring_fail:
 FUNC_2((unsigned long)VAR_8);
fail:
 return VAR_11;
}
