
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ulist_node {scalar_t__ aux; } ;
struct ulist {int dummy; } ;


 int FUNC_0 (struct ulist*,struct ulist_node*) ;
 struct ulist_node* FUNC_1 (struct ulist*,scalar_t__) ;

int FUNC_2(struct ulist *VAR_0, u64 VAR_1, u64 VAR_2)
{
 struct ulist_node *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_3)
  return 1;

 if (VAR_3->aux != VAR_2)
  return 1;


 FUNC_0(VAR_0, VAR_3);
 return 0;
}
