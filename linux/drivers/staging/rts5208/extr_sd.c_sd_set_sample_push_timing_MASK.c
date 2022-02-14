
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int dummy; } ;
struct rtsx_chip {int sd_ctl; scalar_t__ asic_code; struct sd_info sd_card; } ;


 scalar_t__ FUNC_0 (struct sd_info*) ;
 scalar_t__ FUNC_1 (struct sd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_7)
{
 int VAR_8;
 struct sd_info *VAR_9 = &VAR_7->sd_card;
 u8 VAR_10 = 0;

 if ((VAR_7->sd_ctl & VAR_1) == VAR_2)
  VAR_10 |= 0x10;

 if ((VAR_7->sd_ctl & VAR_4) == VAR_3) {
  if (VAR_7->asic_code) {
   if (FUNC_1(VAR_9) || FUNC_0(VAR_9)) {
    if (VAR_10 & 0x10)
     VAR_10 |= 0x04;
    else
     VAR_10 |= 0x08;
   }
  } else {
   if (VAR_10 & 0x10)
    VAR_10 |= 0x04;
   else
    VAR_10 |= 0x08;
  }
 } else if ((VAR_7->sd_ctl & VAR_4) ==
  VAR_5) {
  if (VAR_10 & 0x10)
   VAR_10 |= 0x04;
  else
   VAR_10 |= 0x08;
 }

 VAR_8 = FUNC_2(VAR_7, VAR_0, 0x1C, VAR_10);
 if (VAR_8)
  return VAR_8;

 return VAR_6;
}
