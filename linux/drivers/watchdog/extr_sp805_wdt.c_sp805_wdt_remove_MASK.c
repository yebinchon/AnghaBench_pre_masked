
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp805_wdt {int wdd; } ;
struct amba_device {int dummy; } ;


 struct sp805_wdt* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct amba_device *VAR_0)
{
 struct sp805_wdt *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->wdd);
 FUNC_1(&VAR_1->wdd, ((void*)0));

 return 0;
}
