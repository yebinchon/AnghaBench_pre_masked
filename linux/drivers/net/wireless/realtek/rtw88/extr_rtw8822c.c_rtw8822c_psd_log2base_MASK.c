
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_0)
{
 u32 VAR_1, VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 u32 VAR_6[21] = {0, 432, 332, 274, 232, 200, 174,
      151, 132, 115, 100, 86, 74, 62, 51,
      42, 32, 23, 15, 7, 0};

 if (VAR_0 == 0)
  return 0;

 VAR_2 = FUNC_1(VAR_0) + 1;

 VAR_1 = (VAR_0 * 100) / (1 << VAR_2);
 VAR_3 = VAR_1 / 5;

 if (VAR_3 >= FUNC_0(VAR_6))
  VAR_3 = FUNC_0(VAR_6) - 1;

 VAR_5 = VAR_6[VAR_3];

 VAR_4 = VAR_2 * 100 - VAR_5;

 return VAR_4;
}
