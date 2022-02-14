
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (unsigned long*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(unsigned long *VAR_0, u16 VAR_1, u16 VAR_2,
       u16 VAR_3, u16 *VAR_4)
{
 u16 VAR_5 = 0;
 u16 VAR_6, VAR_7, VAR_8;

 *VAR_4 = 0;

again:
 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_6 >= VAR_1)
  return VAR_5;

 VAR_8 = ((VAR_6 + VAR_3) >= VAR_1) ? VAR_1 : VAR_6 + VAR_3;
 VAR_7 = FUNC_0(VAR_0, VAR_8, VAR_6);
 if (*VAR_4 < (VAR_7 - VAR_6)) {
  *VAR_4 = VAR_7 - VAR_6;
  VAR_5 = VAR_6;
 }

 if (VAR_7 < VAR_8) {
  VAR_2 = VAR_7 + 1;
  goto again;
 }

 return VAR_5;
}
