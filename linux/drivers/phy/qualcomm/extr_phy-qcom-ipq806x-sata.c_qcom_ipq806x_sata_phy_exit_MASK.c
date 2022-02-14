
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_ipq806x_sata_phy {scalar_t__ mmio; } ;
struct phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct qcom_ipq806x_sata_phy* FUNC_0 (struct phy*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_2)
{
 struct qcom_ipq806x_sata_phy *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_3->mmio + VAR_0);
 VAR_4 = VAR_4 | VAR_1;
 FUNC_2(VAR_4, VAR_3->mmio + VAR_0);

 return 0;
}
