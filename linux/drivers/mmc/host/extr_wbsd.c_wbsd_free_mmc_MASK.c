
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int ignore_timer; } ;
struct mmc_host {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct mmc_host* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct mmc_host*) ;
 struct wbsd_host* FUNC_5 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct mmc_host *VAR_1;
 struct wbsd_host *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return;

 VAR_2 = FUNC_5(VAR_1);
 FUNC_0(VAR_2 == ((void*)0));

 FUNC_1(&VAR_2->ignore_timer);

 FUNC_4(VAR_1);

 FUNC_3(VAR_0, ((void*)0));
}
