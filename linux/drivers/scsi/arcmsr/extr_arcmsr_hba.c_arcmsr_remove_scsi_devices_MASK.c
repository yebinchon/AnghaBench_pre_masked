
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct CommandControlBlock {scalar_t__ startdone; TYPE_1__* pcmd; } ;
struct AdapterControlBlock {int maxFreeCCB; int host; struct CommandControlBlock** pccb_pool; scalar_t__ device_map; } ;
struct TYPE_2__ {int result; int (* scsi_done ) (TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct CommandControlBlock*) ;
 struct scsi_device* FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (struct scsi_device*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct AdapterControlBlock *VAR_4)
{
 char *VAR_5 = (char *)VAR_4->device_map;
 int VAR_6, VAR_7, VAR_8;
 struct scsi_device *VAR_9;
 struct CommandControlBlock *VAR_10;
 char VAR_11;

 for (VAR_8 = 0; VAR_8 < VAR_4->maxFreeCCB; VAR_8++) {
  VAR_10 = VAR_4->pccb_pool[VAR_8];
  if (VAR_10->startdone == VAR_0) {
   VAR_10->pcmd->result = VAR_3 << 16;
   FUNC_0(VAR_10);
   VAR_10->pcmd->scsi_done(VAR_10->pcmd);
  }
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_11 = *VAR_5;
  if (VAR_11) {
   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    if (VAR_11 & 1) {
     VAR_9 = FUNC_1(VAR_4->host,
      0, VAR_6, VAR_7);
     if (VAR_9 != ((void*)0)) {
      FUNC_3(VAR_9);
      FUNC_2(VAR_9);
     }
    }
    VAR_11 >>= 1;
   }
   *VAR_5 = 0;
  }
  VAR_5++;
 }
}
