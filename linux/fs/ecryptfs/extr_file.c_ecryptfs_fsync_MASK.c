
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int loff_t ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_0, loff_t VAR_1, loff_t VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(FUNC_0(VAR_0), VAR_3);
}
