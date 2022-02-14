
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ath10k {int data_lock; int wmi_mgmt_tx_work; int hw; struct sk_buff_head wmi_mgmt_tx_queue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (struct ath10k*,char*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct sk_buff_head *VAR_4 = &VAR_2->wmi_mgmt_tx_queue;
 int VAR_5 = 0;

 FUNC_4(&VAR_2->data_lock);

 if (FUNC_3(VAR_4) == VAR_0) {
  FUNC_1(VAR_2, "wmi mgmt tx queue is full\n");
  VAR_5 = -VAR_1;
  goto unlock;
 }

 FUNC_0(VAR_4, VAR_3);
 FUNC_2(VAR_2->hw, &VAR_2->wmi_mgmt_tx_work);

unlock:
 FUNC_5(&VAR_2->data_lock);

 return VAR_5;
}
