
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * drop_rule; int acl; int * allowed_vlan; struct mlx5_fc* drop_counter; } ;
struct TYPE_4__ {int vlan; int qos; } ;
struct mlx5_vport {TYPE_2__ egress; int vport; TYPE_1__ info; } ;
struct mlx5_flow_spec {int match_criteria_enable; int match_value; int match_criteria; } ;
struct mlx5_flow_destination {int counter_id; int type; int member_0; } ;
struct mlx5_flow_act {int action; int member_0; } ;
struct mlx5_fc {int dummy; } ;
struct mlx5_eswitch {int dev; } ;
struct TYPE_6__ {int first_vid; int cvlan_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int FUNC_5 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_6 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_7 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_8 (int ,char*,int ,int) ;
 int VAR_7 ;
 int FUNC_9 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_10 (int,int ) ;
 int FUNC_11 (struct mlx5_flow_spec*,int ,int) ;
 void* FUNC_12 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;
 int FUNC_13 (int ,char*,int,int ) ;
 int FUNC_14 (struct mlx5_fc*) ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static int FUNC_15(struct mlx5_eswitch *VAR_9,
       struct mlx5_vport *VAR_10)
{
 struct mlx5_fc *VAR_11 = VAR_10->egress.drop_counter;
 struct mlx5_flow_destination VAR_12 = {0};
 struct mlx5_flow_destination *VAR_13 = ((void*)0);
 struct mlx5_flow_act VAR_14 = {0};
 struct mlx5_flow_spec *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;

 FUNC_5(VAR_9, VAR_10);

 if (!VAR_10->info.vlan && !VAR_10->info.qos) {
  FUNC_6(VAR_9, VAR_10);
  return 0;
 }

 VAR_17 = FUNC_7(VAR_9, VAR_10);
 if (VAR_17) {
  FUNC_13(VAR_9->dev,
          "failed to enable egress acl (%d) on vport[%d]\n",
          VAR_17, VAR_10->vport);
  return VAR_17;
 }

 FUNC_4(VAR_9->dev,
    "vport[%d] configure egress rules, vlan(%d) qos(%d)\n",
    VAR_10->vport, VAR_10->info.vlan, VAR_10->info.qos);

 VAR_15 = FUNC_10(sizeof(*VAR_15), VAR_1);
 if (!VAR_15) {
  VAR_17 = -VAR_0;
  goto out;
 }


 FUNC_2(VAR_7, VAR_15->match_criteria, VAR_8.cvlan_tag);
 FUNC_2(VAR_7, VAR_15->match_value, VAR_8.cvlan_tag);
 FUNC_2(VAR_7, VAR_15->match_criteria, VAR_8.first_vid);
 FUNC_1(VAR_7, VAR_15->match_value, VAR_8.first_vid, VAR_10->info.vlan);

 VAR_15->match_criteria_enable = VAR_6;
 VAR_14.action = VAR_2;
 VAR_10->egress.allowed_vlan =
  FUNC_12(VAR_10->egress.acl, VAR_15,
        &VAR_14, ((void*)0), 0);
 if (FUNC_0(VAR_10->egress.allowed_vlan)) {
  VAR_17 = FUNC_3(VAR_10->egress.allowed_vlan);
  FUNC_8(VAR_9->dev,
    "vport[%d] configure egress allowed vlan rule failed, err(%d)\n",
    VAR_10->vport, VAR_17);
  VAR_10->egress.allowed_vlan = ((void*)0);
  goto out;
 }


 FUNC_11(VAR_15, 0, sizeof(*VAR_15));
 VAR_14.action = VAR_4;


 if (VAR_11) {
  VAR_14.action |= VAR_3;
  VAR_12.type = VAR_5;
  VAR_12.counter_id = FUNC_14(VAR_11);
  VAR_13 = &VAR_12;
  VAR_16++;
 }
 VAR_10->egress.drop_rule =
  FUNC_12(VAR_10->egress.acl, VAR_15,
        &VAR_14, VAR_13, VAR_16);
 if (FUNC_0(VAR_10->egress.drop_rule)) {
  VAR_17 = FUNC_3(VAR_10->egress.drop_rule);
  FUNC_8(VAR_9->dev,
    "vport[%d] configure egress drop rule failed, err(%d)\n",
    VAR_10->vport, VAR_17);
  VAR_10->egress.drop_rule = ((void*)0);
 }
out:
 FUNC_9(VAR_15);
 return VAR_17;
}
