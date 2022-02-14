
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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_10)
{
 int VAR_11;

 FUNC_1(VAR_10);

 FUNC_0(VAR_10, VAR_9, VAR_2, 0xFF, 0x86);
 FUNC_0(VAR_10, VAR_9, VAR_3, 0xFF, 0x13);
 FUNC_0(VAR_10, VAR_9, VAR_4, 0xFF,
       VAR_6 | VAR_1);
 FUNC_0(VAR_10, VAR_0, VAR_4, VAR_5,
       VAR_5);

 VAR_11 = FUNC_2(VAR_10, 0, 100);
 if (VAR_11 < 0)
  return VAR_7;

 return VAR_8;
}
