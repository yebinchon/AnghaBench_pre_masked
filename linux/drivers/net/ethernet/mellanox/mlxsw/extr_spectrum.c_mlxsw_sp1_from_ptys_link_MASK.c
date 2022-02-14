
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {int mask; int mask_ethtool; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp *VAR_2, u32 VAR_3,
    u8 VAR_4, unsigned long *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3 & VAR_1[VAR_6].mask)
   FUNC_0(VAR_1[VAR_6].mask_ethtool,
      VAR_5);
 }
}
