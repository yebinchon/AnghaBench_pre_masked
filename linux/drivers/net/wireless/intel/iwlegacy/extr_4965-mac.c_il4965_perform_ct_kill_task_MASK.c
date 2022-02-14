
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int reg_lock; int hw; scalar_t__ mac80211_registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,int ) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*,int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_9(struct il_priv *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0("Stop all queues\n");

 if (VAR_3->mac80211_registered)
  FUNC_5(VAR_3->hw);

 FUNC_4(VAR_3, VAR_2,
        VAR_1);
 FUNC_2(VAR_3, VAR_0);

 FUNC_7(&VAR_3->reg_lock, VAR_4);
 if (FUNC_6(FUNC_1(VAR_3)))
  FUNC_3(VAR_3);
 FUNC_8(&VAR_3->reg_lock, VAR_4);
}
