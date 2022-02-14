
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_chip*,int ,int,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_5,
       u32 VAR_6, u16 VAR_7, u8 VAR_8)
{
 int VAR_9, VAR_10;
 u8 VAR_11[8];

 VAR_11[0] = VAR_8;
 VAR_11[1] = (u8)(VAR_7 >> 8);
 VAR_11[2] = (u8)VAR_7;
 VAR_11[3] = (u8)(VAR_6 >> 24);
 VAR_11[4] = (u8)(VAR_6 >> 16);
 VAR_11[5] = (u8)(VAR_6 >> 8);
 VAR_11[6] = (u8)VAR_6;
 VAR_11[7] = 0;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = FUNC_0(VAR_5, VAR_1, 7,
     VAR_4, VAR_11, 8);
  if (VAR_9 == VAR_3)
   break;
 }
 if (VAR_10 == VAR_0)
  return VAR_2;

 return VAR_3;
}
