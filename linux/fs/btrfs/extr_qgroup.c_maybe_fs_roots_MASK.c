
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ulist_node {int val; } ;
struct ulist_iterator {int dummy; } ;
struct ulist {scalar_t__ nnodes; } ;


 int FUNC_0 (struct ulist_iterator*) ;
 int FUNC_1 (int ) ;
 struct ulist_node* FUNC_2 (struct ulist*,struct ulist_iterator*) ;

__attribute__((used)) static int FUNC_3(struct ulist *VAR_0)
{
 struct ulist_node *VAR_1;
 struct ulist_iterator VAR_2;


 if (!VAR_0 || VAR_0->nnodes == 0)
  return 1;

 FUNC_0(&VAR_2);
 VAR_1 = FUNC_2(VAR_0, &VAR_2);
 if (!VAR_1)
  return 1;






 return FUNC_1(VAR_1->val);
}
