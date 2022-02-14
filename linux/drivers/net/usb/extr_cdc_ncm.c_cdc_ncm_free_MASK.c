
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdc_ncm_ctx {struct cdc_ncm_ctx* delayed_ndp16; int * tx_curr_skb; int * tx_rem_skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cdc_ncm_ctx*) ;

__attribute__((used)) static void FUNC_2(struct cdc_ncm_ctx *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->tx_rem_skb != ((void*)0)) {
  FUNC_0(VAR_0->tx_rem_skb);
  VAR_0->tx_rem_skb = ((void*)0);
 }

 if (VAR_0->tx_curr_skb != ((void*)0)) {
  FUNC_0(VAR_0->tx_curr_skb);
  VAR_0->tx_curr_skb = ((void*)0);
 }

 FUNC_1(VAR_0->delayed_ndp16);

 FUNC_1(VAR_0);
}
