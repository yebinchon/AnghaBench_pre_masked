
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

int FUNC_5(void)
{
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1, "gb_authenticate");
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_4 = FUNC_2(&VAR_3, 0, VAR_0,
      "gb_authenticate");
 if (VAR_4)
  goto err_remove_class;

 return 0;

err_remove_class:
 FUNC_4(VAR_2);
 return VAR_4;
}
