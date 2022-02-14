
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40e_ring {scalar_t__ next_to_use; scalar_t__ count; TYPE_1__* vsi; } ;
struct i40e_pf {size_t lan_vsi; TYPE_2__** vsi; } ;
struct i40e_filter_program_desc {void* fd_id; void* dtype_cmd_cntindex; void* rsvd; void* qindex_flex_ptype_vsi; } ;
struct i40e_fdir_filter {int q_index; int flex_off; int pctype; int flex_offset; int dest_ctl; int fd_status; int fd_id; scalar_t__ cnt_index; scalar_t__ dest_vsi; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct i40e_filter_program_desc* FUNC_0 (struct i40e_ring*,scalar_t__) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct i40e_ring *VAR_19,
        struct i40e_fdir_filter *VAR_20, bool VAR_21)
{
 struct i40e_filter_program_desc *VAR_22;
 struct i40e_pf *VAR_23 = VAR_19->vsi->back;
 u32 VAR_24, VAR_25;
 u16 VAR_26;


 VAR_26 = VAR_19->next_to_use;
 VAR_22 = FUNC_0(VAR_19, VAR_26);

 VAR_26++;
 VAR_19->next_to_use = (VAR_26 < VAR_19->count) ? VAR_26 : 0;

 VAR_24 = VAR_8 &
       (VAR_20->q_index << VAR_9);

 VAR_24 |= VAR_4 &
        (VAR_20->flex_off << VAR_5);

 VAR_24 |= VAR_6 &
        (VAR_20->pctype << VAR_7);

 VAR_24 |= VAR_6 &
        (VAR_20->flex_offset << VAR_5);


 VAR_24 |= VAR_2 &
        ((u32)(VAR_20->dest_vsi ? : VAR_23->vsi[VAR_23->lan_vsi]->id) <<
         VAR_3);

 VAR_25 = VAR_18;

 VAR_25 |= VAR_21 ?
       VAR_0 <<
       VAR_17 :
       VAR_1 <<
       VAR_17;

 VAR_25 |= VAR_13 &
       (VAR_20->dest_ctl << VAR_14);

 VAR_25 |= VAR_15 &
       (VAR_20->fd_status << VAR_16);

 if (VAR_20->cnt_index) {
  VAR_25 |= VAR_12;
  VAR_25 |= VAR_10 &
        ((u32)VAR_20->cnt_index <<
         VAR_11);
 }

 VAR_22->qindex_flex_ptype_vsi = FUNC_1(VAR_24);
 VAR_22->rsvd = FUNC_1(0);
 VAR_22->dtype_cmd_cntindex = FUNC_1(VAR_25);
 VAR_22->fd_id = FUNC_1(VAR_20->fd_id);
}
