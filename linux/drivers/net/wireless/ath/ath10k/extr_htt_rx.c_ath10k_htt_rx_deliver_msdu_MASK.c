
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rx_msdus_q; } ;
struct ath10k {TYPE_1__ htt; } ;


 int FUNC_0 (struct ath10k*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_0, int VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;

 while (VAR_1 < VAR_2) {
  if (FUNC_2(&VAR_0->htt.rx_msdus_q))
   break;

  VAR_3 = FUNC_1(&VAR_0->htt.rx_msdus_q);
  if (!VAR_3)
   break;
  FUNC_0(VAR_0, VAR_3);
  VAR_1++;
 }

 return VAR_1;
}
