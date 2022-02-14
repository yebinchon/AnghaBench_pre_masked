
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int nsd_rxq; int netdev; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct wlandevice *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_2(VAR_0->netdev);


 while ((VAR_1 = FUNC_1(&VAR_0->nsd_rxq)))
  FUNC_0(VAR_1);

 return 0;
}
