
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fstioc_info {scalar_t__ type; scalar_t__ state; int index; int valid; int cableStatus; void* alarmIndicationSignal; void* receiveRemoteAlarm; void* lossOfSignal; void* lineAttenuation; void* crcErrorCount; void* codeViolationCount; void* framingErrorCount; void* receiveBufferDelay; void* idleCode; void* losThreshold; void* startingSlot; void* rxBufferMode; void* txBufferMode; void* range; void* loopMode; void* equalizer; void* lineBuildOut; void* coding; void* interface; void* structure; void* framing; void* clockSource; void* lineSpeed; void* smcFirmwareVersion; void* cardMode; void* clockStatus; void* v24OpSts; void* v24IpSts; void* invertClock; void* internalClock; void* lineInterface; int debug; int proto; int nports; int kernelVersion; } ;
struct fst_port_info {int index; } ;
struct fst_card_info {scalar_t__ type; scalar_t__ state; scalar_t__ family; int nports; } ;
struct TYPE_6__ {int invertClock; int lineSpeed; int internalClock; int lineInterface; } ;
struct TYPE_5__ {int idleCode; int enableIdleCode; int losThreshold; int startingSlot; int rxBufferMode; int txBufferMode; int range; int loopMode; int equalizer; int lineBuildOut; int coding; int interface; int structure; int framing; int clocking; int dataRate; } ;
struct TYPE_4__ {int alarmIndicationSignal; int receiveRemoteAlarm; int lossOfSignal; int lineAttenuation; int crcErrorCount; int codeViolationCount; int framingErrorCount; int receiveBufferDelay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct fst_card_info*,int ) ;
 void* FUNC_1 (struct fst_card_info*,int ) ;
 void* FUNC_2 (struct fst_card_info*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct fstioc_info*,int ,int) ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 TYPE_1__ VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;

__attribute__((used)) static void
FUNC_4(struct fst_card_info *VAR_18, struct fst_port_info *VAR_19,
   struct fstioc_info *VAR_20)
{
 int VAR_21;

 FUNC_3(VAR_20, 0, sizeof (struct fstioc_info));

 VAR_21 = VAR_19->index;
 VAR_20->kernelVersion = VAR_7;
 VAR_20->nports = VAR_18->nports;
 VAR_20->type = VAR_18->type;
 VAR_20->state = VAR_18->state;
 VAR_20->proto = VAR_4;
 VAR_20->index = VAR_21;







 VAR_20->valid = ((VAR_18->state == VAR_5) ? VAR_0 : VAR_1)



     ;

 VAR_20->lineInterface = FUNC_2(VAR_18, VAR_12[VAR_21].lineInterface);
 VAR_20->internalClock = FUNC_0(VAR_18, VAR_12[VAR_21].internalClock);
 VAR_20->lineSpeed = FUNC_1(VAR_18, VAR_12[VAR_21].lineSpeed);
 VAR_20->invertClock = FUNC_0(VAR_18, VAR_12[VAR_21].invertClock);
 VAR_20->v24IpSts = FUNC_1(VAR_18, VAR_16[VAR_21]);
 VAR_20->v24OpSts = FUNC_1(VAR_18, VAR_17[VAR_21]);
 VAR_20->clockStatus = FUNC_2(VAR_18, VAR_10[VAR_21]);
 VAR_20->cableStatus = FUNC_2(VAR_18, VAR_8);
 VAR_20->cardMode = FUNC_2(VAR_18, VAR_9);
 VAR_20->smcFirmwareVersion = FUNC_1(VAR_18, VAR_13);






 if (VAR_18->family == VAR_3) {
  if (VAR_19->index == 0) {



   VAR_20->cableStatus = VAR_20->cableStatus & 1;
  } else {



   VAR_20->cableStatus = VAR_20->cableStatus >> 1;
   VAR_20->cableStatus = VAR_20->cableStatus & 1;
  }
 }



 if (VAR_18->type == VAR_6) {
  VAR_20->lineSpeed = FUNC_1(VAR_18, VAR_14.dataRate);
  VAR_20->clockSource = FUNC_0(VAR_18, VAR_14.clocking);
  VAR_20->framing = FUNC_0(VAR_18, VAR_14.framing);
  VAR_20->structure = FUNC_0(VAR_18, VAR_14.structure);
  VAR_20->interface = FUNC_0(VAR_18, VAR_14.interface);
  VAR_20->coding = FUNC_0(VAR_18, VAR_14.coding);
  VAR_20->lineBuildOut = FUNC_0(VAR_18, VAR_14.lineBuildOut);
  VAR_20->equalizer = FUNC_0(VAR_18, VAR_14.equalizer);
  VAR_20->loopMode = FUNC_0(VAR_18, VAR_14.loopMode);
  VAR_20->range = FUNC_0(VAR_18, VAR_14.range);
  VAR_20->txBufferMode = FUNC_0(VAR_18, VAR_14.txBufferMode);
  VAR_20->rxBufferMode = FUNC_0(VAR_18, VAR_14.rxBufferMode);
  VAR_20->startingSlot = FUNC_0(VAR_18, VAR_14.startingSlot);
  VAR_20->losThreshold = FUNC_0(VAR_18, VAR_14.losThreshold);
  if (FUNC_0(VAR_18, VAR_14.enableIdleCode))
   VAR_20->idleCode = FUNC_0(VAR_18, VAR_14.idleCode);
  else
   VAR_20->idleCode = 0;
  VAR_20->receiveBufferDelay =
      FUNC_1(VAR_18, VAR_15.receiveBufferDelay);
  VAR_20->framingErrorCount =
      FUNC_1(VAR_18, VAR_15.framingErrorCount);
  VAR_20->codeViolationCount =
      FUNC_1(VAR_18, VAR_15.codeViolationCount);
  VAR_20->crcErrorCount = FUNC_1(VAR_18, VAR_15.crcErrorCount);
  VAR_20->lineAttenuation = FUNC_1(VAR_18, VAR_15.lineAttenuation);
  VAR_20->lossOfSignal = FUNC_0(VAR_18, VAR_15.lossOfSignal);
  VAR_20->receiveRemoteAlarm =
      FUNC_0(VAR_18, VAR_15.receiveRemoteAlarm);
  VAR_20->alarmIndicationSignal =
      FUNC_0(VAR_18, VAR_15.alarmIndicationSignal);
 }
}
