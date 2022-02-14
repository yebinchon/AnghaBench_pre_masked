
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {int next; } ;
struct hlist_head {int first; } ;
typedef int loff_t ;


 void* VAR_0 ;
 struct hlist_node* FUNC_0 (int ) ;

struct hlist_node *FUNC_1(void *VAR_1,
          struct hlist_head *VAR_2,
          loff_t *VAR_3)
{
 struct hlist_node *VAR_4 = VAR_1;

 ++*VAR_3;
 if (VAR_1 == VAR_0)
  return FUNC_0(VAR_2->first);
 else
  return FUNC_0(VAR_4->next);
}
