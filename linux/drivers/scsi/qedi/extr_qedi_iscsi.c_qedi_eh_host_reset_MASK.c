
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct qedi_ctx {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 struct qedi_ctx* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct qedi_ctx*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_0)
{
 struct Scsi_Host *VAR_1 = VAR_0->device->host;
 struct qedi_ctx *VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2);
}
