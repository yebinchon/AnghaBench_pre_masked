
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct _adapter {int eeprom_address_size; } ;


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
 int FUNC_0 (struct _adapter*) ;
 int FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int,int) ;
 int FUNC_3 (struct _adapter*,int ,int) ;
 int FUNC_4 (struct _adapter*) ;
 scalar_t__ FUNC_5 (struct _adapter*) ;

void FUNC_6(struct _adapter *VAR_10, u16 VAR_11, u16 VAR_12)
{
 u8 VAR_13;
 u8 VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_14 = FUNC_1(VAR_10, 0x102502f1);
 VAR_15 = VAR_14 & 0xf7;
 if (VAR_14 != VAR_15)
  FUNC_2(VAR_10, 0x102502f1, VAR_15);
 VAR_16 = FUNC_1(VAR_10, 0x10250003);
 VAR_17 = VAR_16 | 0x20;
 if (VAR_17 != VAR_16)
  FUNC_2(VAR_10, 0x10250003, VAR_17);
 VAR_13 = FUNC_1(VAR_10, VAR_3);
 VAR_13 &= ~(VAR_5 | VAR_6 | VAR_9 | VAR_7);
 VAR_13 |= VAR_8 | VAR_4;
 FUNC_2(VAR_10, VAR_3, VAR_13);
 FUNC_3(VAR_10, VAR_1, 5);
 if (VAR_10->eeprom_address_size == 8)
  FUNC_3(VAR_10, 0, 6);
 else
  FUNC_3(VAR_10, 0, 4);
 FUNC_4(VAR_10);




 FUNC_4(VAR_10);



 FUNC_3(VAR_10, VAR_2, 3);

 FUNC_3(VAR_10, VAR_11, VAR_10->eeprom_address_size);

 FUNC_3(VAR_10, VAR_12, 16);
 if (FUNC_5(VAR_10)) {
  FUNC_4(VAR_10);
  FUNC_3(VAR_10, VAR_0, 5);
  FUNC_3(VAR_10, VAR_11, 4);
  FUNC_0(VAR_10);
 }
 if (VAR_17 != VAR_16)
  FUNC_2(VAR_10, 0x10250003, VAR_16);
 if (VAR_15 != VAR_14)
  FUNC_2(VAR_10, 0x102502f1, VAR_14);
}
