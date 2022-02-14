
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct port_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {scalar_t__ ptp_tx_skb; TYPE_1__ params; } ;


 int FUNC_0 (struct adapter*,struct port_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct port_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_0, struct sk_buff *VAR_1,
     struct net_device *VAR_2)
{
 struct port_info *VAR_3 = FUNC_3(VAR_2);

 if (!FUNC_1(VAR_0->params.chip) && VAR_0->ptp_tx_skb) {
  FUNC_0(VAR_0, VAR_3);
  FUNC_2(VAR_1);
  return 0;
 }
 return 1;
}
