
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mwifiex_dma_mapping {int addr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct sk_buff*,struct mwifiex_dma_mapping*) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct sk_buff *VAR_0)
{
 struct mwifiex_dma_mapping VAR_1;

 FUNC_0(VAR_0, &VAR_1);

 return VAR_1.addr;
}
