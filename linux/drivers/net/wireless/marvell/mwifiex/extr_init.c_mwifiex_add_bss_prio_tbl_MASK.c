
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_private {size_t bss_priority; struct mwifiex_adapter* adapter; } ;
struct mwifiex_bss_prio_tbl {int bss_prio_lock; int bss_prio_head; } ;
struct mwifiex_bss_prio_node {int list; struct mwifiex_private* priv; } ;
struct mwifiex_adapter {struct mwifiex_bss_prio_tbl* bss_prio_tbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct mwifiex_bss_prio_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mwifiex_private *VAR_2)
{
 struct mwifiex_adapter *VAR_3 = VAR_2->adapter;
 struct mwifiex_bss_prio_node *VAR_4;
 struct mwifiex_bss_prio_tbl *VAR_5 = VAR_3->bss_prio_tbl;

 VAR_4 = FUNC_1(sizeof(struct mwifiex_bss_prio_node), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->priv = VAR_2;
 FUNC_0(&VAR_4->list);

 FUNC_3(&VAR_5[VAR_2->bss_priority].bss_prio_lock);
 FUNC_2(&VAR_4->list, &VAR_5[VAR_2->bss_priority].bss_prio_head);
 FUNC_4(&VAR_5[VAR_2->bss_priority].bss_prio_lock);

 return 0;
}
