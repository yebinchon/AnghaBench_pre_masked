
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_red_qopt_offload_params {scalar_t__ min; scalar_t__ max; } ;
struct mlxsw_sp_qdisc {int dummy; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {TYPE_1__* bus_info; int core; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct mlxsw_sp_port *VAR_2,
    struct mlxsw_sp_qdisc *VAR_3,
    void *VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_2->mlxsw_sp;
 struct tc_red_qopt_offload_params *VAR_6 = VAR_4;

 if (VAR_6->min > VAR_6->max) {
  FUNC_1(VAR_5->bus_info->dev,
   "spectrum: RED: min %u is bigger then max %u\n", VAR_6->min,
   VAR_6->max);
  return -VAR_0;
 }
 if (VAR_6->max > FUNC_0(VAR_5->core, VAR_1)) {
  FUNC_1(VAR_5->bus_info->dev,
   "spectrum: RED: max value %u is too big\n", VAR_6->max);
  return -VAR_0;
 }
 if (VAR_6->min == 0 || VAR_6->max == 0) {
  FUNC_1(VAR_5->bus_info->dev,
   "spectrum: RED: 0 value is illegal for min and max\n");
  return -VAR_0;
 }
 return 0;
}
