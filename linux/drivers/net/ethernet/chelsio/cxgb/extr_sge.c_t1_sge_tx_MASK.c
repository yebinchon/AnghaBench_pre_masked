
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ dev; } ;
struct TYPE_3__ {int * cmdQ_full; } ;
struct sge {scalar_t__ tx_sched; TYPE_1__ stats; int stopped_tx_queues; struct cmdQ* cmdQ; } ;
struct net_device {int if_port; } ;
struct cmdQ {unsigned int pidx; unsigned int size; unsigned int in_use; unsigned int stop_thres; unsigned int genbit; int lock; int status; } ;
struct adapter {scalar_t__ regs; int name; struct sge* sge; } ;
struct TYPE_4__ {int nr_frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct sge*,struct cmdQ*) ;
 struct sk_buff* FUNC_7 (struct sge*,struct sk_buff*,unsigned int) ;
 int FUNC_8 (int ,int *) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct adapter*,struct sk_buff*,unsigned int,unsigned int,struct cmdQ*) ;
 int FUNC_16 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_7, struct adapter *VAR_8,
       unsigned int VAR_9, struct net_device *VAR_10)
{
 struct sge *VAR_11 = VAR_8->sge;
 struct cmdQ *VAR_12 = &VAR_11->cmdQ[VAR_9];
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = 0;

 FUNC_10(&VAR_12->lock);

 FUNC_6(VAR_11, VAR_12);

 VAR_14 = VAR_12->pidx;
 VAR_13 = VAR_12->size - VAR_12->in_use;
 VAR_16 = 1 + FUNC_9(VAR_7)->nr_frags;
 VAR_16 += FUNC_1(VAR_7);


 if (FUNC_14(VAR_13 < VAR_16)) {
  if (!FUNC_3(VAR_10)) {
   FUNC_4(VAR_10);
   FUNC_8(VAR_10->if_port, &VAR_11->stopped_tx_queues);
   VAR_11->stats.cmdQ_full[2]++;
   FUNC_5("%s: Tx ring full while queue awake!\n",
          VAR_8->name);
  }
  FUNC_12(&VAR_12->lock);
  return VAR_5;
 }

 if (FUNC_14(VAR_13 - VAR_16 < VAR_12->stop_thres)) {
  FUNC_4(VAR_10);
  FUNC_8(VAR_10->if_port, &VAR_11->stopped_tx_queues);
  VAR_11->stats.cmdQ_full[2]++;
 }




 if (VAR_11->tx_sched && !VAR_9 && VAR_7->dev) {
use_sched:
  VAR_17 = 1;



  VAR_7 = FUNC_7(VAR_11, VAR_7, VAR_13);
  if (!VAR_7) {
   FUNC_12(&VAR_12->lock);
   return VAR_6;
  }
  VAR_14 = VAR_12->pidx;
  VAR_16 = 1 + FUNC_9(VAR_7)->nr_frags;
  VAR_16 += FUNC_1(VAR_7);
 }

 VAR_12->in_use += VAR_16;
 VAR_15 = VAR_12->genbit;
 VAR_14 = VAR_12->pidx;
 VAR_12->pidx += VAR_16;
 if (VAR_12->pidx >= VAR_12->size) {
  VAR_12->pidx -= VAR_12->size;
  VAR_12->genbit ^= 1;
 }
 FUNC_12(&VAR_12->lock);

 FUNC_15(VAR_8, VAR_7, VAR_14, VAR_15, VAR_12);
 if (VAR_9)
  FUNC_2(VAR_8, VAR_4);
 else {
  FUNC_0(VAR_1, &VAR_12->status);
  if (FUNC_13(VAR_2, &VAR_12->status) == 0) {
   FUNC_8(VAR_1, &VAR_12->status);
   FUNC_16(VAR_3, VAR_8->regs + VAR_0);
  }
 }

 if (VAR_17) {
  if (FUNC_11(&VAR_12->lock)) {
   VAR_13 = VAR_12->size - VAR_12->in_use;
   VAR_7 = ((void*)0);
   goto use_sched;
  }
 }
 return VAR_6;
}
