
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct ice_vsi {int type; int idx; scalar_t__ vf_id; TYPE_2__* port_info; TYPE_1__* back; } ;
struct ice_tlan_ctx {int base; void* legacy_int; int tso_qnum; void* tso_ena; int src_vsi; int vmvf_type; scalar_t__ vmvf_num; int pf_num; int qlen; int port_num; } ;
struct ice_ring {int dma; int count; struct ice_vsi* vsi; } ;
struct TYPE_6__ {scalar_t__ vf_base_id; } ;
struct ice_hw {TYPE_3__ func_caps; int pf_id; } ;
struct TYPE_5__ {int lport; } ;
struct TYPE_4__ {struct ice_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;



 int FUNC_0 (struct ice_hw*,int ) ;
 int FUNC_1 (struct ice_tlan_ctx*,struct ice_ring*) ;

__attribute__((used)) static void
FUNC_2(struct ice_ring *VAR_4, struct ice_tlan_ctx *VAR_5, u16 VAR_6)
{
 struct ice_vsi *VAR_7 = VAR_4->vsi;
 struct ice_hw *VAR_8 = &VAR_7->back->hw;

 VAR_5->base = VAR_4->dma >> VAR_0;

 VAR_5->port_num = VAR_7->port_info->lport;


 VAR_5->qlen = VAR_4->count;

 FUNC_1(VAR_5, VAR_4);


 VAR_5->pf_num = VAR_8->pf_id;







 switch (VAR_7->type) {
 case 130:

 case 129:
  VAR_5->vmvf_type = VAR_1;
  break;
 case 128:

  VAR_5->vmvf_num = VAR_8->func_caps.vf_base_id + VAR_7->vf_id;
  VAR_5->vmvf_type = VAR_2;
  break;
 default:
  return;
 }


 VAR_5->src_vsi = FUNC_0(VAR_8, VAR_7->idx);

 VAR_5->tso_ena = VAR_3;
 VAR_5->tso_qnum = VAR_6;





 VAR_5->legacy_int = VAR_3;
}
