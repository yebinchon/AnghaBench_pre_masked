
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sky2_port {size_t rx_next; TYPE_1__* rx_ring; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sky2_port *VAR_1, u32 VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = VAR_1->rx_ring[VAR_1->rx_next].skb;
 FUNC_1(VAR_3, FUNC_0(VAR_2), VAR_0);
}
