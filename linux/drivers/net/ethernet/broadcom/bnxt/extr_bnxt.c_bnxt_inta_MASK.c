
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int doorbell; } ;
struct TYPE_3__ {int fw_ring_id; } ;
struct bnxt_cp_ring_info {TYPE_2__ cp_db; TYPE_1__ cp_ring_struct; int ** cp_desc_ring; int cp_raw_cons; } ;
struct bnxt_napi {int napi; struct bnxt_cp_ring_info cp_ring; struct bnxt* bp; } ;
struct bnxt {int intr_sem; scalar_t__ bar0; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct bnxt*,struct bnxt_cp_ring_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct bnxt_napi *VAR_5 = VAR_4;
 struct bnxt *VAR_6 = VAR_5->bp;
 struct bnxt_cp_ring_info *VAR_7 = &VAR_5->cp_ring;
 u32 VAR_8 = FUNC_3(VAR_7->cp_raw_cons);
 u32 VAR_9;

 FUNC_7(&VAR_7->cp_desc_ring[FUNC_2(VAR_8)][FUNC_1(VAR_8)]);

 if (!FUNC_5(VAR_6, VAR_7)) {
  VAR_9 = FUNC_8(VAR_6->bar0 + VAR_0);

  if (!(VAR_9 & (0x10000 << VAR_7->cp_ring_struct.fw_ring_id)))
   return VAR_2;
 }


 FUNC_0(VAR_7->cp_db.doorbell);


 if (FUNC_9(FUNC_4(&VAR_6->intr_sem) != 0))
  return VAR_1;

 FUNC_6(&VAR_5->napi);
 return VAR_1;
}
