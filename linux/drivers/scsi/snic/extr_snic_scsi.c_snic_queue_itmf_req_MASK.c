
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct snic_req_info {int tm_tag; int tgt_id; } ;
struct snic_host_req {int dummy; } ;
struct TYPE_4__ {int hid; } ;
struct snic {int shost; TYPE_2__ config; } ;
struct scsi_lun {int scsi_lun; } ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_3__ {int lun; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int ,struct scsi_cmnd*,struct snic_req_info*,int ,int,int) ;
 int FUNC_2 (int ,char*,int ,struct scsi_cmnd*,struct snic_req_info*,int ,int) ;
 int FUNC_3 (int ,struct scsi_lun*) ;
 struct snic_req_info* FUNC_4 (struct snic_host_req*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct snic_host_req*,int,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct snic*,struct snic_host_req*,int) ;

__attribute__((used)) static int
FUNC_8(struct snic *VAR_0,
      struct snic_host_req *VAR_1,
      struct scsi_cmnd *VAR_2,
      u32 VAR_3,
      u32 VAR_4)
{
 struct snic_req_info *VAR_5 = FUNC_4(VAR_1);
 struct scsi_lun VAR_6;
 int VAR_7 = FUNC_5(VAR_2) | VAR_5->tm_tag;
 int VAR_8 = 0;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_5->tm_tag);


 FUNC_3(VAR_2->device->lun, &VAR_6);


 FUNC_6(VAR_1,
         VAR_7,
         VAR_0->config.hid,
         (ulong) VAR_5,
         0 ,
         VAR_4,
         VAR_5->tgt_id,
         VAR_6.scsi_lun,
         VAR_3);
 VAR_8 = FUNC_7(VAR_0, VAR_1, sizeof(*VAR_1));
 if (VAR_8)
  FUNC_1(VAR_0->shost,
         "qitmf:Queuing ITMF(%d) Req sc %p, rqi %p, req_id %d tag %d Failed, ret = %d\n",
         VAR_3, VAR_2, VAR_5, VAR_4, FUNC_5(VAR_2), VAR_8);
 else
  FUNC_2(VAR_0->shost,
         "qitmf:Queuing ITMF(%d) Req sc %p, rqi %p, req_id %d, tag %d (req_id)- Success.",
         VAR_3, VAR_2, VAR_5, VAR_4, FUNC_5(VAR_2));

 return VAR_8;
}
