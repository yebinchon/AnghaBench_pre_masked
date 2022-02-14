
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;


 size_t VAR_0 ;

__attribute__((used)) static inline u32
FUNC_0(u8 *VAR_1, u32 VAR_2, u8 *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4 && VAR_3[VAR_5]; VAR_5++, VAR_2++) {
  if (VAR_2 >= VAR_0)
   break;
  VAR_1[VAR_2] = VAR_3[VAR_5];
 }

 return VAR_2;
}
