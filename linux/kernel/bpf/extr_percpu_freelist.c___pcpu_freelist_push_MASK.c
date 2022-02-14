
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_freelist_node {int dummy; } ;
struct pcpu_freelist_head {int dummy; } ;
struct pcpu_freelist {int freelist; } ;


 int FUNC_0 (struct pcpu_freelist_head*,struct pcpu_freelist_node*) ;
 struct pcpu_freelist_head* FUNC_1 (int ) ;

void FUNC_2(struct pcpu_freelist *VAR_0,
   struct pcpu_freelist_node *VAR_1)
{
 struct pcpu_freelist_head *VAR_2 = FUNC_1(VAR_0->freelist);

 FUNC_0(VAR_2, VAR_1);
}
