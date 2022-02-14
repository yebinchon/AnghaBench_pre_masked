
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_wqs {int * shadow_page_vaddr; int * page_paddr; int * page_vaddr; int hwif; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct hinic_wqs *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_1->hwif, &VAR_1->page_vaddr[VAR_2],
    &VAR_1->page_paddr[VAR_2],
    &VAR_1->shadow_page_vaddr[VAR_2],
    VAR_0);
}
