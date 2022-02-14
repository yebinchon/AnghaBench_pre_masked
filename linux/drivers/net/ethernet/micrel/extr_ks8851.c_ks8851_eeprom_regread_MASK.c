
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8851_net {int dummy; } ;
struct eeprom_93cx6 {int reg_data_out; int reg_data_clock; int reg_chip_select; struct ks8851_net* data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct ks8851_net*,int ) ;

__attribute__((used)) static void FUNC_1(struct eeprom_93cx6 *VAR_4)
{
 struct ks8851_net *VAR_5 = VAR_4->data;
 unsigned VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3);

 VAR_4->reg_data_out = (VAR_6 & VAR_1) ? 1 : 0;
 VAR_4->reg_data_clock = (VAR_6 & VAR_2) ? 1 : 0;
 VAR_4->reg_chip_select = (VAR_6 & VAR_0) ? 1 : 0;
}
