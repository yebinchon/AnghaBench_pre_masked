
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int data; } ;
struct nlattr {int dummy; } ;
struct ath10k {scalar_t__ state; int conf_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,void*,int) ;
 int FUNC_1 (struct ath10k*,int ,int *,char*,void*,int) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int) ;
 int FUNC_4 (struct ath10k*,struct sk_buff*,int ) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (struct nlattr*) ;
 int FUNC_9 (struct nlattr*) ;
 int FUNC_10 (struct nlattr*) ;

__attribute__((used)) static int FUNC_11(struct ath10k *VAR_7, struct nlattr *VAR_8[])
{
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11;
 u32 VAR_12;
 void *VAR_13;

 FUNC_6(&VAR_7->conf_mutex);

 if (VAR_7->state != VAR_1) {
  VAR_10 = -VAR_5;
  goto out;
 }

 if (!VAR_8[VAR_2]) {
  VAR_10 = -VAR_4;
  goto out;
 }

 if (!VAR_8[VAR_3]) {
  VAR_10 = -VAR_4;
  goto out;
 }

 VAR_13 = FUNC_8(VAR_8[VAR_2]);
 VAR_11 = FUNC_10(VAR_8[VAR_2]);
 VAR_12 = FUNC_9(VAR_8[VAR_3]);

 FUNC_0(VAR_7, VAR_0,
     "testmode cmd wmi cmd_id %d buf %pK buf_len %d\n",
     VAR_12, VAR_13, VAR_11);

 FUNC_1(VAR_7, VAR_0, ((void*)0), "", VAR_13, VAR_11);

 VAR_9 = FUNC_3(VAR_7, VAR_11);
 if (!VAR_9) {
  VAR_10 = -VAR_6;
  goto out;
 }

 FUNC_5(VAR_9->data, VAR_13, VAR_11);

 VAR_10 = FUNC_4(VAR_7, VAR_9, VAR_12);
 if (VAR_10) {
  FUNC_2(VAR_7, "failed to transmit wmi command (testmode): %d\n",
       VAR_10);
  goto out;
 }

 VAR_10 = 0;

out:
 FUNC_7(&VAR_7->conf_mutex);
 return VAR_10;
}
