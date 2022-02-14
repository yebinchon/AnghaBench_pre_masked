
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rockchip_pcie_ep {int rockchip; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rockchip_pcie_ep*,int ,int ,int) ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct rockchip_pcie_ep *VAR_3, u8 VAR_4,
         u8 VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_3(&VAR_3->rockchip,
     FUNC_0(VAR_4) +
     VAR_2);

 if (VAR_6 & VAR_1)
  return -VAR_0;






 FUNC_2(VAR_3, VAR_4, VAR_5, 1);
 FUNC_1(1);
 FUNC_2(VAR_3, VAR_4, VAR_5, 0);
 return 0;
}
