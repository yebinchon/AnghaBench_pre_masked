
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_mac_info {scalar_t__ rar_entry_count; scalar_t__ type; scalar_t__ mta_reg_count; scalar_t__ uta_reg_count; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct e1000_hw*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_3)
{
 struct e1000_mac_info *VAR_4 = &VAR_3->mac;
 s32 VAR_5;
 u16 VAR_6, VAR_7 = VAR_4->rar_entry_count;

 if ((VAR_3->mac.type >= VAR_2) &&
     !(FUNC_4(VAR_3))) {
  VAR_5 = FUNC_7(VAR_3);
  if (VAR_5)
   return VAR_5;
 }


 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5) {
  FUNC_1("Error initializing identification LED\n");

 }


 FUNC_1("Initializing the IEEE VLAN\n");
 FUNC_3(VAR_3);


 FUNC_6(VAR_3, VAR_7);


 FUNC_1("Zeroing the MTA\n");
 for (VAR_6 = 0; VAR_6 < VAR_4->mta_reg_count; VAR_6++)
  FUNC_0(VAR_0, VAR_6, 0);


 FUNC_1("Zeroing the UTA\n");
 for (VAR_6 = 0; VAR_6 < VAR_4->uta_reg_count; VAR_6++)
  FUNC_0(VAR_1, VAR_6, 0);


 VAR_5 = FUNC_8(VAR_3);






 FUNC_2(VAR_3);
 return VAR_5;
}
