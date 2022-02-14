
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static struct list_head *FUNC_4(struct list_head *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0, VAR_2);
 if (!FUNC_1(VAR_1)) {
  struct list_head *VAR_3 = VAR_1->next;
  FUNC_0(VAR_3);
  FUNC_3(&VAR_0, VAR_2);
  return VAR_3;
 } else {
  FUNC_3(&VAR_0, VAR_2);
  return ((void*)0);
 }
}
