
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; } ;
struct TYPE_14__ {int str; } ;
struct TYPE_13__ {int str; } ;
struct TYPE_12__ {int str; } ;
struct TYPE_11__ {int str; } ;
struct TYPE_10__ {int str; } ;
struct TYPE_9__ {TYPE_1__* ptp_ops; } ;
struct TYPE_8__ {int (* get_stats_strings ) (int **) ;} ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int **,int) ;
 int FUNC_2 (int **,int) ;
 TYPE_7__* VAR_8 ;
 TYPE_6__* VAR_9 ;
 TYPE_5__* VAR_10 ;
 TYPE_4__* VAR_11 ;
 TYPE_3__* VAR_12 ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int **) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_13,
          u32 VAR_14, u8 *VAR_15)
{
 struct mlxsw_sp_port *VAR_16 = FUNC_3(VAR_13);
 u8 *VAR_17 = VAR_15;
 int VAR_18;

 switch (VAR_14) {
 case 128:
  for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
   FUNC_0(VAR_17, VAR_12[VAR_18].str,
          VAR_0);
   VAR_17 += VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
   FUNC_0(VAR_17, VAR_10[VAR_18].str,
          VAR_0);
   VAR_17 += VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
   FUNC_0(VAR_17, VAR_9[VAR_18].str,
          VAR_0);
   VAR_17 += VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   FUNC_0(VAR_17, VAR_11[VAR_18].str,
          VAR_0);
   VAR_17 += VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
   FUNC_0(VAR_17, VAR_8[VAR_18].str,
          VAR_0);
   VAR_17 += VAR_0;
  }

  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++)
   FUNC_1(&VAR_17, VAR_18);

  for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
   FUNC_2(&VAR_17, VAR_18);

  VAR_16->mlxsw_sp->ptp_ops->get_stats_strings(&VAR_17);
  break;
 }
}
