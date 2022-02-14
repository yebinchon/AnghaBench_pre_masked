
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_afk_picker {TYPE_1__* hits; } ;
struct mlxsw_afk {int blocks_count; } ;
struct TYPE_2__ {int total; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlxsw_afk *VAR_1,
       struct mlxsw_afk_picker *VAR_2)
{
 int VAR_3 = -VAR_0;
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->blocks_count; VAR_5++) {
  if (VAR_2->hits[VAR_5].total > VAR_4) {
   VAR_4 = VAR_2->hits[VAR_5].total;
   VAR_3 = VAR_5;
  }
 }
 return VAR_3;
}
