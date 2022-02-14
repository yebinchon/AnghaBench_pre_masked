
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wd719x {int dummy; } ;
struct eeprom_93cx6 {int reg_data_out; struct wd719x* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wd719x*,int ) ;

__attribute__((used)) static void FUNC_1(struct eeprom_93cx6 *VAR_2)
{
 struct wd719x *VAR_3 = VAR_2->data;
 u8 VAR_4 = FUNC_0(VAR_3, VAR_1);

 VAR_2->reg_data_out = VAR_4 & VAR_0;
}
