
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
 int FUNC_0 (struct rtsx_chip*,int ,int,int ,int*,int) ;
 int FUNC_1 (struct rtsx_chip*,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_9)
{
 int VAR_10;
 u8 VAR_11[2];

 VAR_10 = FUNC_2(VAR_9, VAR_8, 2, 0, 0);
 if (VAR_10 != VAR_4)
  return VAR_3;

 VAR_10 = FUNC_0(VAR_9, VAR_2, 2, VAR_1, VAR_11, 2);
 if (VAR_10 != VAR_4)
  return VAR_3;

 if (VAR_11[1] & (VAR_5 | VAR_6 | VAR_7)) {
  FUNC_1(VAR_9, VAR_0);
  return VAR_3;
 }

 return VAR_4;
}
