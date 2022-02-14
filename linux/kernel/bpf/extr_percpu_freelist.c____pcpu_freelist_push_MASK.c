
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_freelist_node {struct pcpu_freelist_node* next; } ;
struct pcpu_freelist_head {int lock; struct pcpu_freelist_node* first; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct pcpu_freelist_head *VAR_0,
      struct pcpu_freelist_node *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_1->next = VAR_0->first;
 VAR_0->first = VAR_1;
 FUNC_1(&VAR_0->lock);
}
