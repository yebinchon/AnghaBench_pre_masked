
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u16 ;
struct scsiio_tracker {unsigned int smid; int chain_list; struct scsi_cmnd* scmd; int cb_idx; } ;
struct scsi_cmnd {TYPE_1__* request; } ;
struct MPT3SAS_ADAPTER {int dummy; } ;
struct TYPE_2__ {unsigned int tag; } ;


 int FUNC_0 (int *) ;
 struct scsiio_tracker* FUNC_1 (struct scsi_cmnd*) ;

u16
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0, u8 VAR_1,
 struct scsi_cmnd *VAR_2)
{
 struct scsiio_tracker *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = VAR_2->request->tag;
 u16 VAR_5;

 VAR_5 = VAR_4 + 1;
 VAR_3->cb_idx = VAR_1;
 VAR_3->smid = VAR_5;
 VAR_3->scmd = VAR_2;
 FUNC_0(&VAR_3->chain_list);
 return VAR_5;
}
