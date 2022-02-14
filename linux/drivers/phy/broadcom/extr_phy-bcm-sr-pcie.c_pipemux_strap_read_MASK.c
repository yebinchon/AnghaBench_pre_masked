
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sr_pcie_phy_core {int cdru; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static u32 FUNC_2(struct sr_pcie_phy_core *VAR_5)
{
 u32 VAR_6;







 VAR_6 = FUNC_0(VAR_5->base + VAR_1);
 VAR_6 &= VAR_2;
 if (VAR_6 == VAR_3) {
  FUNC_1(VAR_5->cdru, VAR_0, &VAR_6);
  VAR_6 >>= VAR_4;
  VAR_6 &= VAR_2;
 }

 return VAR_6;
}
