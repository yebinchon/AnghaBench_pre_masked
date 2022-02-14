
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_req_info {int tm_tag; } ;
struct snic {int shost; } ;
struct scsi_cmnd {int dummy; } ;


 int FUNC_0 (int ,char*,struct scsi_cmnd*,struct snic_req_info*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct snic*,struct snic_req_info*,struct scsi_cmnd*,int) ;

__attribute__((used)) static int
FUNC_3(struct snic *VAR_1,
       struct snic_req_info *VAR_2,
       struct scsi_cmnd *VAR_3,
       int VAR_4)
{
 FUNC_0(VAR_1->shost, "q_abtreq: sc %p, rqi %p, tag %x, tmf %d\n",
        VAR_3, VAR_2, FUNC_1(VAR_3), VAR_4);


 VAR_2->tm_tag |= VAR_0;

 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
