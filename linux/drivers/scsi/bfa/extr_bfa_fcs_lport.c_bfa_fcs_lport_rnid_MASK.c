
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct fchs_s {scalar_t__ s_id; scalar_t__ d_id; int ox_id; } ;
struct fc_rnid_general_topology_data_s {int dummy; } ;
struct fc_rnid_common_id_data_s {int node_name; int port_name; } ;
struct fc_rnid_cmd_s {scalar_t__ node_id_data_format; } ;
struct bfa_rport_s {int dummy; } ;
struct bfa_fcxp_s {int dummy; } ;
struct bfa_fcs_lport_s {int lp_tag; TYPE_1__* fabric; int fcs; } ;
struct TYPE_2__ {int vf_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bfa_fcxp_s* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_fcs_lport_s*) ;
 int FUNC_2 (struct bfa_fcs_lport_s*) ;
 int FUNC_3 (struct bfa_fcs_lport_s*) ;
 int FUNC_4 (struct bfa_fcxp_s*) ;
 int FUNC_5 (struct bfa_fcxp_s*,struct bfa_rport_s*,int ,int ,int ,int ,scalar_t__,struct fchs_s*,int *,int *,int ,int ) ;
 int FUNC_6 (struct bfa_fcs_lport_s*,struct fc_rnid_general_topology_data_s*) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (struct fchs_s*,int ,scalar_t__,int ,int ,scalar_t__,struct fc_rnid_common_id_data_s*,struct fc_rnid_general_topology_data_s*) ;

__attribute__((used)) static void
FUNC_9(struct bfa_fcs_lport_s *VAR_5, struct fchs_s *VAR_6,
  struct fc_rnid_cmd_s *VAR_7, u16 VAR_8)
{
 struct fc_rnid_common_id_data_s VAR_9;
 struct fc_rnid_general_topology_data_s VAR_10;
 struct fchs_s VAR_11;
 struct bfa_fcxp_s *VAR_12;
 struct bfa_rport_s *VAR_13 = ((void*)0);
 u16 VAR_14;
 u32 VAR_15;

 FUNC_7(VAR_5->fcs, VAR_6->s_id);
 FUNC_7(VAR_5->fcs, VAR_6->d_id);
 FUNC_7(VAR_5->fcs, VAR_8);

 VAR_12 = FUNC_0(VAR_5->fcs, VAR_0);
 if (!VAR_12)
  return;







 FUNC_7(VAR_5->fcs, VAR_7->node_id_data_format);
 if (VAR_7->node_id_data_format == VAR_4) {
  VAR_15 = VAR_4;



  FUNC_6(VAR_5, &VAR_10);
 } else {
  VAR_15 = VAR_3;
 }




 VAR_9.port_name = FUNC_3(VAR_5);
 VAR_9.node_name = FUNC_2(VAR_5);

 VAR_14 = FUNC_8(&VAR_11, FUNC_4(VAR_12),
    VAR_6->s_id, FUNC_1(VAR_5),
    VAR_6->ox_id, VAR_15, &VAR_9,
    &VAR_10);

 FUNC_5(VAR_12, VAR_13, VAR_5->fabric->vf_id, VAR_5->lp_tag,
   VAR_0, VAR_1, VAR_14, &VAR_11, ((void*)0), ((void*)0),
   VAR_2, 0);
}
