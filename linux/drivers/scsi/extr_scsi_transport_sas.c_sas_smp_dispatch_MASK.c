
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sas_rphy {int dummy; } ;
struct TYPE_5__ {int payload_len; } ;
struct bsg_job {int dev; TYPE_2__ reply_payload; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_6__ {TYPE_1__* f; } ;
struct TYPE_4__ {int (* smp_handler ) (struct bsg_job*,struct Scsi_Host*,struct sas_rphy*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bsg_job*,int ,int ) ;
 struct sas_rphy* FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bsg_job*,struct Scsi_Host*,struct sas_rphy*) ;
 TYPE_3__* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct bsg_job *VAR_1)
{
 struct Scsi_Host *VAR_2 = FUNC_2(VAR_1->dev);
 struct sas_rphy *VAR_3 = ((void*)0);

 if (!FUNC_4(VAR_1->dev))
  VAR_3 = FUNC_1(VAR_1->dev);

 if (!VAR_1->reply_payload.payload_len) {
  FUNC_3(VAR_1->dev, "space for a smp response is missing\n");
  FUNC_0(VAR_1, -VAR_0, 0);
  return 0;
 }

 FUNC_6(VAR_2->transportt)->f->smp_handler(VAR_1, VAR_2, VAR_3);
 return 0;
}
