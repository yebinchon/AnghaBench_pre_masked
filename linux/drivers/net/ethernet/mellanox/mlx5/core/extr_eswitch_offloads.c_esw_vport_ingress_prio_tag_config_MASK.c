
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * allow_rule; int acl; int modify_metadata; scalar_t__ modify_metadata_rule; } ;
struct mlx5_vport {TYPE_2__ ingress; int vport; } ;
struct mlx5_flow_spec {int match_criteria_enable; int match_value; int match_criteria; } ;
struct mlx5_flow_act {int action; int modify_hdr; TYPE_1__* vlan; int member_0; } ;
struct mlx5_eswitch {int dev; } ;
struct TYPE_6__ {int cvlan_tag; } ;
struct TYPE_4__ {scalar_t__ prio; scalar_t__ vid; int ethtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int VAR_7 ;
 int FUNC_6 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_7 (int,int ) ;
 int * FUNC_8 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,int *,int ) ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static int FUNC_9(struct mlx5_eswitch *VAR_9,
          struct mlx5_vport *VAR_10)
{
 struct mlx5_flow_act VAR_11 = {0};
 struct mlx5_flow_spec *VAR_12;
 int VAR_13 = 0;







 VAR_12 = FUNC_7(sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  VAR_13 = -VAR_0;
  goto out_no_mem;
 }


 FUNC_2(VAR_7, VAR_12->match_criteria, VAR_8.cvlan_tag);
 FUNC_1(VAR_7, VAR_12->match_value, VAR_8.cvlan_tag, 0);
 VAR_12->match_criteria_enable = VAR_6;
 VAR_11.action = VAR_5 |
     VAR_3;
 VAR_11.vlan[0].ethtype = VAR_1;
 VAR_11.vlan[0].vid = 0;
 VAR_11.vlan[0].prio = 0;

 if (VAR_10->ingress.modify_metadata_rule) {
  VAR_11.action |= VAR_4;
  VAR_11.modify_hdr = VAR_10->ingress.modify_metadata;
 }

 VAR_10->ingress.allow_rule =
  FUNC_8(VAR_10->ingress.acl, VAR_12,
        &VAR_11, ((void*)0), 0);
 if (FUNC_0(VAR_10->ingress.allow_rule)) {
  VAR_13 = FUNC_3(VAR_10->ingress.allow_rule);
  FUNC_5(VAR_9->dev,
    "vport[%d] configure ingress untagged allow rule, err(%d)\n",
    VAR_10->vport, VAR_13);
  VAR_10->ingress.allow_rule = ((void*)0);
  goto out;
 }

out:
 FUNC_6(VAR_12);
out_no_mem:
 if (VAR_13)
  FUNC_4(VAR_9, VAR_10);
 return VAR_13;
}
