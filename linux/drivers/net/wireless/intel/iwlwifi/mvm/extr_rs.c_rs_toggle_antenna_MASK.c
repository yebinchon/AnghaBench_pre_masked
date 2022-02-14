
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct rs_rate {int ant; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 size_t* VAR_1 ;
 int FUNC_1 (int ,size_t) ;

__attribute__((used)) static int FUNC_2(u32 VAR_2, struct rs_rate *VAR_3)
{
 u8 VAR_4;

 if (!VAR_3->ant || FUNC_0(VAR_3->ant & VAR_0))
  return 0;

 if (!FUNC_1(VAR_2, VAR_3->ant))
  return 0;

 VAR_4 = VAR_1[VAR_3->ant];

 while ((VAR_4 != VAR_3->ant) &&
        !FUNC_1(VAR_2, VAR_4))
  VAR_4 = VAR_1[VAR_4];

 if (VAR_4 == VAR_3->ant)
  return 0;

 VAR_3->ant = VAR_4;

 return 1;
}
