
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tx_ts_record {int TxCurSeq; } ;
struct ts_common_info {int dummy; } ;
struct sk_buff {int priority; int data; } ;
struct rtllib_device {int dummy; } ;


 int FUNC_0 (struct rtllib_device*,struct ts_common_info**,int *,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static u16 FUNC_3(struct rtllib_device *VAR_1, struct sk_buff *VAR_2,
          u8 *VAR_3)
{
 u16 VAR_4 = 0;

 if (FUNC_2(VAR_3))
  return 0;
 if (FUNC_1(VAR_2->data)) {
  struct tx_ts_record *VAR_5 = ((void*)0);

  if (!FUNC_0(VAR_1, (struct ts_common_info **)(&VAR_5), VAR_3,
      VAR_2->priority, VAR_0, 1))
   return 0;
  VAR_4 = VAR_5->TxCurSeq;
  VAR_5->TxCurSeq = (VAR_5->TxCurSeq+1)%4096;
  return VAR_4;
 }
 return 0;
}
