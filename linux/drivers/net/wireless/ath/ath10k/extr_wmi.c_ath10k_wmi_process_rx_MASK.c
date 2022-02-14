
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_0(VAR_0, "failed to process wmi rx: %d\n", VAR_2);
}
