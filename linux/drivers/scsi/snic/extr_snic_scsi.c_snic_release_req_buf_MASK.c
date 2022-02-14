
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snic_req_info {int dr_req; int abort_req; int req; } ;
struct TYPE_5__ {scalar_t__ sense_addr; } ;
struct TYPE_6__ {TYPE_2__ icmnd; } ;
struct snic_host_req {TYPE_3__ u; } ;
struct snic {TYPE_1__* pdev; int shost; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,struct scsi_cmnd*,int ,struct snic_req_info*,int ,int ,int ,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 struct snic_host_req* FUNC_6 (struct snic_req_info*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct snic*,struct snic_req_info*) ;

__attribute__((used)) static void
FUNC_11(struct snic *VAR_9,
     struct snic_req_info *VAR_10,
     struct scsi_cmnd *VAR_11)
{
 struct snic_host_req *VAR_12 = FUNC_6(VAR_10);


 FUNC_2(!((FUNC_1(VAR_11) == VAR_5) ||
        (FUNC_1(VAR_11) == VAR_4) ||
        (FUNC_0(VAR_11) & VAR_2) ||
        (FUNC_0(VAR_11) & VAR_7) ||
        (FUNC_0(VAR_11) & VAR_3) ||
        (FUNC_0(VAR_11) & VAR_8) ||
        (FUNC_1(VAR_11) == VAR_6)));

 FUNC_3(VAR_9->shost,
        "Rel_req:sc %p:tag %x:rqi %p:ioreq %p:abt %p:dr %p: state %s:flags 0x%llx\n",
        VAR_11, FUNC_8(VAR_11), VAR_10, VAR_10->req, VAR_10->abort_req,
        VAR_10->dr_req, FUNC_9(FUNC_1(VAR_11)),
        FUNC_0(VAR_11));

 if (VAR_12->u.icmnd.sense_addr)
  FUNC_4(&VAR_9->pdev->dev,
     FUNC_5(VAR_12->u.icmnd.sense_addr),
     VAR_1,
     VAR_0);

 FUNC_7(VAR_11);

 FUNC_10(VAR_9, VAR_10);
}
