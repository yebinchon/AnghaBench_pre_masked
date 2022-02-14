
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csio_scsi_qset {int iq_idx; int eq_idx; int intr_idx; } ;
struct csio_scsi_cpu_info {int max_cpus; } ;
struct csio_mgmtm {int iq_idx; int eq_idx; } ;
struct csio_hw {int flags; scalar_t__ intr_mode; int num_pports; struct csio_scsi_qset** sqset; struct csio_scsi_cpu_info* scsi_cpu_info; TYPE_1__* pport; int fwevt_iq_idx; int intr_iq_idx; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,char*,int,...) ;
 int FUNC_1 (struct csio_hw*) ;
 struct csio_mgmtm* FUNC_2 (struct csio_hw*) ;
 int FUNC_3 (struct csio_hw*,int) ;
 int FUNC_4 (struct csio_hw*,int *,int ,int ,int,int *) ;
 int FUNC_5 (struct csio_hw*,int *,int ,int ,int,int,int *) ;

__attribute__((used)) static int
FUNC_6(struct csio_hw *VAR_3)
{
 int VAR_4, VAR_5;
 struct csio_mgmtm *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;
 struct csio_scsi_cpu_info *VAR_8;

 if (VAR_3->flags & VAR_0)
  return 0;

 if (VAR_3->intr_mode != VAR_1) {
  VAR_7 = FUNC_5(VAR_3, ((void*)0), VAR_3->intr_iq_idx,
     0, VAR_3->pport[0].portid, 0, ((void*)0));
  if (VAR_7 != 0) {
   FUNC_0(VAR_3, " Forward Interrupt IQ failed!: %d\n", VAR_7);
   return VAR_7;
  }
 }


 VAR_7 = FUNC_5(VAR_3, ((void*)0), VAR_3->fwevt_iq_idx,
          FUNC_1(VAR_3),
          VAR_3->pport[0].portid, 1, ((void*)0));
 if (VAR_7 != 0) {
  FUNC_0(VAR_3, "FW event IQ config failed!: %d\n", VAR_7);
  return VAR_7;
 }


 VAR_7 = FUNC_4(VAR_3, ((void*)0), VAR_6->eq_idx,
   VAR_6->iq_idx, VAR_3->pport[0].portid, ((void*)0));

 if (VAR_7 != 0) {
  FUNC_0(VAR_3, "Mgmt EQ create failed!: %d\n", VAR_7);
  goto err;
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->num_pports; VAR_4++) {
  VAR_8 = &VAR_3->scsi_cpu_info[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_8->max_cpus; VAR_5++) {
   struct csio_scsi_qset *VAR_9 = &VAR_3->sqset[VAR_4][VAR_5];

   VAR_7 = FUNC_5(VAR_3, ((void*)0), VAR_9->iq_idx,
            VAR_9->intr_idx, VAR_4, 0, ((void*)0));
   if (VAR_7 != 0) {
    FUNC_0(VAR_3,
       "SCSI module IQ config failed [%d][%d]:%d\n",
       VAR_4, VAR_5, VAR_7);
    goto err;
   }
   VAR_7 = FUNC_4(VAR_3, ((void*)0), VAR_9->eq_idx,
            VAR_9->iq_idx, VAR_4, ((void*)0));
   if (VAR_7 != 0) {
    FUNC_0(VAR_3,
       "SCSI module EQ config failed [%d][%d]:%d\n",
       VAR_4, VAR_5, VAR_7);
    goto err;
   }
  }
 }

 VAR_3->flags |= VAR_0;
 return 0;
err:
 FUNC_3(VAR_3, 1);
 return -VAR_2;
}
