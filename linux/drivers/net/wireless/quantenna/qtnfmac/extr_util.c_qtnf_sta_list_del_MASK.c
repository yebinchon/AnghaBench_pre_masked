
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qtnf_sta_list {int size; } ;
struct qtnf_vif {int generation; struct qtnf_sta_list sta_list; } ;
struct qtnf_sta_node {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qtnf_sta_node*) ;
 int FUNC_2 (int *) ;
 struct qtnf_sta_node* FUNC_3 (struct qtnf_sta_list*,int const*) ;

bool FUNC_4(struct qtnf_vif *VAR_0, const u8 *VAR_1)
{
 struct qtnf_sta_list *VAR_2 = &VAR_0->sta_list;
 struct qtnf_sta_node *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_3(VAR_2, VAR_1);

 if (VAR_3) {
  FUNC_2(&VAR_3->list);
  FUNC_0(&VAR_2->size);
  FUNC_1(VAR_3);
  ++VAR_0->generation;
  VAR_4 = 1;
 }

 return VAR_4;
}
