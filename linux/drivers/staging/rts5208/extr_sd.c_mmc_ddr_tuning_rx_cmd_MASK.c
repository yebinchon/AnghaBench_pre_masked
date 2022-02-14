
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int dummy; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int,int ) ;
 int FUNC_6 (struct rtsx_chip*,int ,int*,int,int,int,int,int *,int ,int) ;
 int FUNC_7 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_8, u8 VAR_9)
{
 struct sd_info *VAR_10 = &VAR_8->sd_card;
 int VAR_11;
 u8 VAR_12[5], VAR_13;

 if (FUNC_1(VAR_10))
  VAR_13 = VAR_2;
 else if (FUNC_0(VAR_10))
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_0;

 VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_7);
 if (VAR_11 != VAR_6)
  return VAR_5;

 FUNC_2(FUNC_4(VAR_8), "mmc ddr tuning rx\n");

 VAR_12[0] = 0x40 | VAR_4;
 VAR_12[1] = 0;
 VAR_12[2] = 0;
 VAR_12[3] = 0;
 VAR_12[4] = 0;

 VAR_11 = FUNC_6(VAR_8, VAR_3, VAR_12, 5, 0x200, 1,
         VAR_13, ((void*)0), 0, 100);
 if (VAR_11 != VAR_6) {
  (void)FUNC_7(VAR_8);

  FUNC_3(VAR_8);
  return VAR_5;
 }

 return VAR_6;
}
