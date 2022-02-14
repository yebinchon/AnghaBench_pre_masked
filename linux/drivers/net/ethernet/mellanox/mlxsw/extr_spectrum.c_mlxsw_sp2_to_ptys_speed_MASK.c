
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; int mask_width; scalar_t__ mask; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct mlxsw_sp *VAR_2,
       u8 VAR_3, u32 VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if ((VAR_4 == VAR_1[VAR_7].speed) &&
      (VAR_5 & VAR_1[VAR_7].mask_width))
   VAR_6 |= VAR_1[VAR_7].mask;
 }
 return VAR_6;
}
