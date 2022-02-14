
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_chip {int dummy; } ;


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
 int FUNC_0 (struct rtsx_chip*) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int ,int) ;
 int FUNC_3 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_4 (struct rtsx_chip*,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_10, u8 VAR_11)
{
 int VAR_12;
 u8 VAR_13[6];

 FUNC_0(VAR_10);

 VAR_12 = FUNC_2(VAR_10, 0, 0, VAR_5, 6);
 if (VAR_12 != VAR_7)
  return VAR_6;

 VAR_13[0] = 0;
 VAR_13[1] = VAR_11;
 VAR_13[2] = 0;
 VAR_13[3] = 0;
 VAR_13[4] = 0;
 VAR_13[5] = 0;

 VAR_12 = FUNC_3(VAR_10, VAR_4, 6, VAR_3, VAR_13, 6);
 if (VAR_12 != VAR_7)
  return VAR_6;

 VAR_12 = FUNC_1(VAR_10, VAR_9, VAR_8);
 if (VAR_12 != VAR_7)
  return VAR_6;

 VAR_12 = FUNC_4(VAR_10, VAR_2, VAR_13);
 if (VAR_12)
  return VAR_12;

 if (VAR_13[0] & (VAR_0 | VAR_1))
  return VAR_6;

 return VAR_7;
}
