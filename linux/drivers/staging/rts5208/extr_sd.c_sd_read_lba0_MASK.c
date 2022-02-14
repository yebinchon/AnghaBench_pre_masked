
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int*,int,int,int,int,int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_7)
{
 struct sd_info *VAR_8 = &VAR_7->sd_card;
 int VAR_9;
 u8 VAR_10[5], VAR_11;

 VAR_10[0] = 0x40 | VAR_0;
 VAR_10[1] = 0;
 VAR_10[2] = 0;
 VAR_10[3] = 0;
 VAR_10[4] = 0;

 if (FUNC_2(VAR_8)) {
  VAR_11 = VAR_2;
 } else {
  if (FUNC_1(VAR_8))
   VAR_11 = VAR_3;
  else if (FUNC_0(VAR_8))
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_1;
 }

 VAR_9 = FUNC_4(VAR_7, VAR_4, VAR_10, 5, 512, 1,
         VAR_11, ((void*)0), 0, 100);
 if (VAR_9 != VAR_6) {
  FUNC_3(VAR_7);
  return VAR_5;
 }

 return VAR_6;
}
