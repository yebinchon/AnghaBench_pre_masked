
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct scatterlist {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {int tx_no_mem; int tx_full_ring; } ;
struct cfv_info {int watermark_tx; TYPE_7__* ndev; int tx_lock; TYPE_3__* vq_tx; scalar_t__ reserved_mem; int reserved_size; scalar_t__ genpool; TYPE_1__ stats; } ;
struct buf_info {int dummy; } ;
struct TYPE_10__ {int tx_dropped; int tx_bytes; int tx_packets; } ;
struct TYPE_12__ {TYPE_2__ stats; } ;
struct TYPE_11__ {scalar_t__ num_free; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct buf_info* FUNC_0 (struct cfv_info*,struct sk_buff*,struct scatterlist*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct cfv_info*,struct buf_info*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 struct cfv_info* FUNC_5 (struct net_device*) ;
 int FUNC_6 (TYPE_7__*,char*,...) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*,struct scatterlist*,int,struct buf_info*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct cfv_info *VAR_4 = FUNC_5(VAR_3);
 struct buf_info *VAR_5;
 struct scatterlist VAR_6;
 unsigned long VAR_7;
 bool VAR_8 = 0;
 int VAR_9;


 FUNC_1(VAR_4->vq_tx);
 FUNC_9(&VAR_4->tx_lock, VAR_7);






 if (FUNC_11(VAR_4->vq_tx->num_free <= FUNC_8())) {
  VAR_8 = 1;
  VAR_4->stats.tx_full_ring++;
 }




 VAR_5 = FUNC_0(VAR_4, VAR_2, &VAR_6);
 if (FUNC_11(!VAR_5)) {
  VAR_4->stats.tx_no_mem++;
  VAR_8 = 1;

  if (VAR_4->reserved_mem && VAR_4->genpool) {
   FUNC_4(VAR_4->genpool, VAR_4->reserved_mem,
          VAR_4->reserved_size);
   VAR_4->reserved_mem = 0;
   VAR_5 = FUNC_0(VAR_4, VAR_2, &VAR_6);
  }
 }

 if (FUNC_11(VAR_8)) {

  VAR_4->watermark_tx = FUNC_14(VAR_4->vq_tx) / 4;

  FUNC_13(VAR_4->vq_tx);
  FUNC_7(VAR_3);
 }

 if (FUNC_11(!VAR_5)) {

  FUNC_6(VAR_4->ndev, "Out of gen_pool memory\n");
  goto err;
 }

 VAR_9 = FUNC_12(VAR_4->vq_tx, &VAR_6, 1, VAR_5, VAR_0);
 if (FUNC_11((VAR_9 < 0))) {

  FUNC_6(VAR_4->ndev, "Failed adding buffer to TX vring:%d\n",
       VAR_9);
  goto err;
 }


 VAR_4->ndev->stats.tx_packets++;
 VAR_4->ndev->stats.tx_bytes += VAR_2->len;
 FUNC_10(&VAR_4->tx_lock, VAR_7);


 FUNC_15(VAR_4->vq_tx);

 FUNC_2(VAR_2);
 return VAR_1;
err:
 FUNC_10(&VAR_4->tx_lock, VAR_7);
 VAR_4->ndev->stats.tx_dropped++;
 FUNC_3(VAR_4, VAR_5);
 FUNC_2(VAR_2);
 return VAR_1;
}
