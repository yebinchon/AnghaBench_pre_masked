
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct eeprom_93cx6*,int ,int ,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int * FUNC_1 (struct rt2x00_dev*,int ) ;
 int FUNC_2 (struct rt2x00_dev*,char*,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct rt2x00_dev*,int *) ;
 int FUNC_8 (struct rt2x00_dev*,int ) ;

__attribute__((used)) static int FUNC_9(struct rt2x00_dev *VAR_27)
{
 struct eeprom_93cx6 VAR_28;
 u32 VAR_29;
 u16 VAR_30;
 u8 *VAR_31;

 VAR_29 = FUNC_8(VAR_27, VAR_1);

 VAR_28.data = VAR_27;
 VAR_28.register_read = VAR_25;
 VAR_28.register_write = VAR_26;
 VAR_28.width = FUNC_5(VAR_29, VAR_2) ?
     VAR_22 : VAR_23;
 VAR_28.reg_data_in = 0;
 VAR_28.reg_data_out = 0;
 VAR_28.reg_data_clock = 0;
 VAR_28.reg_chip_select = 0;

 FUNC_0(&VAR_28, VAR_12, VAR_27->eeprom,
          VAR_20 / sizeof(u16));




 VAR_31 = FUNC_1(VAR_27, VAR_15);
 FUNC_7(VAR_27, VAR_31);

 VAR_30 = FUNC_3(VAR_27, VAR_4);
 if (VAR_30 == 0xffff) {
  FUNC_6(&VAR_30, VAR_8, 2);
  FUNC_6(&VAR_30, VAR_11,
       VAR_0);
  FUNC_6(&VAR_30, VAR_10,
       VAR_0);
  FUNC_6(&VAR_30, VAR_7,
       VAR_21);
  FUNC_6(&VAR_30, VAR_5, 0);
  FUNC_6(&VAR_30, VAR_6, 0);
  FUNC_6(&VAR_30, VAR_9, VAR_24);
  FUNC_4(VAR_27, VAR_4, VAR_30);
  FUNC_2(VAR_27, "Antenna: 0x%04x\n", VAR_30);
 }

 VAR_30 = FUNC_3(VAR_27, VAR_16);
 if (VAR_30 == 0xffff) {
  FUNC_6(&VAR_30, VAR_17, 0);
  FUNC_6(&VAR_30, VAR_19, 0);
  FUNC_6(&VAR_30, VAR_18, 0);
  FUNC_4(VAR_27, VAR_16, VAR_30);
  FUNC_2(VAR_27, "NIC: 0x%04x\n", VAR_30);
 }

 VAR_30 = FUNC_3(VAR_27, VAR_13);
 if (VAR_30 == 0xffff) {
  FUNC_6(&VAR_30, VAR_14,
       VAR_3);
  FUNC_4(VAR_27, VAR_13, VAR_30);
  FUNC_2(VAR_27, "Calibrate offset: 0x%04x\n",
      VAR_30);
 }

 return 0;
}
