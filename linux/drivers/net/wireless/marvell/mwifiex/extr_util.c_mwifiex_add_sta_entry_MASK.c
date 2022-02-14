
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {int list; int mac_addr; } ;
struct mwifiex_private {int sta_list_spinlock; int sta_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mwifiex_sta_node* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int const*,int ) ;
 struct mwifiex_sta_node* FUNC_3 (struct mwifiex_private*,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct mwifiex_sta_node *
FUNC_6(struct mwifiex_private *VAR_2, const u8 *VAR_3)
{
 struct mwifiex_sta_node *VAR_4;

 if (!VAR_3)
  return ((void*)0);

 FUNC_4(&VAR_2->sta_list_spinlock);
 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4)
  goto done;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  goto done;

 FUNC_2(VAR_4->mac_addr, VAR_3, VAR_0);
 FUNC_1(&VAR_4->list, &VAR_2->sta_list);

done:
 FUNC_5(&VAR_2->sta_list_spinlock);
 return VAR_4;
}
