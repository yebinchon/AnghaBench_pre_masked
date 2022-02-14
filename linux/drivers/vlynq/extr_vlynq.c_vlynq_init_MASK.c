
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_0(&VAR_0);
 if (VAR_2)
  goto fail_bus;

 VAR_2 = FUNC_2(&VAR_1);
 if (VAR_2)
  goto fail_platform;

 return 0;

fail_platform:
 FUNC_1(&VAR_0);
fail_bus:
 return VAR_2;
}
