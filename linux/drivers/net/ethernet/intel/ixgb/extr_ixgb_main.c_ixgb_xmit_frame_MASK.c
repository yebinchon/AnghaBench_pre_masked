
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {unsigned int next_to_use; TYPE_1__* buffer_info; } ;
struct ixgb_adapter {TYPE_2__ tx_ring; int flags; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {scalar_t__ time_stamp; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_device*,TYPE_2__*,int ) ;
 int FUNC_2 (struct ixgb_adapter*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct ixgb_adapter*,struct sk_buff*) ;
 int FUNC_4 (struct ixgb_adapter*,struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct ixgb_adapter*,int,int,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;
 struct ixgb_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static netdev_tx_t
FUNC_12(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct ixgb_adapter *VAR_9 = FUNC_7(VAR_8);
 unsigned int VAR_10;
 unsigned int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14;

 if (FUNC_10(VAR_6, &VAR_9->flags)) {
  FUNC_0(VAR_7);
  return VAR_5;
 }

 if (VAR_7->len <= 0) {
  FUNC_0(VAR_7);
  return VAR_5;
 }

 if (FUNC_11(FUNC_1(VAR_8, &VAR_9->tx_ring,
                     VAR_0)))
  return VAR_4;

 if (FUNC_9(VAR_7)) {
  VAR_11 |= VAR_3;
  VAR_12 = FUNC_8(VAR_7);
 }

 VAR_10 = VAR_9->tx_ring.next_to_use;

 VAR_14 = FUNC_2(VAR_9, VAR_7);
 if (VAR_14 < 0) {
  FUNC_0(VAR_7);
  return VAR_5;
 }

 if (FUNC_6(VAR_14))
  VAR_11 |= VAR_2;
 else if (FUNC_3(VAR_9, VAR_7))
  VAR_11 |= VAR_1;

 VAR_13 = FUNC_4(VAR_9, VAR_7, VAR_10);

 if (VAR_13) {
  FUNC_5(VAR_9, VAR_13, VAR_12, VAR_11);

  FUNC_1(VAR_8, &VAR_9->tx_ring, VAR_0);

 } else {
  FUNC_0(VAR_7);
  VAR_9->tx_ring.buffer_info[VAR_10].time_stamp = 0;
  VAR_9->tx_ring.next_to_use = VAR_10;
 }

 return VAR_5;
}
