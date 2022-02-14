
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uchar
FUNC_0(int VAR_3, int *VAR_4)
{
 int VAR_5 = VAR_3;
 if (VAR_2 == VAR_3)
  VAR_3 = 8;
 else if (VAR_0 == VAR_3)
  VAR_3 = 12;
 else if (VAR_1 == VAR_3)
  VAR_3 = 16;
 else if (VAR_3 > 7 && VAR_3 < 11)
  VAR_5 = VAR_2;
  else if (VAR_3 > 11 && VAR_3 < 16)
  VAR_5 = VAR_0;
  else if (VAR_3 > 15 && VAR_3 < 21)
  VAR_5 = VAR_1;
 else {

  VAR_5 = VAR_2;
  VAR_3 = 8;
 }
 *VAR_4 = VAR_3;
 return VAR_5;
}
