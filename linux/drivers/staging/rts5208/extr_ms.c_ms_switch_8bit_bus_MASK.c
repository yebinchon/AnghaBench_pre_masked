
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ms_info {int ms_type; } ;
struct rtsx_chip {struct ms_info ms_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int ,scalar_t__*,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_12)
{
 struct ms_info *VAR_13 = &VAR_12->ms_card;
 int VAR_14, VAR_15;
 u8 VAR_16[2];

 VAR_16[0] = VAR_7;
 VAR_16[1] = 0;
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_2(VAR_12, VAR_11, 1,
     VAR_6, VAR_16, 2);
  if (VAR_14 == VAR_10)
   break;
 }
 if (VAR_14 != VAR_10)
  return VAR_9;

 VAR_14 = FUNC_3(VAR_12, VAR_3, 0x98,
         VAR_2 | VAR_8);
 if (VAR_14)
  return VAR_14;

 VAR_13->ms_type |= VAR_1;
 VAR_14 = FUNC_0(VAR_12);
 if (VAR_14 != VAR_10)
  return VAR_9;

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = FUNC_1(VAR_12, VAR_5, VAR_0,
      1, VAR_6);
  if (VAR_14 != VAR_10)
   return VAR_9;
 }

 return VAR_10;
}
