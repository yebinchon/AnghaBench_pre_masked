
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pcie {scalar_t__ legacy_phy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rockchip_pcie*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct rockchip_pcie *VAR_4)
{
 u32 VAR_5;
 u8 VAR_6;

 if (VAR_4->legacy_phy)
  return FUNC_0(VAR_0 - 1, 0);

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 VAR_6 = VAR_5 & VAR_2;


 if (VAR_5 & VAR_3)
  VAR_6 = FUNC_1(VAR_6) >> 4;

 return VAR_6;
}
