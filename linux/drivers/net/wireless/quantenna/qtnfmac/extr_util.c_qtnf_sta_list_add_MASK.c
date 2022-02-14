
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qtnf_sta_list {int size; int head; } ;
struct qtnf_vif {int generation; struct qtnf_sta_list sta_list; } ;
struct qtnf_sta_node {int list; int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int const*) ;
 struct qtnf_sta_node* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct qtnf_sta_node* FUNC_4 (struct qtnf_sta_list*,int const*) ;
 scalar_t__ FUNC_5 (int) ;

struct qtnf_sta_node *FUNC_6(struct qtnf_vif *VAR_1,
     const u8 *VAR_2)
{
 struct qtnf_sta_list *VAR_3 = &VAR_1->sta_list;
 struct qtnf_sta_node *VAR_4;

 if (FUNC_5(!VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_3, VAR_2);

 if (VAR_4)
  goto done;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (FUNC_5(!VAR_4))
  goto done;

 FUNC_1(VAR_4->mac_addr, VAR_2);
 FUNC_3(&VAR_4->list, &VAR_3->head);
 FUNC_0(&VAR_3->size);
 ++VAR_1->generation;

done:
 return VAR_4;
}
