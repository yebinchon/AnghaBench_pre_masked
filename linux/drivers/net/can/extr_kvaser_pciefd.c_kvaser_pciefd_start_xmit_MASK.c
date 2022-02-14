
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct kvaser_pciefd_tx_packet {scalar_t__ data; int * header; } ;
struct TYPE_2__ {int echo_skb_max; scalar_t__* echo_skb; } ;
struct kvaser_pciefd_can {int echo_idx; int echo_lock; TYPE_1__ can; scalar_t__ reg_base; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct kvaser_pciefd_tx_packet*,struct kvaser_pciefd_can*,struct sk_buff*) ;
 struct kvaser_pciefd_can* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_5,
         struct net_device *VAR_6)
{
 struct kvaser_pciefd_can *VAR_7 = FUNC_7(VAR_6);
 unsigned long VAR_8;
 struct kvaser_pciefd_tx_packet VAR_9;
 int VAR_10;
 u8 VAR_11;

 if (FUNC_1(VAR_6, VAR_5))
  return VAR_4;

 VAR_10 = FUNC_6(&VAR_9, VAR_7, VAR_5);

 FUNC_9(&VAR_7->echo_lock, VAR_8);


 FUNC_2(VAR_5, VAR_6, VAR_7->echo_idx);


 VAR_7->echo_idx = (VAR_7->echo_idx + 1) % VAR_7->can.echo_skb_max;


 FUNC_4(VAR_9.header[0],
    VAR_7->reg_base + VAR_2);
 FUNC_4(VAR_9.header[1],
    VAR_7->reg_base + VAR_2);

 if (VAR_10) {
  u32 VAR_12 = ((u32 *)VAR_9.data)[VAR_10 - 1];


  FUNC_5(VAR_7->reg_base +
         VAR_2, VAR_9.data,
         VAR_10 - 1);

  FUNC_0(VAR_12, VAR_7->reg_base +
        VAR_1);
 } else {

  FUNC_0(0, VAR_7->reg_base +
        VAR_1);
 }

 VAR_11 = FUNC_3(VAR_7->reg_base + VAR_3);



 if (VAR_11 >= VAR_0 ||
     VAR_7->can.echo_skb[VAR_7->echo_idx])
  FUNC_8(VAR_6);

 FUNC_10(&VAR_7->echo_lock, VAR_8);

 return VAR_4;
}
