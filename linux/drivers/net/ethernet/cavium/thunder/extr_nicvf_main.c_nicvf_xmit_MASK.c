
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_queue {int free_cnt; } ;
struct sk_buff {scalar_t__ len; } ;
struct nicvf {TYPE_2__* drv_stats; TYPE_1__* qs; int netdev; scalar_t__* snicvf; scalar_t__ xdp_tx_queues; scalar_t__ xdp_prog; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int txq_stop; } ;
struct TYPE_3__ {struct snd_queue* sq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct netdev_queue* FUNC_2 (struct net_device*,int) ;
 struct nicvf* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct netdev_queue*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct nicvf*,int ,struct net_device*,char*,int) ;
 int FUNC_9 (struct nicvf*,struct snd_queue*,struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int VAR_5 ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct nicvf *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = FUNC_10(VAR_6);
 struct netdev_queue *VAR_10 = FUNC_2(VAR_7, VAR_9);
 struct nicvf *VAR_11;
 struct snd_queue *VAR_12;
 int VAR_13;


 if (VAR_6->len <= VAR_0) {
  FUNC_1(VAR_6);
  return VAR_4;
 }





 if (VAR_8->xdp_prog)
  VAR_9 += VAR_8->xdp_tx_queues;

 VAR_11 = VAR_8;

 if (VAR_9 >= VAR_1) {
  VAR_13 = VAR_9 / VAR_1;
  VAR_11 = (struct nicvf *)VAR_8->snicvf[VAR_13 - 1];
  if (!VAR_11) {
   FUNC_4(VAR_8->netdev,
        "Secondary Qset#%d's ptr not initialized\n",
        VAR_13 - 1);
   FUNC_1(VAR_6);
   return VAR_4;
  }
  VAR_9 = VAR_9 % VAR_1;
 }

 VAR_12 = &VAR_11->qs->sq[VAR_9];
 if (!FUNC_5(VAR_10) &&
     !FUNC_9(VAR_11, VAR_12, VAR_6, VAR_9)) {
  FUNC_6(VAR_10);


  FUNC_11();


  if (FUNC_0(&VAR_12->free_cnt) > VAR_2) {
   FUNC_7(VAR_10);
  } else {
   FUNC_12(VAR_8->drv_stats->txq_stop);
   FUNC_8(VAR_8, VAR_5, VAR_7,
       "Transmit ring full, stopping SQ%d\n", VAR_9);
  }
  return VAR_3;
 }

 return VAR_4;
}
