
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {int list; } ;
struct mwifiex_private {int sta_list_spinlock; } ;


 int FUNC_0 (struct mwifiex_sta_node*) ;
 int FUNC_1 (int *) ;
 struct mwifiex_sta_node* FUNC_2 (struct mwifiex_private*,int const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mwifiex_private *VAR_0, const u8 *VAR_1)
{
 struct mwifiex_sta_node *VAR_2;

 FUNC_3(&VAR_0->sta_list_spinlock);

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_2->list);
  FUNC_0(VAR_2);
 }

 FUNC_4(&VAR_0->sta_list_spinlock);
 return;
}
