
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int valid_vlan; int vlan_id; int * fc_map; } ;
struct lpfc_fip_param_hdr {scalar_t__ parm_version; scalar_t__ length; int parm_flags; } ;
struct lpfc_fcoe_params {int * fc_map; int vlan_tag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_3,
   uint8_t *VAR_4)
{
 struct lpfc_fip_param_hdr *VAR_5;
 struct lpfc_fcoe_params *VAR_6;

 VAR_5 = (struct lpfc_fip_param_hdr *)
  VAR_4;
 VAR_6 = (struct lpfc_fcoe_params *)
  (VAR_4 + sizeof(struct lpfc_fip_param_hdr));

 if ((VAR_5->parm_version != VAR_1) ||
  (VAR_5->length != VAR_0))
  return;

 if (VAR_5->parm_flags & VAR_2) {
  VAR_3->valid_vlan = 1;
  VAR_3->vlan_id = FUNC_0(VAR_6->vlan_tag) &
   0xFFF;
 }

 VAR_3->fc_map[0] = VAR_6->fc_map[0];
 VAR_3->fc_map[1] = VAR_6->fc_map[1];
 VAR_3->fc_map[2] = VAR_6->fc_map[2];
 return;
}
