
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 return *VAR_2
  ? FUNC_0(VAR_1->private, *VAR_2)
  : VAR_0;
}
