
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static inline u32 FUNC_0(u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;


 if (VAR_1 <= VAR_2 * 2)
  return 0;

 VAR_3 = (u32) (VAR_1 / (VAR_2 * 2));

 if ((VAR_1 / VAR_3) > (VAR_2 * 2))
  VAR_3++;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 if (VAR_3 % 2)
  VAR_3 = (VAR_3 + 1) / 2;
 else
  VAR_3 = VAR_3 / 2;

 return VAR_3;
}
