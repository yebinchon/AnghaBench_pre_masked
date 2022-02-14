
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*,int) ;

int FUNC_5(void)
{
 if (!FUNC_0(VAR_0))
  return 0;

 VAR_2 = FUNC_3("ubi", ((void*)0));
 if (FUNC_1(VAR_2)) {
  int VAR_3 = VAR_2 ? FUNC_2(VAR_2) : -VAR_1;

  FUNC_4("UBI error: cannot create \"ubi\" debugfs directory, error %d\n",
         VAR_3);
  return VAR_3;
 }

 return 0;
}
