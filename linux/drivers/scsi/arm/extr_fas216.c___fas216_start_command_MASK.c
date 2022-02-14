
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int * cmnd; TYPE_3__* device; } ;
struct message {int length; int fifo; int * msg; } ;
struct TYPE_15__ {int msgs; int phase; } ;
struct TYPE_12__ {int select_timeout; } ;
struct TYPE_16__ {TYPE_4__ scsi; TYPE_2__* host; TYPE_1__ ifcfg; } ;
struct TYPE_14__ {scalar_t__ id; } ;
struct TYPE_13__ {int host_no; } ;
typedef TYPE_5__ FAS216_Info ;


 int FUNC_0 (scalar_t__) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 struct message* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(FAS216_Info *VAR_12, struct scsi_cmnd *VAR_13)
{
 int VAR_14;


 FUNC_3(VAR_12, 0);
 FUNC_1(VAR_12, VAR_2 | VAR_6);


 FUNC_1(VAR_12, VAR_1);


 FUNC_5(VAR_12, VAR_10, FUNC_0(VAR_13->device->id));
 FUNC_5(VAR_12, VAR_11, VAR_12->ifcfg.select_timeout);


 FUNC_4(VAR_12, VAR_13->device->id);

 VAR_14 = FUNC_7(&VAR_12->scsi.msgs);
 if (VAR_14 == 1 || VAR_14 == 3) {



  struct message *VAR_15;
  int VAR_16 = 0, VAR_17;

  VAR_12->scsi.phase = VAR_7;


  while ((VAR_15 = FUNC_6(&VAR_12->scsi.msgs, VAR_16++)) != ((void*)0)) {
   for (VAR_17 = 0; VAR_17 < VAR_15->length; VAR_17++)
    FUNC_5(VAR_12, VAR_9, VAR_15->msg[VAR_17]);
   VAR_15->fifo = VAR_14 - (FUNC_2(VAR_12, VAR_8) & VAR_0);
  }


  for (VAR_17 = 0; VAR_17 < VAR_13->cmd_len; VAR_17++)
   FUNC_5(VAR_12, VAR_9, VAR_13->cmnd[VAR_17]);

  if (VAR_14 == 1)
   FUNC_1(VAR_12, VAR_3);
  else
   FUNC_1(VAR_12, VAR_4);
 } else {





  struct message *VAR_18 = FUNC_6(&VAR_12->scsi.msgs, 0);

  FUNC_5(VAR_12, VAR_9, VAR_18->msg[0]);
  VAR_18->fifo = 1;

  FUNC_1(VAR_12, VAR_5);
 }
}
