
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ks8851_net {int dummy; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_in; scalar_t__ drive_data; struct ks8851_net* data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ks8851_net*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct eeprom_93cx6 *VAR_6)
{
 struct ks8851_net *VAR_7 = VAR_6->data;
 unsigned VAR_8 = VAR_2;

 if (VAR_6->drive_data)
  VAR_8 |= VAR_4;
 if (VAR_6->reg_data_in)
  VAR_8 |= VAR_1;
 if (VAR_6->reg_data_clock)
  VAR_8 |= VAR_3;
 if (VAR_6->reg_chip_select)
  VAR_8 |= VAR_0;

 FUNC_0(VAR_7, VAR_5, VAR_8);
}
