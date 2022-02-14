
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_mac_vals {int* umac_addr; int * umac_val; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int) ;
 int FUNC_2 (struct bnx2x*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3(struct bnx2x *VAR_4,
      u8 VAR_5, u32 VAR_6,
      struct bnx2x_mac_vals *VAR_7)
{
 u32 VAR_8 = VAR_2 << VAR_5;
 u32 VAR_9;

 if (!(VAR_8 & VAR_6))
  return 0;

 FUNC_0("Disable umac Rx %02x\n", VAR_5);
 VAR_9 = VAR_5 ? VAR_1 : VAR_0;
 VAR_7->umac_addr[VAR_5] = VAR_9 + VAR_3;
 VAR_7->umac_val[VAR_5] = FUNC_1(VAR_4, VAR_7->umac_addr[VAR_5]);
 FUNC_2(VAR_4, VAR_7->umac_addr[VAR_5], 0);

 return 1;
}
