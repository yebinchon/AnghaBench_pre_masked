
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tc_cls_matchall_offload {int dummy; } ;
struct mlxsw_sp_port {TYPE_2__* sample; int dev; } ;
struct TYPE_3__ {scalar_t__ rate; int trunc_size; int truncate; int psample_group; } ;
struct flow_action_entry {TYPE_1__ sample; } ;
struct TYPE_4__ {scalar_t__ rate; int psample_group; int trunc_size; int truncate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mlxsw_sp_port*,int,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct mlxsw_sp_port *VAR_3,
          struct tc_cls_matchall_offload *VAR_4,
          const struct flow_action_entry *VAR_5,
          bool VAR_6)
{
 int VAR_7;

 if (!VAR_3->sample)
  return -VAR_1;
 if (FUNC_4(VAR_3->sample->psample_group)) {
  FUNC_2(VAR_3->dev, "sample already active\n");
  return -VAR_0;
 }
 if (VAR_5->sample.rate > VAR_2) {
  FUNC_2(VAR_3->dev, "sample rate not supported\n");
  return -VAR_1;
 }

 FUNC_3(VAR_3->sample->psample_group,
      VAR_5->sample.psample_group);
 VAR_3->sample->truncate = VAR_5->sample.truncate;
 VAR_3->sample->trunc_size = VAR_5->sample.trunc_size;
 VAR_3->sample->rate = VAR_5->sample.rate;

 VAR_7 = FUNC_1(VAR_3, 1, VAR_5->sample.rate);
 if (VAR_7)
  goto err_port_sample_set;
 return 0;

err_port_sample_set:
 FUNC_0(VAR_3->sample->psample_group, ((void*)0));
 return VAR_7;
}
