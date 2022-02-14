
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int FUNC_0 (int*,struct file**,int) ;
 int FUNC_1 (int,struct file*) ;

int FUNC_2(int *VAR_0, int VAR_1)
{
 struct file *VAR_2[2];
 int VAR_3 = FUNC_0(VAR_0, VAR_2, VAR_1);
 if (!VAR_3) {
  FUNC_1(VAR_0[0], VAR_2[0]);
  FUNC_1(VAR_0[1], VAR_2[1]);
 }
 return VAR_3;
}
