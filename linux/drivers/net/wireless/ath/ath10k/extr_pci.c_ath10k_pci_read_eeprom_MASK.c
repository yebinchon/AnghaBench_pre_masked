
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,scalar_t__) ;
 int FUNC_4 (struct ath10k*,scalar_t__,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_14, u16 VAR_15, u8 *VAR_16)
{
 u32 VAR_17;
 int VAR_18;


 VAR_17 = VAR_4 |
       FUNC_1(VAR_15, VAR_3) |
       FUNC_1(VAR_15 >> 8, VAR_2);
 FUNC_4(VAR_14, VAR_5 + VAR_13, VAR_17);


 FUNC_4(VAR_14, VAR_5 + VAR_8,
      FUNC_1(1, VAR_10) | FUNC_1(1, VAR_9) |
      FUNC_1(4, VAR_11));


 VAR_18 = 100000;


 do {
  VAR_17 = FUNC_3(VAR_14, VAR_5 + VAR_8);
  if (FUNC_0(VAR_17, VAR_7))
   break;

  VAR_18--;
  FUNC_5(10);
 } while (VAR_18 > 0);

 if (!FUNC_0(VAR_17, VAR_7)) {
  FUNC_2(VAR_14, "timeout while reading device EEPROM at %04x\n",
      VAR_15);
  return -VAR_1;
 }


 FUNC_4(VAR_14, VAR_5 + VAR_8, VAR_17);

 if (FUNC_0(VAR_17, VAR_6)) {
  FUNC_2(VAR_14, "failed to read device EEPROM at %04x\n", VAR_15);
  return -VAR_0;
 }


 VAR_17 = FUNC_3(VAR_14, VAR_5 + VAR_12);
 *VAR_16 = VAR_17;

 return 0;
}
