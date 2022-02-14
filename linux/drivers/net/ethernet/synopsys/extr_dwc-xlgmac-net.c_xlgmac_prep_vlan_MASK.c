
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlgmac_pkt_info {int vlan_ctag; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0,
        struct xlgmac_pkt_info *VAR_1)
{
 if (FUNC_1(VAR_0))
  VAR_1->vlan_ctag = FUNC_0(VAR_0);
}
