
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hal_com_data {int CrystalCap; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int VAR_8 ;
 int FUNC_1 (struct adapter*,int ,int,int) ;
 int FUNC_2 (struct adapter*,int ,int,int,int) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,scalar_t__) ;
 int FUNC_7 (struct adapter*,scalar_t__,int ) ;
 int FUNC_8 (struct adapter*,int,int) ;
 int FUNC_9 (struct adapter*,scalar_t__,int) ;

int FUNC_10(struct adapter *VAR_17)
{
 int VAR_18 = VAR_16;
 struct hal_com_data *VAR_19 = FUNC_0(VAR_17);
 u32 VAR_20;
 u8 VAR_21;

 FUNC_5(VAR_17);


 VAR_20 = FUNC_6(VAR_17, VAR_12);
 FUNC_7(VAR_17, VAR_12, (u16)(VAR_20|VAR_2|VAR_0|VAR_1));

 FUNC_8(VAR_17, 0x948, 0x280);

 FUNC_9(VAR_17, VAR_11, VAR_13|VAR_14|VAR_15);

 FUNC_3(1);

 FUNC_2(VAR_17, VAR_8, 0x1, 0xfffff, 0x780);

 FUNC_9(VAR_17, VAR_12, VAR_7|VAR_6|VAR_5|VAR_4|VAR_3);

 FUNC_9(VAR_17, VAR_9+1, 0x80);




 VAR_18 = FUNC_4(VAR_17);


 VAR_21 = VAR_19->CrystalCap & 0x3F;
 FUNC_1(VAR_17, VAR_10, 0xFFF000, (VAR_21 | (VAR_21 << 6)));

 return VAR_18;
}
