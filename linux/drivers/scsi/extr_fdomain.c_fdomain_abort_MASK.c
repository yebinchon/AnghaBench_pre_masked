
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fdomain {TYPE_3__* cur_cmd; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_5__ {int phase; } ;
struct TYPE_6__ {int result; TYPE_2__ SCp; } ;
struct TYPE_4__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fdomain*,int) ;
 int FUNC_1 (struct fdomain*) ;
 struct fdomain* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4->device->host;
 struct fdomain *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7;

 if (!VAR_6->cur_cmd)
  return VAR_1;

 FUNC_3(VAR_5->host_lock, VAR_7);

 FUNC_1(VAR_6);
 VAR_6->cur_cmd->SCp.phase |= VAR_3;
 VAR_6->cur_cmd->result = VAR_0 << 16;


 FUNC_0(VAR_6, VAR_0 << 16);
 FUNC_4(VAR_5->host_lock, VAR_7);
 return VAR_2;
}
