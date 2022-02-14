
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;
struct platform_device {int dummy; } ;
struct mfd_cell {int (* disable ) (struct platform_device*) ;} ;


 struct mfd_cell* FUNC_0 (struct platform_device*) ;
 struct tmio_mmc_host* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct tmio_mmc_host*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 const struct mfd_cell *VAR_1 = FUNC_0(VAR_0);
 struct tmio_mmc_host *VAR_2 = FUNC_1(VAR_0);

 FUNC_3(VAR_2);
 if (VAR_1->disable)
  VAR_1->disable(VAR_0);

 return 0;
}
