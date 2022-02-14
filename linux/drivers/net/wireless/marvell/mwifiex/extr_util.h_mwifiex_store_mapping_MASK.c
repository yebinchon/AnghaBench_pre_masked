
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct mwifiex_dma_mapping {int dummy; } ;
struct mwifiex_cb {int dma_mapping; } ;


 int FUNC_0 (int *,struct mwifiex_dma_mapping*,int) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_0,
      struct mwifiex_dma_mapping *VAR_1)
{
 struct mwifiex_cb *VAR_2 = (struct mwifiex_cb *)VAR_0->cb;

 FUNC_0(&VAR_2->dma_mapping, VAR_1, sizeof(*VAR_1));
}
