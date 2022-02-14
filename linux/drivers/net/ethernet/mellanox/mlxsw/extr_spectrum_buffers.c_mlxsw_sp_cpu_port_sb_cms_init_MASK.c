
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {TYPE_1__* sb_vals; } ;
struct TYPE_2__ {int cms_cpu_count; int cms_cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_1)
{
 return FUNC_0(VAR_1, 0, VAR_0,
          VAR_1->sb_vals->cms_cpu,
          VAR_1->sb_vals->cms_cpu_count);
}
