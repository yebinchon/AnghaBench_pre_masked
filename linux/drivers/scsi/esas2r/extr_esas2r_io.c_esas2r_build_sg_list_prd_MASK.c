
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct esas2r_target {scalar_t__ target_state; int flags; int inter_block; int block_size; int inter_byte; } ;
struct TYPE_7__ {int sgl_max_cnt; struct atto_physical_region_description* curr; int * chain; scalar_t__ sge_cnt; } ;
struct TYPE_6__ {scalar_t__ curr; } ;
struct TYPE_8__ {TYPE_2__ prd; TYPE_1__ a64; } ;
struct esas2r_sg_context {int length; TYPE_3__ sge; struct esas2r_request* first_req; } ;
struct esas2r_request {int target_id; int vda_req_sz; TYPE_5__* vrq; int flags; } ;
struct esas2r_adapter {struct esas2r_target* targetdb; } ;
struct atto_physical_region_description {int dummy; } ;
struct TYPE_9__ {int* cdb; scalar_t__ function; scalar_t__ iblk_cnt_prd; } ;
struct TYPE_10__ {TYPE_4__ scsi; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int) ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_2 (struct esas2r_adapter*,struct esas2r_sg_context*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;

bool FUNC_4(struct esas2r_adapter *VAR_5,
         struct esas2r_sg_context *VAR_6)
{
 struct esas2r_request *VAR_7 = VAR_6->first_req;
 u32 VAR_8 = VAR_6->length;
 struct esas2r_target *VAR_9 = VAR_5->targetdb + VAR_7->target_id;
 u8 VAR_10 = 0;
 u16 VAR_11;
 struct atto_physical_region_description *VAR_12;
 u8 *VAR_13 = (u8 *)&VAR_7->vrq->scsi.cdb[0];






 if (VAR_7->vrq->scsi.function == VAR_3
     && VAR_9->target_state == VAR_2
     && !(VAR_9->flags & VAR_1)) {
  u32 VAR_14 = 0;

  switch (VAR_7->vrq->scsi.cdb[0]) {
  case 133:
  case 129:
  {
   VAR_14 =
    FUNC_0(FUNC_1(VAR_13[9],
         VAR_13[8]),
       FUNC_1(VAR_13[7],
         VAR_13[6]));
   VAR_10 = 1;
   break;
  }

  case 134:
  case 130:
  case 135:
  case 131:
  {
   VAR_14 =
    FUNC_0(FUNC_1(VAR_13[5],
         VAR_13[4]),
       FUNC_1(VAR_13[3],
         VAR_13[2]));
   VAR_10 = 1;
   break;
  }

  case 132:
  case 128:
  {
   VAR_14 =
    FUNC_0(FUNC_1(VAR_13[3],
         VAR_13[2]),
       FUNC_1(VAR_13[1] & 0x1F,
         0));
   VAR_10 = 1;
   break;
  }

  default:
   break;
  }

  if (VAR_10) {
   u32 VAR_15;

   VAR_7->vrq->scsi.iblk_cnt_prd = 0;


   VAR_15 = VAR_9->inter_block - (VAR_14 & (VAR_9->inter_block -
             1));
   VAR_6->length = VAR_15 * VAR_9->block_size;


   if ((VAR_14 & (VAR_9->inter_block - 1)) == 0)
    VAR_7->flags |= VAR_0;

   if (VAR_6->length > VAR_8)
    VAR_6->length = VAR_8;
  } else {
   VAR_6->length = VAR_8;
  }
 } else {
  VAR_6->length = VAR_8;
 }



 VAR_12 =
  (struct atto_physical_region_description *)VAR_6->sge.a64.curr;

 VAR_6->sge.prd.sgl_max_cnt = VAR_4 /
       sizeof(struct
       atto_physical_region_description);



 while (VAR_8) {
  VAR_6->sge.prd.sge_cnt = 0;
  VAR_6->sge.prd.chain = ((void*)0);
  VAR_6->sge.prd.curr = VAR_12;



  VAR_8 -= VAR_6->length;



  if (FUNC_3(!FUNC_2(VAR_5, VAR_6)))
   return 0;

  VAR_12++;

  if (VAR_10) {
   VAR_7->vrq->scsi.iblk_cnt_prd++;

   if (VAR_8 > VAR_9->inter_byte)
    VAR_6->length = VAR_9->inter_byte;
   else
    VAR_6->length = VAR_8;
  }
 }



 VAR_11 = ((u16)((u8 *)VAR_12 - (u8 *)VAR_7->vrq))
    / sizeof(u32);







 if (VAR_11 > VAR_7->vda_req_sz)
  VAR_7->vda_req_sz = VAR_11;

 return 1;
}
