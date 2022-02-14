
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int nx_reset_timeout; TYPE_1__* host; int hardware_lock; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_2__ {scalar_t__ can_queue; } ;


 scalar_t__ FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*,scalar_t__) ;
 struct scsi_cmnd* FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (scalar_t__,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct scsi_qla_host *VAR_6)
{
 uint32_t VAR_7 = 0;
 unsigned long VAR_8;
 struct scsi_cmnd *VAR_9;
 unsigned long VAR_10;
 uint32_t VAR_11;

 if (FUNC_2(VAR_6))
  VAR_11 = VAR_4;
 else
  VAR_11 = VAR_6->nx_reset_timeout / 2;

 VAR_10 = VAR_5 + (VAR_11 * VAR_0);

 FUNC_1(FUNC_4(VAR_1, VAR_6,
     "Wait up to %u seconds for cmds to complete\n",
     VAR_11));

 while (!FUNC_8(VAR_5, VAR_10)) {
  FUNC_6(&VAR_6->hardware_lock, VAR_8);

  for (VAR_7 = 0; VAR_7 < VAR_6->host->can_queue; VAR_7++) {
   VAR_9 = FUNC_5(VAR_6->host, VAR_7);






   if (VAR_9 != ((void*)0) && FUNC_0(VAR_9))
    break;
  }
  FUNC_7(&VAR_6->hardware_lock, VAR_8);


  if (VAR_7 == VAR_6->host->can_queue)
   return VAR_3;

  FUNC_3(1000);
 }


 return VAR_2;
}
