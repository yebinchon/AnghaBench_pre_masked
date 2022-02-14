
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
 int FUNC_0 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_chip*) ;
 int FUNC_2 (struct rtsx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_10, u8 VAR_11)
{
 int VAR_12;

 FUNC_1(VAR_10);

 FUNC_0(VAR_10, VAR_3, VAR_5, 0xFF, VAR_11);
 FUNC_0(VAR_10, VAR_3, VAR_7, 0xFF,
       VAR_9 | VAR_6);
 FUNC_0(VAR_10, VAR_0, VAR_7,
       VAR_8, VAR_8);

 VAR_12 = FUNC_2(VAR_10, VAR_4, 200);
 if (VAR_12 < 0)
  return VAR_1;

 return VAR_2;
}
