
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54p_priv {int boot_comp; int tasklet; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;
typedef int irqreturn_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_7, void *VAR_8)
{
 struct ieee80211_hw *VAR_9 = VAR_8;
 struct p54p_priv *VAR_10 = VAR_9->priv;
 __le32 VAR_11;

 VAR_11 = FUNC_0(VAR_6);
 if (FUNC_5(VAR_11 == FUNC_3(0xFFFFFFFF))) {
  goto out;
 }
 FUNC_1(VAR_4, VAR_11);

 VAR_11 &= FUNC_0(VAR_5);

 if (VAR_11 & FUNC_3(VAR_3))
  FUNC_4(&VAR_10->tasklet);
 else if (VAR_11 & FUNC_3(VAR_2))
  FUNC_2(&VAR_10->boot_comp);

out:
 return VAR_11 ? VAR_0 : VAR_1;
}
