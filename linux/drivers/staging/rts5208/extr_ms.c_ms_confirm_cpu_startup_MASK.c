
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int card_wp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 u8 VAR_14;


 VAR_13 = 0;
 do {
  if (FUNC_0(VAR_10, VAR_4) != VAR_9) {
   FUNC_2(VAR_10, VAR_6);
   return VAR_8;
  }

  for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
   VAR_11 = FUNC_1(VAR_10, VAR_0, 1,
            VAR_7, &VAR_14, 1);
   if (VAR_11 == VAR_9)
    break;
  }
  if (VAR_12 == VAR_5)
   return VAR_8;

  if (VAR_13 > 100)
   return VAR_8;

  VAR_13++;
  FUNC_3(100);
 } while (!(VAR_14 & VAR_1));

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_11 = FUNC_1(VAR_10, VAR_0, 1, VAR_7, &VAR_14, 1);
  if (VAR_11 == VAR_9)
   break;
 }
 if (VAR_12 == VAR_5)
  return VAR_8;

 if (VAR_14 & VAR_3) {
  if (VAR_14 & VAR_2)
   VAR_10->card_wp |= (VAR_4);
  else
   return VAR_8;
 }


 return VAR_9;
}
