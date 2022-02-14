
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ba_record {scalar_t__ bValid; } ;
struct tx_ts_record {struct ba_record TxPendingBARecord; struct ba_record TxAdmittedBARecord; } ;
struct rtllib_device {int dummy; } ;


 int FUNC_0 (struct rtllib_device*,struct ba_record*) ;

__attribute__((used)) static u8 FUNC_1(struct rtllib_device *VAR_0, struct tx_ts_record *VAR_1)
{
 struct ba_record *VAR_2 = &VAR_1->TxAdmittedBARecord;
 struct ba_record *VAR_3 = &VAR_1->TxPendingBARecord;
 u8 VAR_4 = 0;

 if (VAR_3->bValid) {
  FUNC_0(VAR_0, VAR_3);
  VAR_4 = 1;
 }

 if (VAR_2->bValid) {
  FUNC_0(VAR_0, VAR_2);
  VAR_4 = 1;
 }
 return VAR_4;
}
