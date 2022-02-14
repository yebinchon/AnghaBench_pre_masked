
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;


 int FUNC_0 (void*,struct seq_file*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 if (!VAR_0->private)
  FUNC_1(VAR_0, "Attached devices:\n");

 return FUNC_0(VAR_1, VAR_0);
}
