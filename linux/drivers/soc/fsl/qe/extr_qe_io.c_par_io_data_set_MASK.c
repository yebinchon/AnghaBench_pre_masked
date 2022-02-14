
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int cpdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_3 ;

int FUNC_2(u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u32 VAR_7, VAR_8;

 if (VAR_4 >= VAR_2)
  return -VAR_0;
 if (VAR_5 >= VAR_1)
  return -VAR_0;

 VAR_7 = (u32) (1 << (VAR_1 - 1 - VAR_5));

 VAR_8 = FUNC_0(&VAR_3[VAR_4].cpdata);

 if (VAR_6 == 0)
  FUNC_1(&VAR_3[VAR_4].cpdata, ~VAR_7 & VAR_8);
 else
  FUNC_1(&VAR_3[VAR_4].cpdata, VAR_7 | VAR_8);

 return 0;
}
