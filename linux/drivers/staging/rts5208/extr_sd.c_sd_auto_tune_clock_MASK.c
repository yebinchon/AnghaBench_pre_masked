
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_clock; } ;
struct rtsx_chip {scalar_t__ asic_code; struct sd_info sd_card; } ;






 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*) ;

__attribute__((used)) static inline int FUNC_1(struct rtsx_chip *VAR_3)
{
 struct sd_info *VAR_4 = &VAR_3->sd_card;
 int VAR_5;

 if (VAR_3->asic_code) {
  if (VAR_4->sd_clock > 30)
   VAR_4->sd_clock -= 20;
 } else {
  switch (VAR_4->sd_clock) {
  case 130:
   VAR_4->sd_clock = 131;
   break;

  case 131:
   VAR_4->sd_clock = 132;
   break;

  case 132:
   VAR_4->sd_clock = 133;
   break;

  case 133:
   VAR_4->sd_clock = 128;
   break;

  case 128:
   VAR_4->sd_clock = 129;
   break;

  case 129:
   VAR_4->sd_clock = VAR_0;
   break;

  default:
   break;
  }
 }

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_1;

 return VAR_2;
}
