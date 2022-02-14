
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct aggr_info {int rx_amsdu_freeq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct aggr_info *VAR_1)
{
 struct sk_buff *VAR_2 = ((void*)0);

 if (FUNC_2(&VAR_1->rx_amsdu_freeq) <
     (VAR_0 >> 2))
  FUNC_0(&VAR_1->rx_amsdu_freeq,
         VAR_0);

 VAR_2 = FUNC_1(&VAR_1->rx_amsdu_freeq);

 return VAR_2;
}
