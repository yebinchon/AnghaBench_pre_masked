
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct rtsx_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (struct rtsx_chip*,int ,scalar_t__,int,int ) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;

int FUNC_7(struct rtsx_chip *VAR_10, int VAR_11, u8 *VAR_12, u8 VAR_13)
{
 int VAR_14, VAR_15;
 u16 VAR_16;

 if (VAR_13 == VAR_6)
  return VAR_9;

 FUNC_5(VAR_10);

 if (VAR_13 == VAR_7) {
  for (VAR_16 = VAR_0; VAR_16 < VAR_0 + 16;
       VAR_16++)
   FUNC_2(VAR_10, VAR_1, VAR_16, 0xFF, 0);

  VAR_15 = 17;
 } else if (VAR_13 != VAR_6) {
  for (VAR_16 = VAR_2; VAR_16 <= VAR_3;
       VAR_16++)
   FUNC_2(VAR_10, VAR_1, VAR_16, 0xFF, 0);

  VAR_15 = 6;
 }
 FUNC_2(VAR_10, VAR_1, VAR_4, 0xFF, 0);

 VAR_14 = FUNC_6(VAR_10, VAR_5, 100);
 if (VAR_14 != VAR_9)
  return VAR_8;

 if (VAR_12) {
  int VAR_17 = (VAR_15 < VAR_11) ? VAR_15 : VAR_11;

  FUNC_1(VAR_12, FUNC_4(VAR_10), VAR_17);

  FUNC_0(FUNC_3(VAR_10), "min_len = %d\n", VAR_17);
  FUNC_0(FUNC_3(VAR_10), "Response in cmd buf: 0x%x 0x%x 0x%x 0x%x\n",
   VAR_12[0], VAR_12[1], VAR_12[2], VAR_12[3]);
 }

 return VAR_9;
}
