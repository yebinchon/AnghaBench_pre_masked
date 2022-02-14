
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int ucTSID; } ;
struct TYPE_11__ {TYPE_1__ field; } ;
struct TYPE_12__ {TYPE_2__ TSInfo; } ;
struct TYPE_13__ {TYPE_3__ f; } ;
struct TYPE_18__ {int Addr; TYPE_4__ TSpec; } ;
struct TYPE_16__ {int SeqNum; } ;
struct TYPE_17__ {TYPE_7__ field; } ;
struct TYPE_14__ {int BufferSize; int TID; int BAPolicy; scalar_t__ AMSDU_Support; } ;
struct TYPE_15__ {TYPE_5__ field; } ;
struct ba_record {TYPE_8__ BaStartSeqCtrl; scalar_t__ BaTimeoutValue; TYPE_6__ BaParamSet; int DialogToken; scalar_t__ bValid; } ;
struct tx_ts_record {int TxCurSeq; TYPE_9__ TsCommonInfo; struct ba_record TxPendingBARecord; } ;
struct rtllib_device {int dummy; } ;


 int FUNC_0 (struct rtllib_device*,struct ba_record*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rtllib_device*,struct ba_record*) ;
 int FUNC_2 (struct rtllib_device*,int ,struct ba_record*) ;

void FUNC_3(struct rtllib_device *VAR_1, struct tx_ts_record *VAR_2,
   u8 VAR_3, u8 VAR_4)
{
 struct ba_record *VAR_5 = &VAR_2->TxPendingBARecord;

 if (VAR_5->bValid && !VAR_4)
  return;

 FUNC_1(VAR_1, VAR_5);

 VAR_5->DialogToken++;
 VAR_5->BaParamSet.field.AMSDU_Support = 0;
 VAR_5->BaParamSet.field.BAPolicy = VAR_3;
 VAR_5->BaParamSet.field.TID =
    VAR_2->TsCommonInfo.TSpec.f.TSInfo.field.ucTSID;
 VAR_5->BaParamSet.field.BufferSize = 32;
 VAR_5->BaTimeoutValue = 0;
 VAR_5->BaStartSeqCtrl.field.SeqNum = (VAR_2->TxCurSeq + 3) % 4096;

 FUNC_0(VAR_1, VAR_5, VAR_0);

 FUNC_2(VAR_1, VAR_2->TsCommonInfo.Addr, VAR_5);
}
