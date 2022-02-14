
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ath10k_ce_pipe {struct ath10k* ar; } ;
struct ath10k {int dev; } ;
struct TYPE_2__ {int paddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ath10k_ce_pipe*,void**) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ath10k_ce_pipe *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->ar;
 struct sk_buff *VAR_3;

 while (FUNC_1(VAR_1, (void **)&VAR_3) == 0) {
  if (!VAR_3)
   continue;

  FUNC_3(VAR_2->dev, FUNC_0(VAR_3)->paddr,
     VAR_3->len, VAR_0);
  FUNC_2(VAR_2, VAR_3);
 }
}
