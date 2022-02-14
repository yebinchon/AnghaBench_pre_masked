
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(u64 VAR_3, u64 VAR_4,
       u64 *VAR_5,
       u64 VAR_6,
       int VAR_7, int VAR_8,
       int *VAR_9,
       u64 *VAR_10)
{
 int VAR_11;

 if (VAR_4 & VAR_0) {

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
   if (VAR_5[VAR_11] == VAR_2 ||
       VAR_5[VAR_11] == VAR_1)
    continue;

   if (VAR_3 >= VAR_5[VAR_11] &&
       VAR_3 < VAR_5[VAR_11] + VAR_6)
    break;
  }

  *VAR_9 = VAR_11;
  *VAR_10 = VAR_3 - VAR_5[VAR_11];
 } else {

  *VAR_9 = VAR_8;
  *VAR_10 = 0;
 }
}
