
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct link_params*,struct bnx2x*,scalar_t__,int,int ,scalar_t__,int *) ;
 int FUNC_2 (struct link_params*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bnx2x_phy *VAR_5,
       struct link_params *VAR_6,
       u8 VAR_7,
       u16 VAR_8, u8 VAR_9,
       u8 *VAR_10, u8 VAR_11)
{
 int VAR_12 = 0;
 u8 VAR_13, VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16[4];
 u16 VAR_17;
 struct bnx2x *VAR_18 = VAR_6->bp;

 if (VAR_9 > VAR_4) {
  FUNC_0(VAR_3,
     "Reading from eeprom is limited to 16 bytes\n");
  return -VAR_0;
 }


 VAR_17 = VAR_8 & (~0x3);
 do {
  if ((!VAR_11) && (VAR_15 == VAR_1)) {
   FUNC_2(VAR_6, 0);

   FUNC_3(1000, 2000);
   FUNC_2(VAR_6, 1);
  }
  VAR_12 = FUNC_1(VAR_6, VAR_18, VAR_7, VAR_17, 0, VAR_9,
        VAR_16);
 } while ((VAR_12 != 0) && (++VAR_15 < VAR_2));

 if (VAR_12 == 0) {
  for (VAR_13 = (VAR_8 - VAR_17); VAR_13 < VAR_9 + (VAR_8 - VAR_17); VAR_13++) {
   VAR_10[VAR_14] = *((u8 *)VAR_16 + VAR_13);
   VAR_14++;
  }
 }

 return VAR_12;
}
