
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;

__attribute__((used)) static int FUNC_0(const u8 *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 while (VAR_7--) {
  if (*VAR_5 == VAR_2 || *VAR_5 == VAR_0
      || *VAR_5 == VAR_4 || *VAR_5 == VAR_3) {
   *VAR_6++ = VAR_0;
   *VAR_6++ = *VAR_5++ ^ VAR_1;
   VAR_8++;
  } else
   *VAR_6++ = *VAR_5++;
  VAR_8++;
 }
 return VAR_8;
}
