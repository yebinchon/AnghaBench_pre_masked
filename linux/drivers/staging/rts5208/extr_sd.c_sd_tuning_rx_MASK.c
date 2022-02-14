
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd_info {int dummy; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 scalar_t__ FUNC_2 (struct sd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct rtsx_chip*,int) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*,int,int ) ;
 int FUNC_8 (struct rtsx_chip*,int) ;
 int FUNC_9 (struct rtsx_chip*,int) ;
 int FUNC_10 (struct rtsx_chip*,int,int ) ;
 int FUNC_11 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_12(struct rtsx_chip *VAR_6)
{
 struct sd_info *VAR_7 = &VAR_6->sd_card;
 int VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11[3], VAR_12;
 u8 VAR_13;
 int (*VAR_14)(struct rtsx_chip *VAR_15, u8 VAR_16);

 if (FUNC_1(VAR_7)) {
  if (FUNC_2(VAR_7))
   VAR_14 = FUNC_8;
  else
   VAR_14 = FUNC_9;

 } else {
  if (FUNC_0(VAR_7))
   VAR_14 = FUNC_5;
  else
   return VAR_3;
 }

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  VAR_11[VAR_9] = 0;
  for (VAR_10 = VAR_0; VAR_10 >= 0; VAR_10--) {
   if (FUNC_3(VAR_6, VAR_1) != VAR_4) {
    FUNC_11(VAR_6, VAR_2);
    return VAR_3;
   }

   VAR_8 = VAR_14(VAR_6, (u8)VAR_10);
   if (VAR_8 == VAR_4)
    VAR_11[VAR_9] |= 1 << VAR_10;
  }
 }

 VAR_12 = VAR_11[0] & VAR_11[1] & VAR_11[2];
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  FUNC_4(FUNC_6(VAR_6), "RX raw_phase_map[%d] = 0x%08x\n",
   VAR_9, VAR_11[VAR_9]);

 FUNC_4(FUNC_6(VAR_6), "RX phase_map = 0x%08x\n", VAR_12);

 VAR_13 = FUNC_10(VAR_6, VAR_12, VAR_5);
 if (VAR_13 == 0xFF)
  return VAR_3;

 VAR_8 = FUNC_7(VAR_6, VAR_13, VAR_5);
 if (VAR_8 != VAR_4)
  return VAR_3;

 return VAR_4;
}
