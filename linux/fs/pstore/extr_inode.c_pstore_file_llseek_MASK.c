
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {scalar_t__ op; } ;
struct file {struct seq_file* private_data; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*,int ,int) ;
 int FUNC_1 (struct file*,int ,int) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct seq_file *VAR_3 = VAR_0->private_data;

 if (VAR_3->op)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
