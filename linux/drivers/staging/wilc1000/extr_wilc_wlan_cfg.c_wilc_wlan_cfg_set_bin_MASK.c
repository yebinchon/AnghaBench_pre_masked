
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, u32 VAR_2, u16 VAR_3, u8 *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u8 VAR_7 = 0;

 if ((VAR_2 + VAR_5 + 5) >= VAR_0)
  return 0;

 FUNC_1(VAR_3, &VAR_1[VAR_2]);
 FUNC_1(VAR_5, &VAR_1[VAR_2 + 2]);

 if ((VAR_4) && VAR_5 != 0) {
  FUNC_0(&VAR_1[VAR_2 + 4], VAR_4, VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   VAR_7 += VAR_1[VAR_2 + VAR_6 + 4];
 }

 VAR_1[VAR_2 + VAR_5 + 4] = VAR_7;

 return (VAR_5 + 5);
}
