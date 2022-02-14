
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_14__ {int sync_flag; unsigned char period; } ;
typedef TYPE_3__ nsp32_target ;
struct TYPE_15__ {unsigned char period_num; } ;
typedef TYPE_4__ nsp32_sync_table ;
struct TYPE_16__ {unsigned char* msginbuf; int syncnum; TYPE_4__* synct; TYPE_3__* cur_target; } ;
typedef TYPE_5__ nsp32_hw_data ;
struct TYPE_13__ {TYPE_1__* host; } ;
struct TYPE_12__ {scalar_t__ hostdata; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,unsigned char,unsigned char) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_5__*,TYPE_3__*,unsigned char) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,int,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct scsi_cmnd *VAR_5)
{
 nsp32_hw_data *VAR_6 = (nsp32_hw_data *)VAR_5->device->host->hostdata;
 nsp32_target *VAR_7 = VAR_6->cur_target;
 nsp32_sync_table *VAR_8;
 unsigned char VAR_9 = VAR_6->msginbuf[3];
 unsigned char VAR_10 = VAR_6->msginbuf[4];
 int VAR_11;
 int VAR_12;

 FUNC_2(VAR_1, "enter");

 VAR_8 = VAR_6->synct;
 VAR_12 = VAR_6->syncnum;
 if (VAR_7->sync_flag & VAR_3) {




  FUNC_2(VAR_1, "target responds SDTR");

  VAR_7->sync_flag &= ~VAR_3;
  VAR_7->sync_flag |= VAR_2;




  if (VAR_10 > VAR_4) {




   goto reject;
  }

  if (VAR_10 == VAR_0) {




   goto async;
  }
  if (VAR_9 < VAR_6->synct[0].period_num) {




   goto reject;
  }

  VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_9);

  if (VAR_11 < 0) {




   goto reject;
  }




  FUNC_5(VAR_6, VAR_7, VAR_11, VAR_10);
 } else {

  FUNC_2(VAR_1, "target send SDTR");

  VAR_7->sync_flag |= VAR_3;


  if (VAR_10 > VAR_4) {

   VAR_10 = VAR_4;
  }


  if (VAR_9 < VAR_6->synct[0].period_num) {
   VAR_9 = VAR_6->synct[0].period_num;
  }

  VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_9);

  if (VAR_10 == VAR_0 || VAR_11 < 0) {
   FUNC_4(VAR_6, VAR_7);
   FUNC_1(VAR_5, 0, VAR_0);
  } else {
   FUNC_5(VAR_6, VAR_7, VAR_11, VAR_10);
   FUNC_1(VAR_5, VAR_9, VAR_10);
  }
 }

 VAR_7->period = VAR_9;
 FUNC_2(VAR_1, "exit");
 return;

 reject:




 FUNC_0(VAR_5);

 async:
 FUNC_4(VAR_6, VAR_7);

 VAR_7->period = 0;
 FUNC_2(VAR_1, "exit: set async");
 return;
}
