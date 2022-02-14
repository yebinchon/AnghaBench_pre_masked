
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 () ;
 struct platform_device* FUNC_2 () ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 struct platform_device *VAR_2 = FUNC_2();

 FUNC_6(&VAR_0);

 if (--VAR_1 > 0)
  goto out;

 FUNC_1();

 FUNC_0(VAR_2);

 FUNC_5();

 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
out:
 FUNC_7(&VAR_0);
}
