
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int data; scalar_t__ len; } ;
struct TYPE_3__ {int utf_monitor; } ;
struct ath10k {int data_lock; TYPE_2__* hw; TYPE_1__ testmode; } ;
struct TYPE_4__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct ath10k*,int ,int *,char*,int ,scalar_t__) ;
 int FUNC_2 (struct ath10k*,char*,...) ;
 struct sk_buff* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

bool FUNC_10(struct ath10k *VAR_6, u32 VAR_7, struct sk_buff *VAR_8)
{
 struct sk_buff *VAR_9;
 bool VAR_10;
 int VAR_11;

 FUNC_0(VAR_6, VAR_0,
     "testmode event wmi cmd_id %d skb %pK skb->len %d\n",
     VAR_7, VAR_8, VAR_8->len);

 FUNC_1(VAR_6, VAR_0, ((void*)0), "", VAR_8->data, VAR_8->len);

 FUNC_8(&VAR_6->data_lock);

 if (!VAR_6->testmode.utf_monitor) {
  VAR_10 = 0;
  goto out;
 }





 VAR_10 = 1;

 VAR_9 = FUNC_3(VAR_6->hw->wiphy,
         2 * sizeof(u32) + VAR_8->len,
         VAR_5);
 if (!VAR_9) {
  FUNC_2(VAR_6,
       "failed to allocate skb for testmode wmi event\n");
  goto out;
 }

 VAR_11 = FUNC_7(VAR_9, VAR_1, VAR_4);
 if (VAR_11) {
  FUNC_2(VAR_6,
       "failed to to put testmode wmi event cmd attribute: %d\n",
       VAR_11);
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_7(VAR_9, VAR_3, VAR_7);
 if (VAR_11) {
  FUNC_2(VAR_6,
       "failed to to put testmode wmi even cmd_id: %d\n",
       VAR_11);
  FUNC_5(VAR_9);
  goto out;
 }

 VAR_11 = FUNC_6(VAR_9, VAR_2, VAR_8->len, VAR_8->data);
 if (VAR_11) {
  FUNC_2(VAR_6,
       "failed to copy skb to testmode wmi event: %d\n",
       VAR_11);
  FUNC_5(VAR_9);
  goto out;
 }

 FUNC_4(VAR_9, VAR_5);

out:
 FUNC_9(&VAR_6->data_lock);

 return VAR_10;
}
