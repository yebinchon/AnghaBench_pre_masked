
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cvmx_smix_en {scalar_t__ u64; } ;
struct platform_device {int dummy; } ;
struct cavium_mdiobus {scalar_t__ register_base; int mii_bus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 struct cavium_mdiobus* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct cavium_mdiobus *VAR_2;
 union cvmx_smix_en VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2->mii_bus);
 FUNC_0(VAR_2->mii_bus);
 VAR_3.u64 = 0;
 FUNC_2(VAR_3.u64, VAR_2->register_base + VAR_0);
 return 0;
}
