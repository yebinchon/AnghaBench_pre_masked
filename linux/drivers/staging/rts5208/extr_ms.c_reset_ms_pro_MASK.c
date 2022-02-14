
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ms_info {int* raw_sys_info; scalar_t__ switch_8bit_fail; } ;
struct rtsx_chip {int ms_power_class_en; int* card_bus_width; size_t* card2lun; struct ms_info ms_card; } ;


 scalar_t__ FUNC_0 (struct ms_info*) ;
 scalar_t__ FUNC_1 (struct ms_info*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int ) ;
 int FUNC_4 (struct rtsx_chip*,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int) ;
 int FUNC_7 (struct rtsx_chip*) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_3)
{
 struct ms_info *VAR_4 = &VAR_3->ms_card;
 int VAR_5;
 VAR_5 = FUNC_4(VAR_3, 1);
 if (VAR_5 != VAR_2) {
  if (VAR_4->switch_8bit_fail) {
   VAR_5 = FUNC_4(VAR_3, 0);
   if (VAR_5 != VAR_2)
    return VAR_1;
  } else {
   return VAR_1;
  }
 }

 VAR_5 = FUNC_5(VAR_3);
 if (VAR_5 != VAR_2)
  return VAR_1;
 if (FUNC_0(VAR_4))
  VAR_3->card_bus_width[VAR_3->card2lun[VAR_0]] = 8;
 else
  VAR_3->card_bus_width[VAR_3->card2lun[VAR_0]] = 4;

 return VAR_2;
}
