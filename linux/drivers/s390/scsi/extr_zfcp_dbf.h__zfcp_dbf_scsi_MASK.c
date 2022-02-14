
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {int dummy; } ;
struct zfcp_adapter {TYPE_2__* dbf; } ;
struct scsi_cmnd {TYPE_3__* device; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {int scsi; } ;
struct TYPE_4__ {scalar_t__* hostdata; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,TYPE_3__*,struct scsi_cmnd*,struct zfcp_fsf_req*) ;

__attribute__((used)) static inline
void FUNC_2(char *VAR_0, int VAR_1, struct scsi_cmnd *VAR_2,
     struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_adapter *VAR_4 = (struct zfcp_adapter *)
     VAR_2->device->host->hostdata[0];

 if (FUNC_0(VAR_4->dbf->scsi, VAR_1))
  FUNC_1(VAR_0, VAR_1, VAR_2->device, VAR_2, VAR_3);
}
