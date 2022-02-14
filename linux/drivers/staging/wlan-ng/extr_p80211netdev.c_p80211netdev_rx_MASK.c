
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlandevice {int rx_bh; int nsd_rxq; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct wlandevice *VAR_0, struct sk_buff *VAR_1)
{

 FUNC_0(&VAR_0->nsd_rxq, VAR_1);
 FUNC_1(&VAR_0->rx_bh);
}
