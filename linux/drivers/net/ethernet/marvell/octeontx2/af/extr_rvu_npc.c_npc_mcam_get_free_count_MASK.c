
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ FUNC_0 (unsigned long*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_2(unsigned long *VAR_0, u16 VAR_1, u16 VAR_2)
{
 u16 VAR_3, VAR_4;
 u16 VAR_5 = 0;

again:
 if (VAR_1 >= VAR_2)
  return VAR_5;

 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1);
 if (VAR_3 >= VAR_2)
  return VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_3);
 if (VAR_4 <= VAR_2) {
  VAR_5 += VAR_4 - VAR_3;
  VAR_1 = VAR_4 + 1;
  goto again;
 }

 VAR_5 += VAR_2 - VAR_3;
 return VAR_5;
}
