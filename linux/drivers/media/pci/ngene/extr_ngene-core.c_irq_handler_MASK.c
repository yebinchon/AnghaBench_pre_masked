
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ngene {scalar_t__ icounts; int cmd_done; int* ngenetohost; int EventQueueWriteIndex; scalar_t__ EventQueueReadIndex; int EventQueueOverflowCount; int EventQueueOverflowFlag; TYPE_6__* channel; int event_tasklet; TYPE_2__* EventBuffer; TYPE_2__* EventQueue; int cmd_lock; int cmd_wq; scalar_t__* CmdDoneByte; scalar_t__ BootFirmware; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_12__ {int state_lock; int demux_tasklet; TYPE_5__* nextBuffer; } ;
struct TYPE_9__ {int Flags; } ;
struct TYPE_10__ {TYPE_3__ SR; } ;
struct TYPE_11__ {TYPE_4__ ngeneBuffer; } ;
struct TYPE_8__ {int EventStatus; } ;
struct TYPE_7__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct ngene *VAR_8 = (struct ngene *)VAR_7;
 struct device *VAR_9 = &VAR_8->pci_dev->dev;
 u32 VAR_10 = 0;
 irqreturn_t VAR_11 = VAR_3;
 u32 VAR_12 = VAR_4;
 u8 *VAR_13;

 if (VAR_8->BootFirmware) {
  VAR_10 = FUNC_1(VAR_5);
  if (VAR_10 != VAR_8->icounts) {
   FUNC_2(0, VAR_1);
   VAR_8->cmd_done = 1;
   FUNC_6(&VAR_8->cmd_wq);
   VAR_8->icounts = VAR_10;
   VAR_11 = VAR_2;
  }
  return VAR_11;
 }

 FUNC_2(0, VAR_1);

 FUNC_3(&VAR_8->cmd_lock);
 VAR_13 = VAR_8->CmdDoneByte;
 if (VAR_13 &&
     (*VAR_13 ||
     (VAR_8->ngenetohost[0] == 1 && VAR_8->ngenetohost[1] != 0))) {
  VAR_8->CmdDoneByte = ((void*)0);
  VAR_8->cmd_done = 1;
  FUNC_6(&VAR_8->cmd_wq);
  VAR_11 = VAR_2;
 }
 FUNC_4(&VAR_8->cmd_lock);

 if (VAR_8->EventBuffer->EventStatus & 0x80) {
  u8 VAR_14 =
   (VAR_8->EventQueueWriteIndex + 1) &
   (VAR_0 - 1);
  if (VAR_14 != VAR_8->EventQueueReadIndex) {
   VAR_8->EventQueue[VAR_8->EventQueueWriteIndex] =
    *(VAR_8->EventBuffer);
   VAR_8->EventQueueWriteIndex = VAR_14;
  } else {
   FUNC_0(VAR_9, "event overflow\n");
   VAR_8->EventQueueOverflowCount += 1;
   VAR_8->EventQueueOverflowFlag = 1;
  }
  VAR_8->EventBuffer->EventStatus &= ~0x80;
  FUNC_5(&VAR_8->event_tasklet);
  VAR_11 = VAR_2;
 }

 while (VAR_12 > 0) {
  VAR_12--;
  FUNC_3(&VAR_8->channel[VAR_12].state_lock);

  if (VAR_8->channel[VAR_12].nextBuffer) {
   if ((VAR_8->channel[VAR_12].nextBuffer->
        ngeneBuffer.SR.Flags & 0xC0) == 0x80) {
    VAR_8->channel[VAR_12].nextBuffer->
     ngeneBuffer.SR.Flags |= 0x40;
    FUNC_5(
     &VAR_8->channel[VAR_12].demux_tasklet);
    VAR_11 = VAR_2;
   }
  }
  FUNC_4(&VAR_8->channel[VAR_12].state_lock);
 }


 return VAR_2;
}
