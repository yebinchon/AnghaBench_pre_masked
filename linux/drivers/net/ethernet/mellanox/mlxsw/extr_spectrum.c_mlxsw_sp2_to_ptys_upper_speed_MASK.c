
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlxsw_sp {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ mask; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u32
FUNC_0(struct mlxsw_sp *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1[VAR_5].speed <= VAR_3)
   VAR_4 |= VAR_1[VAR_5].mask;
 }
 return VAR_4;
}
