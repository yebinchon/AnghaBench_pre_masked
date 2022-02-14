
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_qcom_phy {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct ufs_qcom_phy *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3->mmio + VAR_2);
 VAR_4 &= ~VAR_0;
 VAR_4 |= (1 << VAR_1);
 FUNC_2(VAR_4, VAR_3->mmio + VAR_2);

 FUNC_0();
}
