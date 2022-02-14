
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_freelist_node {struct pcpu_freelist_node* next; } ;
struct pcpu_freelist_head {int lock; struct pcpu_freelist_node* first; } ;
struct pcpu_freelist {int freelist; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 struct pcpu_freelist_head* FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct pcpu_freelist_node *FUNC_5(struct pcpu_freelist *VAR_2)
{
 struct pcpu_freelist_head *VAR_3;
 struct pcpu_freelist_node *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_6 = FUNC_2();
 while (1) {
  VAR_3 = FUNC_1(VAR_2->freelist, VAR_6);
  FUNC_3(&VAR_3->lock);
  VAR_4 = VAR_3->first;
  if (VAR_4) {
   VAR_3->first = VAR_4->next;
   FUNC_4(&VAR_3->lock);
   return VAR_4;
  }
  FUNC_4(&VAR_3->lock);
  VAR_6 = FUNC_0(VAR_6, VAR_0);
  if (VAR_6 >= VAR_1)
   VAR_6 = 0;
  if (VAR_6 == VAR_5)
   return ((void*)0);
 }
}
