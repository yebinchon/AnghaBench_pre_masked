
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ena_ring {TYPE_1__* netdev; } ;
struct ena_com_rx_ctx {scalar_t__ l4_proto; int hash; scalar_t__ frag; } ;
typedef enum pkt_hash_types { ____Placeholder_pkt_hash_types } pkt_hash_types ;
struct TYPE_2__ {int features; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ena_ring *VAR_5,
       struct ena_com_rx_ctx *VAR_6,
       struct sk_buff *VAR_7)
{
 enum pkt_hash_types VAR_8;

 if (FUNC_0(VAR_5->netdev->features & VAR_2)) {
  if (FUNC_0((VAR_6->l4_proto == VAR_0) ||
      (VAR_6->l4_proto == VAR_1)))

   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_4;


  if (VAR_6->frag)
   VAR_8 = VAR_4;

  FUNC_1(VAR_7, VAR_6->hash, VAR_8);
 }
}
