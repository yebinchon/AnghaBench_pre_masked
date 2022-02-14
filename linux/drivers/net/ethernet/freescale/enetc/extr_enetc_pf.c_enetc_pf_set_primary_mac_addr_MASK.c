
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct enetc_hw {scalar_t__ port; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct enetc_hw *VAR_0, int VAR_1,
       const u8 *VAR_2)
{
 u32 VAR_3 = *(const u32 *)VAR_2;
 u16 VAR_4 = *(const u16 *)(VAR_2 + 4);

 FUNC_2(VAR_3, VAR_0->port + FUNC_0(VAR_1));
 FUNC_3(VAR_4, VAR_0->port + FUNC_1(VAR_1));
}
