
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcpu_freelist_node {int dummy; } ;
struct pcpu_freelist {int dummy; } ;


 struct pcpu_freelist_node* FUNC_0 (struct pcpu_freelist*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

struct pcpu_freelist_node *FUNC_3(struct pcpu_freelist *VAR_0)
{
 struct pcpu_freelist_node *VAR_1;
 unsigned long VAR_2;

 FUNC_2(VAR_2);
 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_2);
 return VAR_1;
}
