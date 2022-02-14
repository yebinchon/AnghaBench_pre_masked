
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct zfcp_fsf_req {int dummy; } ;
struct zfcp_adapter {TYPE_2__* dbf; } ;
struct scsi_device {TYPE_1__* host; } ;
struct TYPE_4__ {int scsi; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int const,struct scsi_device*,int *,struct zfcp_fsf_req*) ;

__attribute__((used)) static inline
void FUNC_4(char *VAR_2, struct scsi_device *VAR_3, u8 VAR_4,
       struct zfcp_fsf_req *VAR_5)
{
 struct zfcp_adapter *VAR_6 = (struct zfcp_adapter *)
     VAR_3->host->hostdata[0];
 char VAR_7[VAR_1];
 static int const VAR_8 = 1;

 if (FUNC_2(!FUNC_0(VAR_6->dbf->scsi, VAR_8)))
  return;

 if (VAR_4 == VAR_0)
  FUNC_1(VAR_7, "tr_", 3);
 else
  FUNC_1(VAR_7, "lr_", 3);

 FUNC_1(&VAR_7[3], VAR_2, 4);
 FUNC_3(VAR_7, VAR_8, VAR_3, ((void*)0), VAR_5);
}
