
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void)
{
 int VAR_1;

 FUNC_0();

 VAR_1 = FUNC_4(&VAR_0);
 if (FUNC_1(!VAR_1))
  FUNC_3("file system registered\n");
 else
  FUNC_2("failed registering file system (%d)\n", VAR_1);

 return VAR_1;
}
