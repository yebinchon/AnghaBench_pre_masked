
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_1 ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*,int *) ;
 struct file* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct file*,char*,int) ;

__attribute__((used)) static int FUNC_5(char *VAR_2)
{
 struct file *VAR_3;
 int VAR_4 = 0;
 char VAR_5;

 VAR_3 = FUNC_3(VAR_2, VAR_1, 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (FUNC_4(VAR_3, &VAR_5, 1) != 1)
  VAR_4 = -VAR_0;

 FUNC_2(VAR_3, ((void*)0));
 return VAR_4;
}
