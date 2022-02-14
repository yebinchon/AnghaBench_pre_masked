
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int phase; scalar_t__ sent_command; scalar_t__ have_data_in; scalar_t__ Message; scalar_t__ Status; } ;
struct scsi_cmnd {TYPE_2__* device; TYPE_1__ SCp; } ;
struct fdomain {scalar_t__ base; struct scsi_cmnd* cur_cmd; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_6__ {int this_id; } ;
struct TYPE_5__ {TYPE_3__* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct fdomain*) ;
 int VAR_8 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*,int ) ;
 struct fdomain* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct Scsi_Host *VAR_9, struct scsi_cmnd *VAR_10)
{
 struct fdomain *VAR_11 = FUNC_5(VAR_10->device->host);
 unsigned long VAR_12;

 VAR_10->SCp.Status = 0;
 VAR_10->SCp.Message = 0;
 VAR_10->SCp.have_data_in = 0;
 VAR_10->SCp.sent_command = 0;
 VAR_10->SCp.phase = VAR_8;
 FUNC_4(VAR_10, FUNC_3(VAR_10));

 FUNC_6(VAR_9->host_lock, VAR_12);

 VAR_11->cur_cmd = VAR_10;

 FUNC_1(VAR_11);


 FUNC_2(0, VAR_11->base + VAR_6);
 FUNC_2(0, VAR_11->base + VAR_5);

 FUNC_2(FUNC_0(VAR_10->device->host->this_id), VAR_11->base + VAR_7);
 FUNC_2(VAR_2, VAR_11->base + VAR_6);

 FUNC_2(VAR_0 | VAR_1 | VAR_3, VAR_11->base + VAR_4);

 FUNC_7(VAR_9->host_lock, VAR_12);

 return 0;
}
