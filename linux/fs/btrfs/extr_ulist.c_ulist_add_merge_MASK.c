
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct ulist_node {int list; void* aux; void* val; } ;
struct ulist {int nnodes; int nodes; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ulist_node* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ulist*,struct ulist_node*) ;
 struct ulist_node* FUNC_4 (struct ulist*,void*) ;

int FUNC_5(struct ulist *VAR_1, u64 VAR_2, u64 VAR_3,
      u64 *VAR_4, gfp_t VAR_5)
{
 int VAR_6;
 struct ulist_node *VAR_7;

 VAR_7 = FUNC_4(VAR_1, VAR_2);
 if (VAR_7) {
  if (VAR_4)
   *VAR_4 = VAR_7->aux;
  return 0;
 }
 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_5);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->val = VAR_2;
 VAR_7->aux = VAR_3;

 VAR_6 = FUNC_3(VAR_1, VAR_7);
 FUNC_0(!VAR_6);
 FUNC_2(&VAR_7->list, &VAR_1->nodes);
 VAR_1->nnodes++;

 return 1;
}
