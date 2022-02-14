
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_pf_event {int severity; int event; } ;
struct ice_vf {scalar_t__ vf_id; TYPE_1__* pf; int vf_states; } ;
typedef int pfe ;
struct TYPE_2__ {scalar_t__ num_alloc_vfs; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,int *,int,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ice_vf *VAR_6)
{
 struct virtchnl_pf_event VAR_7;


 if (!VAR_6 || VAR_6->vf_id >= VAR_6->pf->num_alloc_vfs)
  return;


 if (!FUNC_1(VAR_1, VAR_6->vf_states) &&
     !FUNC_1(VAR_0, VAR_6->vf_states))
  return;

 VAR_7.event = VAR_3;
 VAR_7.severity = VAR_2;
 FUNC_0(&VAR_6->pf->hw, VAR_6->vf_id, VAR_4,
         VAR_5, (u8 *)&VAR_7, sizeof(VAR_7),
         ((void*)0));
}
