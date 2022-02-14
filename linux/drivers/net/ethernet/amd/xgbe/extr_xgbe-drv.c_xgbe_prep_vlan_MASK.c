
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_packet_data {int vlan_ctag; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct xgbe_packet_data *VAR_1)
{
 if (FUNC_1(VAR_0))
  VAR_1->vlan_ctag = FUNC_0(VAR_0);
}
