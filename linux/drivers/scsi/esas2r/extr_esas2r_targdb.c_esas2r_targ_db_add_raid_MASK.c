
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_target {scalar_t__ target_state; int block_size; int inter_byte; int inter_block; int virt_targ_id; scalar_t__ identifier_len; int flags; int phys_targ_id; } ;
struct esas2r_disc_context {scalar_t__ curr_virt_id; int interleave; int block_size; int raid_grp_name; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct esas2r_target*,struct esas2r_adapter*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

struct esas2r_target *FUNC_5(struct esas2r_adapter *VAR_5,
           struct esas2r_disc_context *
           VAR_6)
{
 struct esas2r_target *VAR_7;

 FUNC_3();

 if (VAR_6->curr_virt_id >= VAR_0) {
  FUNC_0();
  FUNC_4();
  return ((void*)0);
 }

 VAR_7 = VAR_5->targetdb + VAR_6->curr_virt_id;

 if (VAR_7->target_state == VAR_4) {
  FUNC_4();
  return ((void*)0);
 }

 FUNC_1("add RAID %s, T:%d", VAR_6->raid_grp_name,
        FUNC_2(
         VAR_7,
         VAR_5));

 if (VAR_6->interleave == 0
     || VAR_6->block_size == 0) {


  FUNC_1("invalid RAID group dimensions");

  FUNC_4();

  return ((void*)0);
 }

 VAR_7->block_size = VAR_6->block_size;
 VAR_7->inter_byte = VAR_6->interleave;
 VAR_7->inter_block = VAR_6->interleave / VAR_6->block_size;
 VAR_7->virt_targ_id = VAR_6->curr_virt_id;
 VAR_7->phys_targ_id = VAR_1;

 VAR_7->flags &= ~VAR_2;
 VAR_7->flags |= VAR_3;

 VAR_7->identifier_len = 0;

 VAR_7->target_state = VAR_4;

 return VAR_7;
}
