
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rb_node {int dummy; } ;
typedef int loff_t ;


 void* FUNC_0 (struct rb_node*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct rb_node *VAR_3 = VAR_1;

 (*VAR_2)++;
 return VAR_3 ? FUNC_0(VAR_3) : ((void*)0);
}
