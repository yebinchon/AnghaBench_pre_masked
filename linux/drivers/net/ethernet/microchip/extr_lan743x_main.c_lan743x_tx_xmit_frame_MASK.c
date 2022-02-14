
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; int data; } ;
struct lan743x_tx {int ring_size; int ts_flags; int ring_lock; TYPE_2__* adapter; struct sk_buff* overflow_skb; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int netdev; } ;
struct TYPE_3__ {int tx_flags; int nr_frags; int * frags; int gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct lan743x_tx*,int const*,unsigned int) ;
 int FUNC_3 (struct lan743x_tx*,unsigned int,int) ;
 int FUNC_4 (struct lan743x_tx*,struct sk_buff*,int,int) ;
 scalar_t__ FUNC_5 (struct lan743x_tx*,int ,unsigned int,unsigned int,int,int) ;
 int FUNC_6 (struct lan743x_tx*) ;
 int FUNC_7 (struct lan743x_tx*,struct sk_buff*) ;
 unsigned int FUNC_8 (int ,unsigned short) ;
 int FUNC_9 (int ) ;
 unsigned int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 TYPE_1__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_16(struct lan743x_tx *VAR_6,
      struct sk_buff *VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned long VAR_12 = 0;
 bool VAR_13 = 0;
 bool VAR_14 = 0;
 int VAR_15 = 0;
 bool VAR_16 = 0;
 int VAR_17;

 VAR_8 = FUNC_7(VAR_6, VAR_7);

 FUNC_14(&VAR_6->ring_lock, VAR_12);
 if (VAR_8 >
  FUNC_6(VAR_6)) {
  if (VAR_8 > (VAR_6->ring_size - 1)) {
   FUNC_0(VAR_7);
  } else {

   VAR_6->overflow_skb = VAR_7;
   FUNC_9(VAR_6->adapter->netdev);
  }
  goto unlock;
 }


 if ((FUNC_13(VAR_7)->tx_flags & VAR_2) &&
     (VAR_6->ts_flags & VAR_5) &&
     (FUNC_1(VAR_6->adapter))) {
  FUNC_13(VAR_7)->tx_flags |= VAR_3;
  VAR_13 = 1;
  if (VAR_6->ts_flags & VAR_4)
   VAR_14 = 1;
 }
 VAR_11 = FUNC_10(VAR_7);
 VAR_10 = FUNC_12(VAR_7);
 VAR_15 = FUNC_13(VAR_7)->nr_frags;
 VAR_9 = VAR_10;
 VAR_16 = FUNC_11(VAR_7);
 if (VAR_16) {
  VAR_9 = FUNC_8(FUNC_13(VAR_7)->gso_size,
      (unsigned short)8);
 }

 if (FUNC_5(VAR_6,
       VAR_7->data, VAR_11,
       VAR_9,
       VAR_13,
       VAR_7->ip_summed == VAR_0)) {
  FUNC_0(VAR_7);
  goto unlock;
 }

 if (VAR_16)
  FUNC_3(VAR_6, VAR_10, VAR_15);

 if (VAR_15 <= 0)
  goto finish;

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++) {
  const skb_frag_t *VAR_18 = &(FUNC_13(VAR_7)->frags[VAR_17]);

  if (FUNC_2(VAR_6, VAR_18, VAR_10)) {





   FUNC_0(VAR_7);
   goto unlock;
  }
 }

finish:
 FUNC_4(VAR_6, VAR_7, VAR_13, VAR_14);

unlock:
 FUNC_15(&VAR_6->ring_lock, VAR_12);
 return VAR_1;
}
