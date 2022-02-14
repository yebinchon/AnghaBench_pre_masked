
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_req_info {int dummy; } ;
struct snic_host_req {int dummy; } ;
struct snic {int ios_inflight; int shost; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,struct scsi_cmnd*,struct snic_req_info*,int,int,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,struct scsi_cmnd*,int,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct snic_host_req* FUNC_4 (struct snic*,struct snic_req_info*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 struct snic_host_req* FUNC_6 (struct snic*,struct snic_req_info*) ;
 scalar_t__ FUNC_7 (struct snic*) ;
 int FUNC_8 (struct snic*,struct snic_host_req*,struct scsi_cmnd*,int,int) ;

__attribute__((used)) static int
FUNC_9(struct snic *VAR_5,
      struct snic_req_info *VAR_6,
      struct scsi_cmnd *VAR_7,
      int VAR_8)
{
 struct snic_host_req *VAR_9 = ((void*)0);
 int VAR_10 = 0, VAR_11 = FUNC_5(VAR_7);
 int VAR_12 = 0;

 if (FUNC_7(VAR_5) == VAR_3)
  return -VAR_0;

 FUNC_3(&VAR_5->ios_inflight);

 FUNC_1(VAR_5->shost,
        "issu_tmreq: Task mgmt req %d. rqi %p w/ tag %x\n",
        VAR_8, VAR_6, VAR_11);


 if (VAR_8 == VAR_4) {
  VAR_9 = FUNC_6(VAR_5, VAR_6);
  VAR_10 = VAR_2;
 } else {
  VAR_9 = FUNC_4(VAR_5, VAR_6);
  VAR_10 = VAR_11;
 }

 if (!VAR_9) {
  VAR_12 = -VAR_1;

  goto tmreq_err;
 }

 VAR_12 = FUNC_8(VAR_5, VAR_9, VAR_7, VAR_8, VAR_10);
 if (VAR_12)
  goto tmreq_err;

 VAR_12 = 0;

tmreq_err:
 if (VAR_12) {
  FUNC_0(VAR_5->shost,
         "issu_tmreq: Queing ITMF(%d) Req, sc %p rqi %p req_id %d tag %x fails err = %d\n",
         VAR_8, VAR_7, VAR_6, VAR_10, VAR_11, VAR_12);
 } else {
  FUNC_1(VAR_5->shost,
         "issu_tmreq: Queuing ITMF(%d) Req, sc %p, rqi %p, req_id %d tag %x - Success.\n",
         VAR_8, VAR_7, VAR_6, VAR_10, VAR_11);
 }

 FUNC_2(&VAR_5->ios_inflight);

 return VAR_12;
}
