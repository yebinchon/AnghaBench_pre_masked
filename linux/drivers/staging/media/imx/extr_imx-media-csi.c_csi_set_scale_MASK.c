
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_3, u32 VAR_4, u32 VAR_5)
{
 if ((VAR_5 & (VAR_2 | VAR_1)) ==
       (VAR_2 | VAR_1) &&
     *VAR_3 != VAR_4 && *VAR_3 != VAR_4 / 2)
  return -VAR_0;

 if (*VAR_3 <= VAR_4 / 2 ||
     (*VAR_3 < VAR_4 * 3 / 4 && !(VAR_5 & VAR_1)) ||
     (*VAR_3 < VAR_4 && (VAR_5 & VAR_2)))
  *VAR_3 = VAR_4 / 2;
 else
  *VAR_3 = VAR_4;

 return 0;
}
