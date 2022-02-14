
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct cpts {int dummy; } ;
typedef int ssh ;
struct TYPE_2__ {int tx_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cpts*,struct sk_buff*,int ) ;
 int FUNC_1 (struct skb_shared_hwtstamps*,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct skb_shared_hwtstamps*) ;

void FUNC_5(struct cpts *VAR_2, struct sk_buff *VAR_3)
{
 u64 VAR_4;
 struct skb_shared_hwtstamps VAR_5;

 if (!(FUNC_3(VAR_3)->tx_flags & VAR_1))
  return;
 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0);
 if (!VAR_4)
  return;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.hwtstamp = FUNC_2(VAR_4);
 FUNC_4(VAR_3, &VAR_5);
}
