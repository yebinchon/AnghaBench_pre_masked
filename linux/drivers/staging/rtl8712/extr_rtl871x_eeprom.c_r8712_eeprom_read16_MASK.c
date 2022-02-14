
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct _adapter {int eeprom_address_size; scalar_t__ surprise_removed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct _adapter*) ;
 void* FUNC_1 (struct _adapter*,int) ;
 int FUNC_2 (struct _adapter*,int,int) ;
 int FUNC_3 (struct _adapter*) ;
 int FUNC_4 (struct _adapter*,int,int) ;

u16 FUNC_5(struct _adapter *VAR_8, u16 VAR_9)
{
 u16 VAR_10;
 u16 VAR_11 = 0;
 u8 VAR_12, VAR_13, VAR_14, VAR_15;

 VAR_12 = FUNC_1(VAR_8, 0x102502f1);
 VAR_13 = VAR_12 & 0xf7;
 if (VAR_12 != VAR_13)
  FUNC_2(VAR_8, 0x102502f1, VAR_13);
 VAR_14 = FUNC_1(VAR_8, 0x10250003);
 VAR_15 = VAR_14 | 0x20;
 if (VAR_15 != VAR_14)
  FUNC_2(VAR_8, 0x10250003, VAR_15);
 if (VAR_8->surprise_removed)
  goto out;

 VAR_10 = FUNC_1(VAR_8, VAR_1);
 if (VAR_8->surprise_removed)
  goto out;
 VAR_10 &= ~(VAR_3 | VAR_4 | VAR_7 | VAR_5);
 VAR_10 |= VAR_6 | VAR_2;
 FUNC_2(VAR_8, VAR_1, (unsigned char)VAR_10);



 FUNC_4(VAR_8, VAR_0, 3);
 FUNC_4(VAR_8, VAR_9, VAR_8->eeprom_address_size);

 VAR_11 = FUNC_3(VAR_8);
 FUNC_0(VAR_8);
out:
 if (VAR_15 != VAR_14)
  FUNC_2(VAR_8, 0x10250003, VAR_14);
 if (VAR_13 != VAR_12)
  FUNC_2(VAR_8, 0x102502f1, VAR_12);
 return VAR_11;
}
