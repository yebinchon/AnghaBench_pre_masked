
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bValid; } ;
struct tx_ts_record {TYPE_1__ TxPendingBARecord; TYPE_1__ TxAdmittedBARecord; } ;
struct ts_common_info {int Addr; } ;
struct rx_ts_record {TYPE_1__ RxAdmittedBARecord; } ;
struct rtllib_device {int dummy; } ;
typedef enum tr_select { ____Placeholder_tr_select } tr_select ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtllib_device*,struct rx_ts_record*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rtllib_device*,struct tx_ts_record*) ;
 int FUNC_2 (struct rtllib_device*,int ,TYPE_1__*,int,int ) ;

void FUNC_3(struct rtllib_device *VAR_3,
   struct ts_common_info *VAR_4,
   enum tr_select VAR_5)
{
 if (VAR_5 == VAR_2) {
  struct tx_ts_record *VAR_6 =
    (struct tx_ts_record *)VAR_4;

  if (FUNC_1(VAR_3, VAR_6))
   FUNC_2(VAR_3, VAR_4->Addr,
       (VAR_6->TxAdmittedBARecord.bValid) ?
      (&VAR_6->TxAdmittedBARecord) :
     (&VAR_6->TxPendingBARecord),
      VAR_5, VAR_0);
 } else if (VAR_5 == VAR_1) {
  struct rx_ts_record *VAR_7 =
     (struct rx_ts_record *)VAR_4;
  if (FUNC_0(VAR_3, VAR_7))
   FUNC_2(VAR_3, VAR_4->Addr,
       &VAR_7->RxAdmittedBARecord,
       VAR_5, VAR_0);
 }
}
