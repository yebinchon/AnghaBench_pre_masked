
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ath10k_ce_pipe {struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct ath10k_ce_pipe*,void**) ;
 int FUNC_4 (struct ath10k*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct ath10k_ce_pipe *VAR_0)
{
 struct ath10k *VAR_1 = VAR_0->ar;
 struct sk_buff_head VAR_2;
 struct sk_buff *VAR_3;

 FUNC_1(&VAR_2);
 while (FUNC_3(VAR_0, (void **)&VAR_3) == 0) {

  if (VAR_3 == ((void*)0))
   continue;

  FUNC_2(&VAR_2, VAR_3);
 }

 while ((VAR_3 = FUNC_0(&VAR_2)))
  FUNC_4(VAR_1, VAR_3);
}
