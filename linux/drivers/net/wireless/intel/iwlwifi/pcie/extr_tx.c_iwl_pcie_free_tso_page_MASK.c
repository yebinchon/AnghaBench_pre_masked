
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct page {int dummy; } ;
struct iwl_trans_pcie {int page_offs; } ;


 int FUNC_0 (struct page*) ;

void FUNC_1(struct iwl_trans_pcie *VAR_0,
       struct sk_buff *VAR_1)
{
 struct page **VAR_2;

 VAR_2 = (void *)((u8 *)VAR_1->cb + VAR_0->page_offs);

 if (*VAR_2) {
  FUNC_0(*VAR_2);
  *VAR_2 = ((void*)0);
 }
}
