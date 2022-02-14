
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wd719x {int dummy; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_in; struct wd719x* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wd719x*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct eeprom_93cx6 *VAR_4)
{
 struct wd719x *VAR_5 = VAR_4->data;
 u8 VAR_6 = 0;

 if (VAR_4->reg_data_in)
  VAR_6 |= VAR_2;
 if (VAR_4->reg_data_clock)
  VAR_6 |= VAR_0;
 if (VAR_4->reg_chip_select)
  VAR_6 |= VAR_1;

 FUNC_0(VAR_5, VAR_3, VAR_6);
}
