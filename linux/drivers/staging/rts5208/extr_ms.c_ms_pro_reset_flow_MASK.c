
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_info {int switch_8bit_fail; } ;
struct rtsx_chip {scalar_t__ support_ms_8bit; struct ms_info ms_card; } ;


 scalar_t__ FUNC_0 (struct ms_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct rtsx_chip *VAR_7, int VAR_8)
{
 struct ms_info *VAR_9 = &VAR_7->ms_card;
 int VAR_10, VAR_11;

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_10 = FUNC_4(VAR_7);
  if (VAR_10 != VAR_6)
   return VAR_5;

  VAR_10 = FUNC_3(VAR_7, VAR_8);
  if (VAR_10 != VAR_6)
   return VAR_5;

  VAR_10 = FUNC_2(VAR_7);
  if (VAR_10 != VAR_6)
   return VAR_5;

  VAR_10 = FUNC_8(VAR_7);
  if (VAR_10 != VAR_6) {
   if (FUNC_1(VAR_7, VAR_1) != VAR_6) {
    FUNC_5(VAR_7, VAR_3);
    return VAR_5;
   }
   continue;
  } else {
   break;
  }
 }

 if (VAR_10 != VAR_6)
  return VAR_5;


 VAR_10 = FUNC_9(VAR_7, VAR_2, 0x18, VAR_0);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_9(VAR_7, VAR_2, VAR_4,
         VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10 != VAR_6)
  return VAR_5;


 if (FUNC_0(VAR_9) && VAR_7->support_ms_8bit && VAR_8) {
  VAR_10 = FUNC_7(VAR_7);
  if (VAR_10 != VAR_6) {
   VAR_9->switch_8bit_fail = 1;
   return VAR_5;
  }
 }

 return VAR_6;
}
