
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pl353_smc_data {int aclk; int memclk; } ;
struct amba_device {int dummy; } ;


 struct pl353_smc_data* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct amba_device *VAR_0)
{
 struct pl353_smc_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->memclk);
 FUNC_1(VAR_1->aclk);

 return 0;
}
