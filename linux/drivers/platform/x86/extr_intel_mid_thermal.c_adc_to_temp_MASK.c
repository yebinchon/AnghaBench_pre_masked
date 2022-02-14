
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_9, uint16_t VAR_10, int *VAR_11)
{
 int VAR_12;


 if (VAR_9) {
  if (FUNC_0(VAR_10, VAR_8, VAR_7)) {
   *VAR_11 = FUNC_1(VAR_10) * 1000;
   return 0;
  }
  return -VAR_6;
 }

 if (!FUNC_0(VAR_10, VAR_1, VAR_0))
  return -VAR_6;


 if (VAR_10 > VAR_2)
  VAR_12 = 177 - (VAR_10/5);
 else if ((VAR_10 <= VAR_2) && (VAR_10 > VAR_3))
  VAR_12 = 111 - (VAR_10/8);
 else if ((VAR_10 <= VAR_3) && (VAR_10 > VAR_4))
  VAR_12 = 92 - (VAR_10/10);
 else if ((VAR_10 <= VAR_4) && (VAR_10 > VAR_5))
  VAR_12 = 91 - (VAR_10/10);
 else
  VAR_12 = 112 - (VAR_10/6);


 *VAR_11 = VAR_12 * 1000;
 return 0;
}
