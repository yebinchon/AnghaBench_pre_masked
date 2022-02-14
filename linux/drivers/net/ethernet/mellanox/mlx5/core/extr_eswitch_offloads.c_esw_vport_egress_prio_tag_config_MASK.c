
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * allowed_vlan; int acl; } ;
struct mlx5_vport {TYPE_1__ egress; int vport; } ;
struct mlx5_flow_spec {int match_criteria_enable; int match_value; int match_criteria; } ;
struct mlx5_flow_act {int action; int member_0; } ;
struct mlx5_eswitch {int dev; } ;
struct TYPE_4__ {int first_vid; int cvlan_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_7 (struct mlx5_eswitch*,struct mlx5_vport*) ;
 int FUNC_8 (int ,char*,int ,int) ;
 int VAR_5 ;
 int FUNC_9 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_10 (int,int ) ;
 int * FUNC_11 (int ,struct mlx5_flow_spec*,struct mlx5_flow_act*,int *,int ) ;
 int FUNC_12 (int ,char*,int,int ) ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_13(struct mlx5_eswitch *VAR_8,
         struct mlx5_vport *VAR_9)
{
 struct mlx5_flow_act VAR_10 = {0};
 struct mlx5_flow_spec *VAR_11;
 int VAR_12 = 0;

 if (!FUNC_1(VAR_8->dev, VAR_7))
  return 0;






 FUNC_6(VAR_8, VAR_9);

 VAR_12 = FUNC_7(VAR_8, VAR_9);
 if (VAR_12) {
  FUNC_12(VAR_8->dev,
          "failed to enable egress acl (%d) on vport[%d]\n",
          VAR_12, VAR_9->vport);
  return VAR_12;
 }

 FUNC_5(VAR_8->dev,
    "vport[%d] configure prio tag egress rules\n", VAR_9->vport);

 VAR_11 = FUNC_10(sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto out_no_mem;
 }


 FUNC_3(VAR_5, VAR_11->match_criteria, VAR_6.cvlan_tag);
 FUNC_3(VAR_5, VAR_11->match_value, VAR_6.cvlan_tag);
 FUNC_3(VAR_5, VAR_11->match_criteria, VAR_6.first_vid);
 FUNC_2(VAR_5, VAR_11->match_value, VAR_6.first_vid, 0);

 VAR_11->match_criteria_enable = VAR_4;
 VAR_10.action = VAR_3 |
     VAR_2;
 VAR_9->egress.allowed_vlan =
  FUNC_11(VAR_9->egress.acl, VAR_11,
        &VAR_10, ((void*)0), 0);
 if (FUNC_0(VAR_9->egress.allowed_vlan)) {
  VAR_12 = FUNC_4(VAR_9->egress.allowed_vlan);
  FUNC_8(VAR_8->dev,
    "vport[%d] configure egress pop prio tag vlan rule failed, err(%d)\n",
    VAR_9->vport, VAR_12);
  VAR_9->egress.allowed_vlan = ((void*)0);
  goto out;
 }

out:
 FUNC_9(VAR_11);
out_no_mem:
 if (VAR_12)
  FUNC_6(VAR_8, VAR_9);
 return VAR_12;
}
