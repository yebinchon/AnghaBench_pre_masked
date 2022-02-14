
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int sd_addr; int raw_csd; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int ,int ) ;
 int FUNC_5 (struct rtsx_chip*,int,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;
 int FUNC_7 (struct rtsx_chip*,int,int,int) ;
 int FUNC_8 (struct rtsx_chip*,int ,int*,int,int,int,int,int ,int,int) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_12, u8 VAR_13)
{
 struct sd_info *VAR_14 = &VAR_12->sd_card;
 int VAR_15;
 u8 VAR_16[5], VAR_17;

 VAR_15 = FUNC_5(VAR_12, VAR_13, VAR_11);
 if (VAR_15 != VAR_10)
  return VAR_9;

 if (FUNC_2(VAR_14)) {
  VAR_17 = VAR_2;
 } else {
  if (FUNC_1(VAR_14))
   VAR_17 = VAR_3;
  else if (FUNC_0(VAR_14))
   VAR_17 = VAR_2;
  else
   VAR_17 = VAR_1;
 }

 VAR_15 = FUNC_7(VAR_12, 0x08, 1, 1000);
 if (VAR_15 != VAR_10)
  return VAR_9;

 VAR_15 = FUNC_4(VAR_12, VAR_4, VAR_5,
         VAR_5);
 if (VAR_15)
  return VAR_15;

 VAR_16[0] = 0x40 | VAR_0;
 VAR_16[1] = 0;
 VAR_16[2] = 0;
 VAR_16[3] = 0;
 VAR_16[4] = 0;

 VAR_15 = FUNC_8(VAR_12, VAR_7, VAR_16, 5, 16, 1,
          VAR_17, VAR_14->raw_csd, 16, 100);
 if (VAR_15 != VAR_10) {
  FUNC_3(VAR_12);
  FUNC_4(VAR_12, VAR_4, VAR_5, 0);
  return VAR_9;
 }

 VAR_15 = FUNC_4(VAR_12, VAR_4, VAR_5,
         0);
 if (VAR_15)
  return VAR_15;

 FUNC_6(VAR_12, VAR_8, VAR_14->sd_addr, VAR_6,
       ((void*)0), 0);

 return VAR_10;
}
