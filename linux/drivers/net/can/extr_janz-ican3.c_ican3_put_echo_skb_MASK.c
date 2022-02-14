
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ican3_dev {int echoq; } ;


 struct sk_buff* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ican3_dev *VAR_0, struct sk_buff *VAR_1)
{
 VAR_1 = FUNC_0(VAR_1);
 if (!VAR_1)
  return;


 FUNC_1(&VAR_0->echoq, VAR_1);
}
