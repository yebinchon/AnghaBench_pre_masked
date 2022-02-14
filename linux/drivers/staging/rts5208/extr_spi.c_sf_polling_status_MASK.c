
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_10 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*,int ,int) ;
 int FUNC_4 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_11, int VAR_12)
{
 int VAR_13;

 FUNC_2(VAR_11);

 FUNC_0(VAR_11, VAR_10, VAR_2, 0xFF, VAR_4);
 FUNC_0(VAR_11, VAR_10, VAR_5, 0xFF,
       VAR_7 | VAR_3);
 FUNC_0(VAR_11, VAR_0, VAR_5, VAR_6,
       VAR_6);

 VAR_13 = FUNC_3(VAR_11, 0, VAR_12);
 if (VAR_13 < 0) {
  FUNC_1(VAR_11);
  FUNC_4(VAR_11, VAR_1);
  return VAR_8;
 }

 return VAR_9;
}
