
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_private {TYPE_1__* pcid; int interrupt_work; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct vnt_private*) ;
 int FUNC_1 (struct vnt_private*) ;
 int FUNC_2 (struct vnt_private*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vnt_private*) ;
 int FUNC_5 (struct vnt_private*) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*) ;
 int FUNC_8 (struct vnt_private*) ;
 int FUNC_9 (int ,struct vnt_private*) ;
 int FUNC_10 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_0)
{
 struct vnt_private *VAR_1 = VAR_0->priv;

 FUNC_10(VAR_0);

 FUNC_3(&VAR_1->interrupt_work);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);

 FUNC_7(VAR_1);
 FUNC_8(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_6(VAR_1);

 FUNC_9(VAR_1->pcid->irq, VAR_1);
}
