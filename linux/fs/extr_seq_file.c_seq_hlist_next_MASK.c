
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {struct hlist_node* next; } ;
struct hlist_head {struct hlist_node* first; } ;
typedef int loff_t ;


 void* VAR_0 ;

struct hlist_node *FUNC_0(void *VAR_1, struct hlist_head *VAR_2,
      loff_t *VAR_3)
{
 struct hlist_node *VAR_4 = VAR_1;

 ++*VAR_3;
 if (VAR_1 == VAR_0)
  return VAR_2->first;
 else
  return VAR_4->next;
}
