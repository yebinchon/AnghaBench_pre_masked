
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iwl_trans_pcie {int scd_base_addr; } ;
struct iwl_trans {int dummy; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct iwl_trans*,int) ;
 int FUNC_3 (struct iwl_trans*,int,int) ;

__attribute__((used)) static int FUNC_4(struct iwl_trans *VAR_1, u16 VAR_2,
     u16 VAR_3)
{
 struct iwl_trans_pcie *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;
 u32 VAR_6;
 u16 VAR_7;

 VAR_7 = VAR_2 & VAR_0;

 VAR_5 = VAR_4->scd_base_addr +
   FUNC_1(VAR_3);

 VAR_6 = FUNC_2(VAR_1, VAR_5);

 if (VAR_3 & 0x1)
  VAR_6 = (VAR_7 << 16) | (VAR_6 & 0x0000FFFF);
 else
  VAR_6 = VAR_7 | (VAR_6 & 0xFFFF0000);

 FUNC_3(VAR_1, VAR_5, VAR_6);

 return 0;
}
