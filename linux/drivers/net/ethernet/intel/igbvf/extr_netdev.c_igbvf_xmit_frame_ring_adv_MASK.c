
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ ip_summed; int len; } ;
struct net_device {int dummy; } ;
struct igbvf_ring {unsigned int next_to_use; TYPE_1__* buffer_info; } ;
struct igbvf_adapter {int state; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ __be16 ;
struct TYPE_4__ {scalar_t__ nr_frags; } ;
struct TYPE_3__ {scalar_t__ time_stamp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct igbvf_ring*,struct sk_buff*,unsigned int,int *) ;
 scalar_t__ FUNC_4 (struct igbvf_ring*,struct sk_buff*,unsigned int,scalar_t__) ;
 int FUNC_5 (struct igbvf_adapter*,struct igbvf_ring*,struct sk_buff*) ;
 int FUNC_6 (struct igbvf_adapter*,struct igbvf_ring*,unsigned int,int,unsigned int,int ,int ) ;
 struct igbvf_adapter* FUNC_7 (struct net_device*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;
 unsigned int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_11,
          struct net_device *VAR_12,
          struct igbvf_ring *VAR_13)
{
 struct igbvf_adapter *VAR_14 = FUNC_7(VAR_12);
 unsigned int VAR_15, VAR_16 = 0;
 u8 VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 __be16 VAR_20 = FUNC_13(VAR_11);

 if (FUNC_11(VAR_10, &VAR_14->state)) {
  FUNC_0(VAR_11);
  return VAR_9;
 }

 if (VAR_11->len <= 0) {
  FUNC_0(VAR_11);
  return VAR_9;
 }







 if (FUNC_2(VAR_12, FUNC_8(VAR_11)->nr_frags + 4)) {

  return VAR_8;
 }

 if (FUNC_10(VAR_11)) {
  VAR_16 |= VAR_5;
  VAR_16 |= (FUNC_9(VAR_11) <<
        VAR_6);
 }

 if (VAR_20 == FUNC_1(VAR_1))
  VAR_16 |= VAR_3;

 VAR_15 = VAR_13->next_to_use;

 VAR_19 = FUNC_3(VAR_13, VAR_11, VAR_16, &VAR_17);
 if (FUNC_12(VAR_19 < 0)) {
  FUNC_0(VAR_11);
  return VAR_9;
 }

 if (VAR_19)
  VAR_16 |= VAR_4;
 else if (FUNC_4(VAR_13, VAR_11, VAR_16, VAR_20) &&
   (VAR_11->ip_summed == VAR_0))
  VAR_16 |= VAR_2;




 VAR_18 = FUNC_5(VAR_14, VAR_13, VAR_11);

 if (VAR_18) {
  FUNC_6(VAR_14, VAR_13, VAR_16, VAR_18,
       VAR_15, VAR_11->len, VAR_17);

  FUNC_2(VAR_12, VAR_7 + 4);
 } else {
  FUNC_0(VAR_11);
  VAR_13->buffer_info[VAR_15].time_stamp = 0;
  VAR_13->next_to_use = VAR_15;
 }

 return VAR_9;
}
