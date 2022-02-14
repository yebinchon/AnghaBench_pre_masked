
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req_cons; } ;
struct xenvif_queue {TYPE_1__* vif; TYPE_2__ tx; } ;
struct xen_netif_tx_request {int flags; scalar_t__ size; int offset; int member_0; } ;
struct TYPE_3__ {int dev; } ;
typedef scalar_t__ RING_IDX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,struct xen_netif_tx_request*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int,...) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct xenvif_queue*,struct xen_netif_tx_request*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct xenvif_queue *VAR_8,
     struct xen_netif_tx_request *VAR_9,
     unsigned int VAR_10,
     struct xen_netif_tx_request *VAR_11,
     int VAR_12)
{
 RING_IDX VAR_13 = VAR_8->tx.req_cons;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16;

 if (!(VAR_9->flags & VAR_5))
  return 0;

 do {
  struct xen_netif_tx_request VAR_17 = { 0 };

  if (VAR_14 >= VAR_12) {
   FUNC_3(VAR_8->vif->dev,
       "Asked for %d slots but exceeds this limit\n",
       VAR_12);
   FUNC_5(VAR_8->vif);
   return -VAR_3;
  }




  if (FUNC_4(VAR_14 >= VAR_7)) {
   FUNC_3(VAR_8->vif->dev,
       "Malicious frontend using %d slots, threshold %u\n",
       VAR_14, VAR_7);
   FUNC_5(VAR_8->vif);
   return -VAR_0;
  }
  if (!VAR_15 && VAR_14 >= VAR_4) {
   if (FUNC_1())
    FUNC_2(VAR_8->vif->dev,
        "Too many slots (%d) exceeding limit (%d), dropping packet\n",
        VAR_14, VAR_4);
   VAR_15 = -VAR_0;
  }

  if (VAR_15)
   VAR_11 = &VAR_17;

  FUNC_0(&VAR_8->tx, VAR_13 + VAR_14, VAR_11);
  if (!VAR_15 && VAR_11->size > VAR_9->size) {
   if (FUNC_1())
    FUNC_2(VAR_8->vif->dev,
        "Invalid tx request, slot size %u > remaining size %u\n",
        VAR_11->size, VAR_9->size);
   VAR_15 = -VAR_2;
  }

  VAR_9->size -= VAR_11->size;
  VAR_14++;

  if (FUNC_4((VAR_11->offset + VAR_11->size) > VAR_6)) {
   FUNC_3(VAR_8->vif->dev, "Cross page boundary, txp->offset: %u, size: %u\n",
     VAR_11->offset, VAR_11->size);
   FUNC_5(VAR_8->vif);
   return -VAR_1;
  }

  VAR_16 = VAR_11->flags & VAR_5;

  if (!VAR_15)
   VAR_11++;

 } while (VAR_16);

 if (VAR_15) {
  FUNC_6(VAR_8, VAR_9, VAR_10, VAR_13 + VAR_14);
  return VAR_15;
 }

 return VAR_14;
}
