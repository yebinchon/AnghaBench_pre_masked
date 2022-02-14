
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {scalar_t__ num_free; TYPE_1__* vdev; } ;
struct TYPE_4__ {int tx_flow_on; } ;
struct cfv_info {scalar_t__ watermark_tx; scalar_t__ reserved_mem; struct virtqueue* vq_tx; TYPE_2__ stats; int ndev; int reserved_size; scalar_t__ genpool; int tx_lock; } ;
struct buf_info {int dummy; } ;
struct TYPE_3__ {struct cfv_info* priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfv_info*,struct buf_info*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct virtqueue*) ;
 struct buf_info* FUNC_8 (struct virtqueue*,unsigned int*) ;
 int FUNC_9 (struct virtqueue*) ;

__attribute__((used)) static void FUNC_10(struct virtqueue *VAR_0)
{
 struct cfv_info *VAR_1 = VAR_0->vdev->priv;
 unsigned long VAR_2;

 FUNC_0(VAR_0 != VAR_1->vq_tx);

 for (;;) {
  unsigned int VAR_3;
  struct buf_info *VAR_4;


  FUNC_5(&VAR_1->tx_lock, VAR_2);
  VAR_4 = FUNC_8(VAR_0, &VAR_3);
  FUNC_6(&VAR_1->tx_lock, VAR_2);


  if (!VAR_4)
   break;

  FUNC_2(VAR_1, VAR_4);





  if (VAR_1->vq_tx->num_free <= VAR_1->watermark_tx)
   continue;


  if (VAR_1->reserved_mem == 0 && VAR_1->genpool)
   VAR_1->reserved_mem =
    FUNC_3(VAR_1->genpool,
            VAR_1->reserved_size);


  if (VAR_1->reserved_mem) {
   VAR_1->watermark_tx =
    FUNC_9(VAR_1->vq_tx);
   FUNC_4(VAR_1->ndev);



   FUNC_7(VAR_1->vq_tx);
   ++VAR_1->stats.tx_flow_on;
  } else {

   FUNC_1(VAR_1->watermark_tx >
          FUNC_9(VAR_1->vq_tx));
   VAR_1->watermark_tx +=
    FUNC_9(VAR_1->vq_tx) / 4;
  }
 }
}
