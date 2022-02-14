
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
 int FUNC_0 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_chip *VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_0(VAR_10, VAR_5, 0xFF,
         VAR_0 | VAR_1
         | VAR_6 | VAR_7 | VAR_4);
 if (VAR_11)
  return VAR_11;
 VAR_11 = FUNC_0(VAR_10, VAR_8, VAR_2,
         VAR_3);
 if (VAR_11)
  return VAR_11;

 return VAR_9;
}
