
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ,int ) ;
 int FUNC_7 (struct rtsx_chip*,int,int ) ;
 int FUNC_8 (struct rtsx_chip*,int) ;
 int FUNC_9 (struct rtsx_chip*,int) ;
 int FUNC_10 (struct rtsx_chip*,int,int ) ;
 int FUNC_11 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_12(struct rtsx_chip *VAR_8)
{
 struct sd_info *VAR_9 = &VAR_8->sd_card;
 int VAR_10;
 int VAR_11, VAR_12;
 u32 VAR_13[3], VAR_14;
 u8 VAR_15;
 int (*VAR_16)(struct rtsx_chip *VAR_17, u8 VAR_18);

 if (FUNC_1(VAR_9)) {
  if (FUNC_2(VAR_9))
   VAR_16 = FUNC_8;
  else
   VAR_16 = FUNC_9;

 } else {
  if (FUNC_0(VAR_9))
   VAR_16 = FUNC_8;
  else
   return VAR_5;
 }

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_13[VAR_11] = 0;
  for (VAR_12 = VAR_0; VAR_12 >= 0; VAR_12--) {
   if (FUNC_3(VAR_8, VAR_1) != VAR_6) {
    FUNC_11(VAR_8, VAR_3);
    FUNC_6(VAR_8, VAR_2,
          VAR_4, 0);
    return VAR_5;
   }

   VAR_10 = VAR_16(VAR_8, (u8)VAR_12);
   if (VAR_10 == VAR_6)
    VAR_13[VAR_11] |= 1 << VAR_12;
  }
 }

 VAR_14 = VAR_13[0] & VAR_13[1] & VAR_13[2];
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++)
  FUNC_4(FUNC_5(VAR_8), "TX raw_phase_map[%d] = 0x%08x\n",
   VAR_11, VAR_13[VAR_11]);

 FUNC_4(FUNC_5(VAR_8), "TX phase_map = 0x%08x\n", VAR_14);

 VAR_15 = FUNC_10(VAR_8, VAR_14, VAR_7);
 if (VAR_15 == 0xFF)
  return VAR_5;

 VAR_10 = FUNC_7(VAR_8, VAR_15, VAR_7);
 if (VAR_10 != VAR_6)
  return VAR_5;

 return VAR_6;
}
