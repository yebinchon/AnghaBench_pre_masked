
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl2_hw {scalar_t__* mac_addr; } ;


 int FUNC_0 (struct atl2_hw*,int ,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct atl2_hw *VAR_1)
{
 u32 VAR_2;



 VAR_2 = (((u32)VAR_1->mac_addr[2]) << 24) |
  (((u32)VAR_1->mac_addr[3]) << 16) |
  (((u32)VAR_1->mac_addr[4]) << 8) |
  (((u32)VAR_1->mac_addr[5]));
 FUNC_0(VAR_1, VAR_0, 0, VAR_2);

 VAR_2 = (((u32)VAR_1->mac_addr[0]) << 8) |
  (((u32)VAR_1->mac_addr[1]));
 FUNC_0(VAR_1, VAR_0, 1, VAR_2);
}
