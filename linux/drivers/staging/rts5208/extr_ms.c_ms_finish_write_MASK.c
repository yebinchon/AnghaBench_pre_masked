
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ms_info {scalar_t__ page_off; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int FUNC_0 (struct ms_info*) ;
 scalar_t__ FUNC_1 (struct ms_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct rtsx_chip*,int,int,int,int ,scalar_t__) ;
 int FUNC_3 (struct rtsx_chip*,int) ;
 int FUNC_4 (struct rtsx_chip*,int) ;
 int FUNC_5 (struct rtsx_chip*,int,int,int) ;
 int FUNC_6 (struct rtsx_chip*,int) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_7(struct rtsx_chip *VAR_3, u16 VAR_4, u16 VAR_5,
      u16 VAR_6, u8 VAR_7)
{
 struct ms_info *VAR_8 = &VAR_3->ms_card;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8->page_off + 1);
 if (VAR_9 != VAR_1)
  return VAR_0;

 VAR_10 = VAR_4 >> 9;

 if (FUNC_1(VAR_8)) {
  FUNC_0(VAR_8);
  FUNC_4(VAR_3, VAR_4);
 } else {
  VAR_9 = FUNC_3(VAR_3, VAR_4);
  if (VAR_9 == VAR_1)
   FUNC_6(VAR_3, VAR_4);
 }

 FUNC_5(VAR_3, VAR_10, VAR_6 - VAR_2[VAR_10], VAR_5);

 return VAR_1;
}
