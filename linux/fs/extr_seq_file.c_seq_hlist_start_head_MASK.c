
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_node {int dummy; } ;
struct hlist_head {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct hlist_node* VAR_0 ;
 struct hlist_node* FUNC_0 (struct hlist_head*,scalar_t__) ;

struct hlist_node *FUNC_1(struct hlist_head *VAR_1, loff_t VAR_2)
{
 if (!VAR_2)
  return VAR_0;

 return FUNC_0(VAR_1, VAR_2 - 1);
}
