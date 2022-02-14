
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct esas2r_target {scalar_t__ target_state; int virt_targ_id; int identifier_len; int flags; int identifier; int phys_targ_id; scalar_t__ inter_block; scalar_t__ inter_byte; scalar_t__ block_size; } ;
struct esas2r_disc_context {scalar_t__ curr_virt_id; int curr_phys_id; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int,int ) ;
 struct esas2r_target* FUNC_2 (struct esas2r_adapter*,int*,int) ;
 int FUNC_3 (struct esas2r_target*,struct esas2r_adapter*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int*,int) ;

struct esas2r_target *FUNC_7(struct esas2r_adapter *VAR_4,
            struct esas2r_disc_context *VAR_5,
            u8 *VAR_6,
            u8 VAR_7)
{
 struct esas2r_target *VAR_8;

 FUNC_4();

 if (VAR_5->curr_virt_id >= VAR_0) {
  FUNC_0();
  FUNC_5();
  return ((void*)0);
 }



 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_7);

 if (VAR_8 == ((void*)0)) {
  VAR_8 = VAR_4->targetdb + VAR_5->curr_virt_id;

  if (VAR_7 > sizeof(VAR_8->identifier)
      || VAR_8->target_state == VAR_3) {
   FUNC_5();
   return ((void*)0);
  }
 }

 FUNC_1("add PT; T:%d, V:%d, P:%d", FUNC_3(VAR_8, VAR_4),
        VAR_5->curr_virt_id,
        VAR_5->curr_phys_id);

 VAR_8->block_size = 0;
 VAR_8->inter_byte = 0;
 VAR_8->inter_block = 0;
 VAR_8->virt_targ_id = VAR_5->curr_virt_id;
 VAR_8->phys_targ_id = VAR_5->curr_phys_id;
 VAR_8->identifier_len = VAR_7;

 FUNC_6(VAR_8->identifier, VAR_6, VAR_7);

 VAR_8->flags |= VAR_1 | VAR_2;

 VAR_8->target_state = VAR_3;

 return VAR_8;
}
