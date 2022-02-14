
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_1, u32 VAR_2, u16 VAR_3, u8 *VAR_4,
     u32 VAR_5)
{
 if ((VAR_2 + VAR_5 + 4) >= VAR_0)
  return 0;

 FUNC_1(VAR_3, &VAR_1[VAR_2]);
 FUNC_1(VAR_5, &VAR_1[VAR_2 + 2]);
 if (VAR_4 && VAR_5 != 0)
  FUNC_0(&VAR_1[VAR_2 + 4], VAR_4, VAR_5);

 return (VAR_5 + 4);
}
