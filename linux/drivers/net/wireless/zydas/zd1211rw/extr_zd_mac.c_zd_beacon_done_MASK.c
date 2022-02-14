
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int last_update; } ;
struct zd_mac {int lock; TYPE_1__ beacon; int hw; TYPE_2__* vif; int flags; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ,TYPE_2__*) ;
 struct sk_buff* FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,struct sk_buff*,int) ;
 int FUNC_7 (int ,int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct zd_mac *VAR_3)
{
 struct sk_buff *VAR_4, *VAR_5;

 if (!FUNC_5(VAR_1, &VAR_3->flags))
  return;
 if (!VAR_3->vif || VAR_3->vif->type != VAR_0)
  return;




 while (!FUNC_2(VAR_3->hw, 0)) {
  VAR_4 = FUNC_1(VAR_3->hw, VAR_3->vif);
  if (!VAR_4)
   break;
  FUNC_7(VAR_3->hw, ((void*)0), VAR_4);
 }




 VAR_5 = FUNC_0(VAR_3->hw, VAR_3->vif);
 if (VAR_5)
  FUNC_6(VAR_3->hw, VAR_5, 1);

 FUNC_3(&VAR_3->lock);
 VAR_3->beacon.last_update = VAR_2;
 FUNC_4(&VAR_3->lock);
}
