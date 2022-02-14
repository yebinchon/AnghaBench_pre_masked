
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int raw_scr; int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int*,int,int,int,int,int*,int,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_6, u8 VAR_7)
{
 struct sd_info *VAR_8 = &VAR_6->sd_card;
 int VAR_9;
 u8 VAR_10[5], VAR_11[8];

 VAR_9 = FUNC_3(VAR_6, VAR_0, VAR_8->sd_addr,
         VAR_1, ((void*)0), 0);
 if (VAR_9 != VAR_5)
  return VAR_4;

 VAR_10[0] = 0x40 | VAR_3;
 VAR_10[1] = 0;
 VAR_10[2] = 0;
 VAR_10[3] = 0;
 VAR_10[4] = 0;

 VAR_9 = FUNC_2(VAR_6, VAR_2, VAR_10, 5, 8, 1, VAR_7,
         VAR_11, 8, 250);
 if (VAR_9 != VAR_5) {
  FUNC_1(VAR_6);
  return VAR_4;
 }

 FUNC_0(VAR_8->raw_scr, VAR_11, 8);

 if ((VAR_11[0] & 0x0F) == 0)
  return VAR_4;

 return VAR_5;
}
