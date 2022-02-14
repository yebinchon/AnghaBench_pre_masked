
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_pf_event {int severity; int event; } ;
struct i40e_vf {int vf_id; TYPE_2__* pf; int vf_states; } ;
struct TYPE_4__ {scalar_t__ vf_base_id; } ;
struct TYPE_6__ {TYPE_1__ func_caps; } ;
struct TYPE_5__ {int num_alloc_vfs; TYPE_3__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int,int ,int ,int *,int,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct i40e_vf *VAR_5)
{
 struct virtchnl_pf_event VAR_6;
 int VAR_7;


 if (!VAR_5 || VAR_5->vf_id >= VAR_5->pf->num_alloc_vfs)
  return;


 if (!FUNC_1(VAR_1, &VAR_5->vf_states) &&
     !FUNC_1(VAR_0, &VAR_5->vf_states))
  return;

 VAR_7 = VAR_5->vf_id + (int)VAR_5->pf->hw.func_caps.vf_base_id;

 VAR_6.event = VAR_3;
 VAR_6.severity = VAR_2;
 FUNC_0(&VAR_5->pf->hw, VAR_7, VAR_4,
          0, (u8 *)&VAR_6,
          sizeof(struct virtchnl_pf_event), ((void*)0));
}
