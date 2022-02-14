
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct enic {unsigned int wq_count; int * wq_lock; struct vnic_wq* wq; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {scalar_t__ gso_size; scalar_t__ nr_frags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct enic*,struct vnic_wq*,struct sk_buff*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct netdev_queue* FUNC_3 (struct net_device*,unsigned int) ;
 struct enic* FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct netdev_queue*) ;
 scalar_t__ FUNC_7 (struct netdev_queue*) ;
 unsigned int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct vnic_wq*) ;
 int FUNC_15 (struct vnic_wq*) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct sk_buff *VAR_5,
 struct net_device *VAR_6)
{
 struct enic *VAR_7 = FUNC_4(VAR_6);
 struct vnic_wq *VAR_8;
 unsigned int VAR_9;
 struct netdev_queue *VAR_10;

 if (VAR_5->len <= 0) {
  FUNC_0(VAR_5);
  return VAR_4;
 }

 VAR_9 = FUNC_8(VAR_5) % VAR_7->wq_count;
 VAR_8 = &VAR_7->wq[VAR_9];
 VAR_10 = FUNC_3(VAR_6, VAR_9);






 if (FUNC_10(VAR_5)->gso_size == 0 &&
     FUNC_10(VAR_5)->nr_frags + 1 > VAR_1 &&
     FUNC_9(VAR_5)) {
  FUNC_0(VAR_5);
  return VAR_4;
 }

 FUNC_12(&VAR_7->wq_lock[VAR_9]);

 if (FUNC_14(VAR_8) <
     FUNC_10(VAR_5)->nr_frags + VAR_0) {
  FUNC_6(VAR_10);

  FUNC_2(VAR_6, "BUG! Tx ring full when queue awake!\n");
  FUNC_13(&VAR_7->wq_lock[VAR_9]);
  return VAR_3;
 }

 FUNC_1(VAR_7, VAR_8, VAR_5);

 if (FUNC_14(VAR_8) < VAR_2 + VAR_0)
  FUNC_6(VAR_10);
 FUNC_11(VAR_5);
 if (!FUNC_5() || FUNC_7(VAR_10))
  FUNC_15(VAR_8);

 FUNC_13(&VAR_7->wq_lock[VAR_9]);

 return VAR_4;
}
