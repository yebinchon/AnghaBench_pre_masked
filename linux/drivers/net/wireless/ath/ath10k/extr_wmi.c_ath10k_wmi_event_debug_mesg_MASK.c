
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;

int FUNC_2(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, "wmi event debug mesg len %d\n",
     VAR_2->len);

 FUNC_1(VAR_1, VAR_2->data, VAR_2->len);

 return 0;
}
