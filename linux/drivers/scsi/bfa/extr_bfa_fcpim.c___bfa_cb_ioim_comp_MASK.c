
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct bfi_ioim_rsp_s {scalar_t__ io_status; scalar_t__ scsi_status; scalar_t__ resid_flags; int residue; scalar_t__ sns_len; } ;
struct bfa_ioim_s {int dio; TYPE_3__* bfa; int itnim; int iotag; TYPE_2__* fcpim; TYPE_1__* iosp; } ;
typedef int s32 ;
typedef int bfa_boolean_t ;
struct TYPE_6__ {int bfad; } ;
struct TYPE_5__ {int fcp; } ;
struct TYPE_4__ {int comp_rspmsg; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int ) ;
 int FUNC_3 (struct bfa_ioim_s*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(void *VAR_7, bfa_boolean_t VAR_8)
{
 struct bfa_ioim_s *VAR_9 = VAR_7;
 struct bfi_ioim_rsp_s *VAR_10;
 u8 *VAR_11 = ((void*)0);
 u8 VAR_12 = 0;
 s32 VAR_13 = 0;

 if (!VAR_8) {
  FUNC_3(VAR_9, VAR_0);
  return;
 }

 VAR_10 = (struct bfi_ioim_rsp_s *) &VAR_9->iosp->comp_rspmsg;
 if (VAR_10->io_status == VAR_1) {



  if ((VAR_10->scsi_status == VAR_4) &&
     VAR_10->sns_len) {
   VAR_12 = VAR_10->sns_len;
   VAR_11 = FUNC_0(VAR_9->fcpim->fcp,
      VAR_9->iotag);
  }




  if (VAR_10->resid_flags == VAR_3) {
   VAR_13 = FUNC_1(VAR_10->residue);
   FUNC_4(VAR_9->itnim, VAR_6);
  }
  if (VAR_10->resid_flags == VAR_2) {
   VAR_13 = FUNC_1(VAR_10->residue);
   VAR_13 = -VAR_13;
   FUNC_4(VAR_9->itnim, VAR_5);
  }
 }

 FUNC_2(VAR_9->bfa->bfad, VAR_9->dio, VAR_10->io_status,
     VAR_10->scsi_status, VAR_12, VAR_11, VAR_13);
}
