
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int eeprom; } ;
struct eeprom_93cx6 {scalar_t__ reg_chip_select; scalar_t__ reg_data_clock; scalar_t__ reg_data_out; scalar_t__ reg_data_in; int width; int register_write; int register_read; struct rt2x00_dev* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eeprom_93cx6*,int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct rt2x00_dev *VAR_9)
{
 struct eeprom_93cx6 VAR_10;
 u32 VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_0);

 VAR_10.data = VAR_9;
 VAR_10.register_read = VAR_7;
 VAR_10.register_write = VAR_8;
 switch (FUNC_1(VAR_11, VAR_1))
 {
 case 0:
  VAR_10.width = VAR_4;
  break;
 case 1:
  VAR_10.width = VAR_5;
  break;
 default:
  VAR_10.width = VAR_6;
  break;
 }
 VAR_10.reg_data_in = 0;
 VAR_10.reg_data_out = 0;
 VAR_10.reg_data_clock = 0;
 VAR_10.reg_chip_select = 0;

 FUNC_0(&VAR_10, VAR_2, VAR_9->eeprom,
          VAR_3 / sizeof(u16));

 return 0;
}
