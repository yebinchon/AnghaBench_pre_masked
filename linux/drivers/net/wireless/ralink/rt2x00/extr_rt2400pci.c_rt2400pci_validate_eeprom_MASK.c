
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct eeprom_93cx6*,int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,int ) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct rt2x00_dev*,int *) ;
 int FUNC_6 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_11)
{
 struct eeprom_93cx6 VAR_12;
 u32 VAR_13;
 u16 VAR_14;
 u8 *VAR_15;

 VAR_13 = FUNC_6(VAR_11, VAR_0);

 VAR_12.data = VAR_11;
 VAR_12.register_read = VAR_9;
 VAR_12.register_write = VAR_10;
 VAR_12.width = FUNC_4(VAR_13, VAR_1) ?
     VAR_7 : VAR_8;
 VAR_12.reg_data_in = 0;
 VAR_12.reg_data_out = 0;
 VAR_12.reg_data_clock = 0;
 VAR_12.reg_chip_select = 0;

 FUNC_0(&VAR_12, VAR_3, VAR_11->eeprom,
          VAR_5 / sizeof(u16));




 VAR_15 = FUNC_1(VAR_11, VAR_4);
 FUNC_5(VAR_11, VAR_15);

 VAR_14 = FUNC_2(VAR_11, VAR_2);
 if (VAR_14 == 0xffff) {
  FUNC_3(VAR_11, "Invalid EEPROM data detected\n");
  return -VAR_6;
 }

 return 0;
}
