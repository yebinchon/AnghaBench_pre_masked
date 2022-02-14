
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int stats; } ;
struct mlxsw_sp_port {TYPE_1__ ptp; } ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int offset; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(struct mlxsw_sp_port *VAR_2,
    u64 *VAR_3, int VAR_4)
{
 void *VAR_5 = &VAR_2->ptp.stats;
 ptrdiff_t VAR_6;
 int VAR_7;

 VAR_3 += VAR_4;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = VAR_1[VAR_7].offset;
  *VAR_3++ = *(u64 *)(VAR_5 + VAR_6);
 }
}
