
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct file **VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 struct file *VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4)) {
  *VAR_0 = ((void*)0);
  return FUNC_1(VAR_4);
 }
 else {
  *VAR_0 = VAR_4;
  return 0;
 }
}
