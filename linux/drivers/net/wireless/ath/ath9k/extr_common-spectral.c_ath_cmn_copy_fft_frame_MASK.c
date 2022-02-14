
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline void
FUNC_1(u8 *VAR_0, u8 *VAR_1, int VAR_2, int VAR_3)
{
 switch (VAR_3 - VAR_2) {
 case -1:

  FUNC_0(&VAR_1[1], VAR_0,
         VAR_2 - 1);
  break;
 case 0:

  FUNC_0(VAR_1, VAR_0, VAR_2);
  break;
 case 1:



  FUNC_0(&VAR_1[1], VAR_0, 30);
  VAR_1[31] = VAR_0[31];
  FUNC_0(&VAR_1[32], &VAR_0[33],
         VAR_2 - 32);
  break;
 case 2:



  FUNC_0(VAR_1, VAR_0, 30);
  VAR_1[30] = VAR_0[31];
  FUNC_0(&VAR_1[31], &VAR_0[33],
         VAR_2 - 31);
  break;
 default:
  break;
 }
}
