
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;





 int FUNC_0 (struct Scsi_Host*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct scsi_cmnd *VAR_2, void (*VAR_3)(struct scsi_cmnd *))
{
 struct Scsi_Host *VAR_4 = VAR_2->device->host;
 int VAR_5, VAR_6 = 0;

 FUNC_0(VAR_4, VAR_1);
 VAR_2->scsi_done = VAR_3;

 VAR_5 = FUNC_1(VAR_2);

 switch (VAR_5) {
 case 128:
  break;
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
 default:
  FUNC_2(VAR_2);
  break;
 }

 return VAR_6;
}
