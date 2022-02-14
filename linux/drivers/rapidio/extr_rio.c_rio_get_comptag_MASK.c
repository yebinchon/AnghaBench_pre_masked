
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {struct list_head* next; } ;
struct rio_dev {scalar_t__ comp_tag; TYPE_1__ global_list; } ;
struct list_head {struct list_head* next; } ;


 struct rio_dev* FUNC_0 (struct list_head*) ;
 struct list_head VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct rio_dev *FUNC_3(u32 VAR_2, struct rio_dev *VAR_3)
{
 struct list_head *VAR_4;
 struct rio_dev *VAR_5;

 FUNC_1(&VAR_1);
 VAR_4 = VAR_3 ? VAR_3->global_list.next : VAR_0.next;

 while (VAR_4 && (VAR_4 != &VAR_0)) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5->comp_tag == VAR_2)
   goto exit;
  VAR_4 = VAR_4->next;
 }
 VAR_5 = ((void*)0);
exit:
 FUNC_2(&VAR_1);
 return VAR_5;
}
