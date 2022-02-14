
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct ibmvfc_host {int host; int dev; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct ibmvfc_host* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct scsi_cmnd *VAR_2)
{
 int VAR_3;
 struct ibmvfc_host *VAR_4 = FUNC_2(VAR_2->device->host);

 FUNC_0(VAR_4->dev, "Resetting connection due to error recovery\n");
 VAR_3 = FUNC_1(VAR_4->host);

 return VAR_3 ? VAR_0 : VAR_1;
}
