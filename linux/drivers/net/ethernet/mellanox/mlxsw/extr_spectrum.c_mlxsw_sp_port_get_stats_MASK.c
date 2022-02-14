
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ptp_ops; } ;
struct TYPE_3__ {scalar_t__ (* get_stats_count ) () ;int (* get_stats ) (struct mlxsw_sp_port*,int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct net_device*,int ,int,int *,int) ;
 struct mlxsw_sp_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int *,int) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_16,
        struct ethtool_stats *VAR_17, u64 *VAR_18)
{
 struct mlxsw_sp_port *VAR_19 = FUNC_1(VAR_16);
 int VAR_20, VAR_21 = 0;


 FUNC_0(VAR_16, VAR_2, 0,
      VAR_18, VAR_21);
 VAR_21 = VAR_13;


 FUNC_0(VAR_16, VAR_5, 0,
      VAR_18, VAR_21);
 VAR_21 += VAR_11;


 FUNC_0(VAR_16, VAR_4, 0,
      VAR_18, VAR_21);
 VAR_21 += VAR_10;


 FUNC_0(VAR_16, VAR_6, 0,
      VAR_18, VAR_21);
 VAR_21 += VAR_12;


 FUNC_0(VAR_16, VAR_1, 0,
      VAR_18, VAR_21);
 VAR_21 += VAR_8;


 for (VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
  FUNC_0(VAR_16, VAR_3, VAR_20,
       VAR_18, VAR_21);
  VAR_21 += VAR_9;
 }


 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  FUNC_0(VAR_16, VAR_7, VAR_20,
       VAR_18, VAR_21);
  VAR_21 += VAR_14;
 }


 VAR_19->mlxsw_sp->ptp_ops->get_stats(VAR_19,
          VAR_18, VAR_21);
 VAR_21 += VAR_19->mlxsw_sp->ptp_ops->get_stats_count();
}
