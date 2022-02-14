
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ixgb_hw {scalar_t__ eeprom; } ;
struct ixgb_ee_map_type {int init_ctrl_reg_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ixgb_hw*) ;
 int FUNC_2 (struct ixgb_hw*) ;
 int FUNC_3 (struct ixgb_hw*,int ,int) ;
 int FUNC_4 (struct ixgb_hw*) ;
 int FUNC_5 (struct ixgb_hw*) ;

void
FUNC_6(struct ixgb_hw *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct ixgb_ee_map_type *VAR_7 = (struct ixgb_ee_map_type *)VAR_4->eeprom;


 FUNC_2(VAR_4);




 FUNC_3(VAR_4, VAR_1, 5);
 FUNC_3(VAR_4, 0, 4);


 FUNC_4(VAR_4);


 FUNC_3(VAR_4, VAR_3, 3);
 FUNC_3(VAR_4, VAR_5, 6);


 FUNC_3(VAR_4, VAR_6, 16);

 FUNC_5(VAR_4);


 FUNC_4(VAR_4);





 FUNC_3(VAR_4, VAR_0, 5);
 FUNC_3(VAR_4, 0, 4);


 FUNC_1(VAR_4);


 VAR_7->init_ctrl_reg_1 = FUNC_0(VAR_2);
}
