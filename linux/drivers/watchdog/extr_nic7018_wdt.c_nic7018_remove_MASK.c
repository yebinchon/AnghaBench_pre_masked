
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nic7018_wdt {scalar_t__ io_base; int wdd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct nic7018_wdt* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct nic7018_wdt *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_3->wdd);


 FUNC_0(VAR_0, VAR_3->io_base + VAR_1);

 return 0;
}
