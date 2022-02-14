
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; } ;
struct TYPE_13__ {int opcode; int cmd; } ;
typedef TYPE_4__ megacmd_t ;
struct TYPE_14__ {int lock; TYPE_1__* dev; } ;
typedef TYPE_5__ adapter_t ;
struct TYPE_12__ {TYPE_2__* host; } ;
struct TYPE_11__ {scalar_t__ hostdata; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,struct scsi_cmnd*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct scsi_cmnd *VAR_3)
{
 adapter_t *VAR_4;
 megacmd_t VAR_5;
 int VAR_6;

 VAR_4 = (adapter_t *)VAR_3->device->host->hostdata;
 FUNC_5(&VAR_4->lock);

 VAR_6 = FUNC_4(VAR_4, VAR_3, VAR_2);





 FUNC_3(VAR_4);
 FUNC_6(&VAR_4->lock);

 return VAR_6;
}
