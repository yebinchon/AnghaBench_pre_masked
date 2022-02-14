
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hinic_hwif {int dummy; } ;
typedef enum hinic_pcie_tph { ____Placeholder_hinic_pcie_tph } hinic_pcie_tph ;
typedef enum hinic_pcie_nosnoop { ____Placeholder_hinic_pcie_nosnoop } hinic_pcie_nosnoop ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct hinic_hwif*,int) ;
 int FUNC_4 (struct hinic_hwif*,int,int) ;

__attribute__((used)) static void FUNC_5(struct hinic_hwif *VAR_5, u32 VAR_6,
    u8 VAR_7, u8 VAR_8, u8 VAR_9,
    enum hinic_pcie_nosnoop VAR_10,
    enum hinic_pcie_tph VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;


 VAR_12 = FUNC_0(VAR_6);

 VAR_13 = FUNC_3(VAR_5, VAR_12);
 VAR_13 = FUNC_1(VAR_13, VAR_3) &
       FUNC_1(VAR_13, VAR_0) &
       FUNC_1(VAR_13, VAR_2) &
       FUNC_1(VAR_13, VAR_1) &
       FUNC_1(VAR_13, VAR_4);

 VAR_14 = FUNC_2(VAR_7, VAR_3) |
    FUNC_2(VAR_8, VAR_0) |
    FUNC_2(VAR_9, VAR_2) |
    FUNC_2(VAR_10, VAR_1) |
    FUNC_2(VAR_11, VAR_4);

 VAR_13 |= VAR_14;
 FUNC_4(VAR_5, VAR_12, VAR_13);
}
