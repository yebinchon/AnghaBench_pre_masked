
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fdomain {int base; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct fdomain* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct scsi_cmnd *VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->device->host;
 struct fdomain *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_2(VAR_2->host_lock, VAR_4);
 FUNC_0(VAR_3->base);
 FUNC_3(VAR_2->host_lock, VAR_4);
 return VAR_0;
}
