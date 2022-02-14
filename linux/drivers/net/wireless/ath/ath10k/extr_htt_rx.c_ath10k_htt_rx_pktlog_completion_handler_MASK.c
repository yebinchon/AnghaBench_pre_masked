
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ath10k*,int ,int ) ;

void FUNC_2(struct ath10k *VAR_0,
          struct sk_buff *VAR_1)
{
 FUNC_1(VAR_0, VAR_1->data, VAR_1->len);
 FUNC_0(VAR_1);
}
