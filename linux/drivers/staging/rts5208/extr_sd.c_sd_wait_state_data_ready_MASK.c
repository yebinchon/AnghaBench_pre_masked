
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_4, u8 VAR_5,
        u8 VAR_6, int VAR_7)
{
 struct sd_info *VAR_8 = &VAR_4->sd_card;
 int VAR_9, VAR_10;
 u8 VAR_11[5];

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = FUNC_0(VAR_4, VAR_1,
          VAR_8->sd_addr, VAR_0,
          VAR_11, 5);
  if (VAR_9 != VAR_3)
   return VAR_2;

  if (((VAR_11[3] & 0x1E) == VAR_5) &&
      ((VAR_11[3] & 0x01) == VAR_6))
   return VAR_3;
 }

 return VAR_2;
}
