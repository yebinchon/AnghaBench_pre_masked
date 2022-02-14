
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct exynos_sata_phy {int pmureg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct exynos_sata_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_2)
{
 struct exynos_sata_phy *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_3->pmureg, VAR_1,
   VAR_0, 0);

}
