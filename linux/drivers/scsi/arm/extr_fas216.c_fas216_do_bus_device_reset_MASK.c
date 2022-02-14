
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; int SCp; } ;
struct message {int fifo; } ;
struct TYPE_15__ {int msgs; int SCp; int phase; } ;
struct TYPE_13__ {int select_timeout; } ;
struct TYPE_12__ {int transfer_type; } ;
struct TYPE_16__ {TYPE_4__ scsi; TYPE_2__ ifcfg; TYPE_1__ dma; struct scsi_cmnd* SCpnt; } ;
struct TYPE_14__ {int id; } ;
typedef TYPE_5__ FAS216_Info ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int ,char*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 struct message* FUNC_8 (int *,int ) ;

__attribute__((used)) static void FUNC_9(FAS216_Info *VAR_11,
           struct scsi_cmnd *VAR_12)
{
 struct message *VAR_13;




 VAR_11->scsi.phase = VAR_6;
 VAR_11->scsi.SCp = VAR_12->SCp;
 VAR_11->SCpnt = VAR_12;
 VAR_11->dma.transfer_type = VAR_10;

 FUNC_2(VAR_11, VAR_5, "sending bus device reset");

 FUNC_7(&VAR_11->scsi.msgs);
 FUNC_6(&VAR_11->scsi.msgs, 1, VAR_0);


 FUNC_3(VAR_11, 0);
 FUNC_1(VAR_11, VAR_2 | VAR_4);


 FUNC_1(VAR_11, VAR_1);


 FUNC_5(VAR_11, VAR_8, FUNC_0(VAR_12->device->id));
 FUNC_5(VAR_11, VAR_9, VAR_11->ifcfg.select_timeout);


 FUNC_4(VAR_11, VAR_12->device->id);

 VAR_13 = FUNC_8(&VAR_11->scsi.msgs, 0);

 FUNC_5(VAR_11, VAR_7, VAR_0);
 VAR_13->fifo = 1;

 FUNC_1(VAR_11, VAR_3);
}
