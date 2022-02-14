
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sky2_port {size_t rx_next; TYPE_1__* rx_ring; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct sk_buff* skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sky2_port *VAR_1, u16 VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = VAR_1->rx_ring[VAR_1->rx_next].skb;
 FUNC_0(VAR_3, FUNC_2(VAR_0), FUNC_1(VAR_2));
}
