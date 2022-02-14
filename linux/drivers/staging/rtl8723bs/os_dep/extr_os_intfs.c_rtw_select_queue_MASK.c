
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {size_t priority; } ;
struct net_device {int dummy; } ;
struct mlme_priv {scalar_t__ acm_mask; } ;
struct adapter {struct mlme_priv mlmepriv; } ;


 size_t FUNC_0 (scalar_t__,size_t) ;
 int * VAR_0 ;
 size_t FUNC_1 (struct sk_buff*) ;
 struct adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static u16 FUNC_3(struct net_device *VAR_1, struct sk_buff *VAR_2,
       struct net_device *VAR_3)
{
 struct adapter *VAR_4 = FUNC_2(VAR_1);
 struct mlme_priv *VAR_5 = &VAR_4->mlmepriv;

 VAR_2->priority = FUNC_1(VAR_2);

 if (VAR_5->acm_mask != 0)
  VAR_2->priority = FUNC_0(VAR_5->acm_mask, VAR_2->priority);

 return VAR_0[VAR_2->priority];
}
