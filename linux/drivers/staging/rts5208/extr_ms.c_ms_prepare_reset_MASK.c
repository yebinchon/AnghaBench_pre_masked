
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ delay_write_flag; } ;
struct ms_info {scalar_t__ pro_under_formatting; TYPE_1__ delay_write; scalar_t__ switch_8bit_fail; scalar_t__ check_ms_flow; scalar_t__ ms_type; } ;
struct rtsx_chip {int ocp_stat; scalar_t__ asic_code; int ft2_fast_mode; struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rtsx_chip*,int ) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*,int ,int,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct rtsx_chip *VAR_24)
{
 struct ms_info *VAR_25 = &VAR_24->ms_card;
 int VAR_26;
 u8 VAR_27 = 0;

 VAR_25->ms_type = 0;
 VAR_25->check_ms_flow = 0;
 VAR_25->switch_8bit_fail = 0;
 VAR_25->delay_write.delay_write_flag = 0;

 VAR_25->pro_under_formatting = 0;

 VAR_26 = FUNC_4(VAR_24);
 if (VAR_26 != VAR_23)
  return VAR_22;

 if (!VAR_24->ft2_fast_mode)
  FUNC_9(250);

 VAR_26 = FUNC_3(VAR_24, VAR_5);
 if (VAR_26 != VAR_23)
  return VAR_22;

 if (VAR_24->asic_code) {
  VAR_26 = FUNC_5(VAR_24);
  if (VAR_26 != VAR_23)
   return VAR_22;
 } else {
  VAR_26 = FUNC_8(VAR_24, VAR_3,
          VAR_2 | 0x20, 0);
  if (VAR_26)
   return VAR_26;
 }

 if (!VAR_24->ft2_fast_mode) {
  VAR_26 = FUNC_1(VAR_24, VAR_5);
  if (VAR_26 != VAR_23)
   return VAR_22;

  FUNC_9(150);
 }

 VAR_26 = FUNC_8(VAR_24, VAR_0, VAR_10,
         VAR_10);
 if (VAR_26)
  return VAR_26;

 if (VAR_24->asic_code) {
  VAR_26 = FUNC_8(VAR_24, VAR_6, 0xFF,
          VAR_18 |
          VAR_16 |
          VAR_14 |
          VAR_4);
  if (VAR_26)
   return VAR_26;

 } else {
  VAR_26 = FUNC_8(VAR_24, VAR_6, 0xFF,
          VAR_17 |
          VAR_16 |
          VAR_14 |
          VAR_4);
  if (VAR_26)
   return VAR_26;
 }
 VAR_26 = FUNC_8(VAR_24, VAR_12, 0xFF,
         VAR_15 | VAR_13);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_8(VAR_24, VAR_1, VAR_11 | VAR_7,
         VAR_11 | VAR_7);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_6(VAR_24);
 if (VAR_26 != VAR_23)
  return VAR_22;

 return VAR_23;
}
