
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_req_info {int tm_tag; } ;
struct snic {int dummy; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snic*,struct snic_req_info*,struct scsi_cmnd*,int ) ;

__attribute__((used)) static int
FUNC_1(struct snic *VAR_2,
    struct snic_req_info *VAR_3,
    struct scsi_cmnd *VAR_4)
{

 VAR_3->tm_tag |= VAR_1;

 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0);
}
