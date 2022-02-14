
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_10__ {int aborts; } ;
struct TYPE_11__ {TYPE_3__ stats; } ;
struct TYPE_9__ {TYPE_1__* host; } ;
struct TYPE_8__ {scalar_t__ hostdata; } ;
typedef TYPE_4__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,struct scsi_cmnd*) ;
 int FUNC_3 () ;



 int FUNC_4 (int ,struct scsi_cmnd*,char*,...) ;

int FUNC_5(struct scsi_cmnd *VAR_3)
{
 FAS216_Info *VAR_4 = (FAS216_Info *)VAR_3->device->host->hostdata;
 int VAR_5 = VAR_0;

 FUNC_0(VAR_4);

 VAR_4->stats.aborts += 1;

 FUNC_4(VAR_1, VAR_3, "abort command\n");

 FUNC_3();
 FUNC_1(VAR_4);

 switch (FUNC_2(VAR_4, VAR_3)) {





 case 128:
  FUNC_4(VAR_1, VAR_3, "abort %p success\n", VAR_3);
  VAR_5 = VAR_2;
  break;






 case 129:




 default:
 case 130:
  FUNC_4(VAR_1, VAR_3, "abort %p failed\n", VAR_3);
  break;
 }

 return VAR_5;
}
