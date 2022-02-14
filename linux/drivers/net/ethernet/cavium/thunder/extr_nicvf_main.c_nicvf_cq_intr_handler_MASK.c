
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct snd_queue {int free_cnt; } ;
struct rcv_queue {int dummy; } ;
struct queue_set {struct rcv_queue* rq; struct snd_queue* sq; struct cmp_queue* cq; } ;
struct nicvf {unsigned int xdp_tx_queues; TYPE_2__* drv_stats; struct nicvf* pnicvf; struct net_device* netdev; scalar_t__ xdp_prog; struct queue_set* qs; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct napi_struct {int dummy; } ;
struct cqe_rx_t {int cqe_type; } ;
struct TYPE_3__ {int q_len; } ;
struct cmp_queue {int lock; TYPE_1__ dmem; } ;
struct TYPE_4__ {int txq_wake; } ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmp_queue*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 struct netdev_queue* FUNC_2 (struct net_device*,unsigned int) ;
 struct nicvf* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct netdev_queue*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct nicvf*,int ,struct net_device*,char*,unsigned int) ;
 unsigned int FUNC_9 (struct nicvf*,size_t) ;
 int FUNC_10 (struct snd_queue*,int) ;
 int FUNC_11 (struct nicvf*,int ,size_t) ;
 int FUNC_12 (struct nicvf*,int ,size_t,int) ;
 int FUNC_13 (struct net_device*,struct napi_struct*,struct cqe_rx_t*,struct snd_queue*,struct rcv_queue*) ;
 int FUNC_14 (struct net_device*,void*,int,int*,unsigned int*,unsigned int*) ;
 int FUNC_15 (struct net_device*,void*) ;
 int FUNC_16 (struct nicvf*,struct snd_queue*,size_t) ;
 int FUNC_17 (struct cqe_rx_t*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_22(struct net_device *VAR_6, u8 VAR_7,
     struct napi_struct *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = 0, VAR_12 = 0;
 int VAR_13, VAR_14;
 int VAR_15 = 0;
 struct nicvf *VAR_16 = FUNC_3(VAR_6);
 struct queue_set *VAR_17 = VAR_16->qs;
 struct cmp_queue *VAR_18 = &VAR_17->cq[VAR_7];
 struct cqe_rx_t *VAR_19;
 struct netdev_queue *VAR_20;
 struct snd_queue *VAR_21 = &VAR_17->sq[VAR_7];
 struct rcv_queue *VAR_22 = &VAR_17->rq[VAR_7];
 unsigned int VAR_23 = 0, VAR_24 = 0, VAR_25;

 FUNC_19(&VAR_18->lock);
loop:
 VAR_10 = 0;

 VAR_13 = FUNC_11(VAR_16, VAR_4, VAR_7);
 VAR_13 &= VAR_0;
 if (!VAR_13)
  goto done;


 VAR_14 = FUNC_11(VAR_16, VAR_3, VAR_7) >> 9;
 VAR_14 &= 0xFFFF;

 while (VAR_10 < VAR_13) {

  VAR_19 = (struct cqe_rx_t *)FUNC_0(VAR_18, VAR_14);
  VAR_14++;
  VAR_14 &= (VAR_18->dmem.q_len - 1);

  FUNC_17((struct cqe_rx_t *)FUNC_0(VAR_18, VAR_14));

  if ((VAR_11 >= VAR_9) && VAR_8 &&
      (VAR_19->cqe_type != 129)) {
   break;
  }

  switch (VAR_19->cqe_type) {
  case 132:
   FUNC_13(VAR_6, VAR_8, VAR_19, VAR_21, VAR_22);
   VAR_11++;
  break;
  case 129:
   FUNC_14(VAR_6, (void *)VAR_19,
           VAR_9, &VAR_15,
           &VAR_23, &VAR_24);
   VAR_12++;
  break;
  case 128:
   FUNC_15(VAR_6, (void *)VAR_19);
  break;
  case 133:
  case 131:
  case 130:

  break;
  }
  VAR_10++;
 }


 FUNC_12(VAR_16, VAR_2,
         VAR_7, VAR_10);

 if ((VAR_11 < VAR_9) && VAR_8)
  goto loop;

done:

 if (VAR_15)
  FUNC_10(VAR_21, VAR_15);

 VAR_25 = FUNC_9(VAR_16, VAR_7);

 if (VAR_16->pnicvf->xdp_prog) {
  if (VAR_25 < VAR_16->pnicvf->xdp_tx_queues) {
   FUNC_16(VAR_16, VAR_21, VAR_7);
   goto out;
  }
  VAR_16 = VAR_16->pnicvf;
  VAR_25 -= VAR_16->pnicvf->xdp_tx_queues;
 }


 if (VAR_12 ||
     (FUNC_1(&VAR_21->free_cnt) >= VAR_1)) {
  VAR_6 = VAR_16->pnicvf->netdev;
  VAR_20 = FUNC_2(VAR_6, VAR_25);
  if (VAR_23)
   FUNC_4(VAR_20, VAR_23, VAR_24);


  FUNC_18();
  if (FUNC_6(VAR_20) && FUNC_5(VAR_6)) {
   FUNC_7(VAR_20);
   VAR_16 = VAR_16->pnicvf;
   FUNC_21(VAR_16->drv_stats->txq_wake);
   FUNC_8(VAR_16, VAR_5, VAR_6,
       "Transmit queue wakeup SQ%d\n", VAR_25);
  }
 }

out:
 FUNC_20(&VAR_18->lock);
 return VAR_11;
}
