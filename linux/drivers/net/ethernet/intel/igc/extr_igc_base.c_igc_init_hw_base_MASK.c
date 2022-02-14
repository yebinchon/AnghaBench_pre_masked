
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct igc_mac_info {scalar_t__ rar_entry_count; scalar_t__ mta_reg_count; scalar_t__ uta_reg_count; } ;
struct igc_hw {struct igc_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct igc_hw*) ;
 int FUNC_3 (struct igc_hw*,scalar_t__) ;
 int FUNC_4 (struct igc_hw*) ;

__attribute__((used)) static s32 FUNC_5(struct igc_hw *VAR_2)
{
 struct igc_mac_info *VAR_3 = &VAR_2->mac;
 u16 VAR_4, VAR_5 = VAR_3->rar_entry_count;
 s32 VAR_6 = 0;


 FUNC_3(VAR_2, VAR_5);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->mta_reg_count; VAR_4++)
  FUNC_0(VAR_0, VAR_4, 0);


 FUNC_1("Zeroing the UTA\n");
 for (VAR_4 = 0; VAR_4 < VAR_3->uta_reg_count; VAR_4++)
  FUNC_0(VAR_1, VAR_4, 0);


 VAR_6 = FUNC_4(VAR_2);






 FUNC_2(VAR_2);

 return VAR_6;
}
