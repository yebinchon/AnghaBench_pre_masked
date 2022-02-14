
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (scalar_t__*,int,int) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct rtsx_chip*,int,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_5, u16 VAR_6, u16 VAR_7,
   u8 VAR_8, u8 VAR_9)
{
 int VAR_10;
 u8 VAR_11[VAR_1], VAR_12;

 FUNC_1(VAR_11, 0xff, VAR_1);

 VAR_11[0] = 0xf8;
 VAR_11[1] = 0xff;
 VAR_11[2] = (u8)(VAR_7 >> 8);
 VAR_11[3] = (u8)VAR_7;

 for (VAR_12 = VAR_8; VAR_12 < VAR_9; VAR_12++) {
  if (FUNC_0(VAR_5, VAR_0) != VAR_4) {
   FUNC_2(VAR_5, VAR_2);
   return VAR_3;
  }

  VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_12,
          VAR_11, VAR_1);
  if (VAR_10 != VAR_4)
   return VAR_3;
 }

 return VAR_4;
}
