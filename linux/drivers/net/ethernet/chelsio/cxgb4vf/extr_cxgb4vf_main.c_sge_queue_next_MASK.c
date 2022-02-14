
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
typedef int loff_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0->private);

 ++*VAR_2;
 return *VAR_2 < VAR_3 ? (void *)((uintptr_t)*VAR_2 + 1) : ((void*)0);
}
