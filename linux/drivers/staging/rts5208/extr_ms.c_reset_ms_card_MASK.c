
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_info {int total_block; scalar_t__ ms_type; scalar_t__ check_ms_flow; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int FUNC_0 (struct ms_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct ms_info*,int ,int) ;
 int FUNC_4 (struct rtsx_chip*,int) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (struct rtsx_chip*) ;
 int FUNC_8 (struct rtsx_chip*) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;

int FUNC_10(struct rtsx_chip *VAR_3)
{
 struct ms_info *VAR_4 = &VAR_3->ms_card;
 int VAR_5 = VAR_4->total_block / 512 - 1;
 int VAR_6;

 FUNC_3(VAR_4, 0, sizeof(struct ms_info));

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (VAR_6 != VAR_2)
  return VAR_1;

 VAR_6 = FUNC_9(VAR_3, VAR_0);
 if (VAR_6 != VAR_2)
  return VAR_1;

 VAR_4->ms_type = 0;

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6 != VAR_2) {
  if (VAR_4->check_ms_flow) {
   VAR_6 = FUNC_6(VAR_3);
   if (VAR_6 != VAR_2)
    return VAR_1;
  } else {
   return VAR_1;
  }
 }

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 != VAR_2)
  return VAR_1;

 if (!FUNC_0(VAR_4)) {



  VAR_6 = FUNC_4(VAR_3, VAR_5);
  if (VAR_6 != VAR_2)
   return VAR_1;
 }

 FUNC_1(FUNC_8(VAR_3), "ms_card->ms_type = 0x%x\n", VAR_4->ms_type);

 return VAR_2;
}
