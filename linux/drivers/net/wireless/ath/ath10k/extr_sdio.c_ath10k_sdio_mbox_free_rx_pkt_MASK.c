
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_sdio_rx_data {int trailer_only; scalar_t__ act_len; scalar_t__ alloc_len; int * skb; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct ath10k_sdio_rx_data *VAR_0)
{
 FUNC_0(VAR_0->skb);
 VAR_0->skb = ((void*)0);
 VAR_0->alloc_len = 0;
 VAR_0->act_len = 0;
 VAR_0->trailer_only = 0;
}
