
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req_cons; } ;
struct xenvif_queue {TYPE_1__* vif; TYPE_2__ tx; } ;
struct xen_netif_extra_info {int flags; int type; } ;
typedef int extra ;
struct TYPE_3__ {int dev; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,struct xen_netif_extra_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xen_netif_extra_info*,struct xen_netif_extra_info*,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct xenvif_queue *VAR_4,
        struct xen_netif_extra_info *VAR_5,
        unsigned int *VAR_6,
        int VAR_7)
{
 struct xen_netif_extra_info VAR_8;
 RING_IDX VAR_9 = VAR_4->tx.req_cons;

 do {
  if (FUNC_3(VAR_7-- <= 0)) {
   FUNC_2(VAR_4->vif->dev, "Missing extra info\n");
   FUNC_4(VAR_4->vif);
   return -VAR_0;
  }

  FUNC_0(&VAR_4->tx, VAR_9, &VAR_8);

  VAR_4->tx.req_cons = ++VAR_9;
  (*VAR_6)++;

  if (FUNC_3(!VAR_8.type ||
        VAR_8.type >= VAR_3)) {
   FUNC_2(VAR_4->vif->dev,
       "Invalid extra type: %d\n", VAR_8.type);
   FUNC_4(VAR_4->vif);
   return -VAR_1;
  }

  FUNC_1(&VAR_5[VAR_8.type - 1], &VAR_8, sizeof(VAR_8));
 } while (VAR_8.flags & VAR_2);

 return VAR_7;
}
