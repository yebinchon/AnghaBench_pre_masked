
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int type; } ;
struct bnx2x {int dummy; } ;
typedef int (* read_sfp_module_eeprom_func_p ) (struct bnx2x_phy*,struct link_params*,int,scalar_t__,int,int*,int ) ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bnx2x_phy*,struct link_params*,int,scalar_t__,int,int*,int ) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,int,scalar_t__,int,int*,int ) ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,int,scalar_t__,int,int*,int ) ;

int FUNC_4(struct bnx2x_phy *VAR_4,
     struct link_params *VAR_5, u8 VAR_6,
     u16 VAR_7, u16 VAR_8, u8 *VAR_9)
{
 int VAR_10 = 0;
 struct bnx2x *VAR_11 = VAR_5->bp;
 u8 VAR_12;
 u8 *VAR_13 = VAR_9;
 read_sfp_module_eeprom_func_p VAR_14;

 if ((VAR_6 != 0xa0) && (VAR_6 != 0xa2)) {
  FUNC_0(VAR_2, "invalid dev_addr 0x%x\n", VAR_6);
  return -VAR_0;
 }

 switch (VAR_4->type) {
 case 130:
  VAR_14 = FUNC_1;
  break;
 case 129:
 case 131:
  VAR_14 = FUNC_2;
  break;
 case 128:
  VAR_14 = FUNC_3;
  break;
 default:
  return -VAR_1;
 }

 while (!VAR_10 && (VAR_8 > 0)) {
  VAR_12 = (VAR_8 > VAR_3) ?
   VAR_3 : VAR_8;
  VAR_10 = VAR_14(VAR_4, VAR_5, VAR_6, VAR_7, VAR_12,
          VAR_13, 0);
  VAR_8 -= VAR_12;
  VAR_13 += VAR_12;
  VAR_7 += VAR_12;
 }
 return VAR_10;
}
