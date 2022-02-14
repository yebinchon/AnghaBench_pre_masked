
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_3__ {int mask; int mask_width; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned long*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_2, u32 VAR_3,
    u8 VAR_4, unsigned long *VAR_5)
{
 u8 VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ((VAR_3 & VAR_1[VAR_7].mask) &&
      (VAR_6 & VAR_1[VAR_7].mask_width))
   FUNC_0(&VAR_1[VAR_7],
        VAR_5);
 }
}
