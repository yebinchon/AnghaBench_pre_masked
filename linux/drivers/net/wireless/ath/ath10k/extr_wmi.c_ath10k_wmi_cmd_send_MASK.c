
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_credits_wq; } ;
struct ath10k {int restart_work; int workqueue; int dev_flags; TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ath10k*,char*,scalar_t__) ;
 int FUNC_1 (struct ath10k*,struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ,int) ;

int FUNC_8(struct ath10k *VAR_6, struct sk_buff *VAR_7, u32 VAR_8)
{
 int VAR_9 = -VAR_2;

 FUNC_4();

 if (VAR_8 == VAR_5) {
  FUNC_0(VAR_6, "wmi command %d is not supported by firmware\n",
       VAR_8);
  return VAR_9;
 }

 FUNC_7(VAR_6->wmi.tx_credits_wq, ({

  FUNC_2(VAR_6);

  VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8);

  if (VAR_9 && FUNC_6(VAR_0, &VAR_6->dev_flags))
   VAR_9 = -VAR_3;

  (VAR_9 != -VAR_1);
 }), 3 * VAR_4);

 if (VAR_9)
  FUNC_3(VAR_7);

 if (VAR_9 == -VAR_1) {
  FUNC_0(VAR_6, "wmi command %d timeout, restarting hardware\n",
       VAR_8);
  FUNC_5(VAR_6->workqueue, &VAR_6->restart_work);
 }

 return VAR_9;
}
