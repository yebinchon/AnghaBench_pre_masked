
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct zfcp_dbf_scsi {int scsi_result; unsigned int scsi_id; struct zfcp_dbf_scsi* scsi_opcode; int host_scribble; void* scsi_lun_64_hi; void* scsi_lun; int fcp_rsp_info; int scsi_allowed; int scsi_retries; int id; int tag; } ;
struct zfcp_dbf {int scsi_lock; int scsi; struct zfcp_dbf_scsi scsi_buf; } ;
struct zfcp_adapter {struct zfcp_dbf* dbf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const,struct zfcp_dbf_scsi*,int) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct zfcp_dbf_scsi*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(char *VAR_4, struct zfcp_adapter *VAR_5,
        unsigned int VAR_6, int VAR_7)
{
 struct zfcp_dbf *VAR_8 = VAR_5->dbf;
 struct zfcp_dbf_scsi *VAR_9 = &VAR_8->scsi_buf;
 unsigned long VAR_10;
 static int const VAR_11 = 1;

 if (FUNC_6(!FUNC_1(VAR_5->dbf->scsi, VAR_11)))
  return;

 FUNC_4(&VAR_8->scsi_lock, VAR_10);
 FUNC_3(VAR_9, 0, sizeof(*VAR_9));

 FUNC_2(VAR_9->tag, VAR_4, VAR_3);
 VAR_9->id = VAR_1;
 VAR_9->scsi_result = VAR_7;
 VAR_9->scsi_retries = ~0;
 VAR_9->scsi_allowed = ~0;
 VAR_9->fcp_rsp_info = ~0;
 VAR_9->scsi_id = VAR_6;
 VAR_9->scsi_lun = (u32)VAR_0;
 VAR_9->scsi_lun_64_hi = (u32)(VAR_0 >> 32);
 VAR_9->host_scribble = ~0;
 FUNC_3(VAR_9->scsi_opcode, 0xff, VAR_2);

 FUNC_0(VAR_8->scsi, VAR_11, VAR_9, sizeof(*VAR_9));
 FUNC_5(&VAR_8->scsi_lock, VAR_10);
}
