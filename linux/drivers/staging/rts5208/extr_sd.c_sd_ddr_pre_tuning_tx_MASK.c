
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd_info {int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


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
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int ,int ) ;
 int FUNC_4 (struct rtsx_chip*,int,int ) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*,int,int ) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;
 int FUNC_8 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_11)
{
 struct sd_info *VAR_12 = &VAR_11->sd_card;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;
 u8 VAR_16;

 VAR_13 = FUNC_3(VAR_11, VAR_2, VAR_4,
         VAR_4);
 if (VAR_13)
  return VAR_13;

 VAR_15 = 0;
 for (VAR_14 = VAR_0; VAR_14 >= 0; VAR_14--) {
  if (FUNC_0(VAR_11, VAR_1) != VAR_9) {
   FUNC_8(VAR_11, VAR_3);
   FUNC_3(VAR_11, VAR_2,
         VAR_4, 0);
   return VAR_8;
  }

  VAR_13 = FUNC_4(VAR_11, (u8)VAR_14, VAR_10);
  if (VAR_13 != VAR_9)
   continue;

  VAR_13 = FUNC_7(VAR_11, VAR_7,
          VAR_12->sd_addr, VAR_6,
          ((void*)0), 0);
  if ((VAR_13 == VAR_9) ||
      !FUNC_5(VAR_11, VAR_5))
   VAR_15 |= 1 << VAR_14;
 }

 VAR_13 = FUNC_3(VAR_11, VAR_2, VAR_4,
         0);
 if (VAR_13)
  return VAR_13;

 FUNC_1(FUNC_2(VAR_11), "DDR TX pre tune phase_map = 0x%08x\n",
  VAR_15);

 VAR_16 = FUNC_6(VAR_11, VAR_15, VAR_10);
 if (VAR_16 == 0xFF)
  return VAR_8;

 VAR_13 = FUNC_4(VAR_11, VAR_16, VAR_10);
 if (VAR_13 != VAR_9)
  return VAR_8;

 FUNC_1(FUNC_2(VAR_11), "DDR TX pre tune phase: %d\n",
  (int)VAR_16);

 return VAR_9;
}
