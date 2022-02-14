
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int hw; int dev; int debugfs; int idx; } ;
struct genl_info {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,struct genl_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mac80211_hwsim_data *VAR_0,
         const char *VAR_1,
         struct genl_info *VAR_2)
{
 FUNC_3(VAR_0->idx, VAR_1, VAR_2);
 FUNC_0(VAR_0->debugfs);
 FUNC_5(VAR_0->hw);
 FUNC_1(VAR_0->dev);
 FUNC_2(VAR_0->dev);
 FUNC_4(VAR_0->hw);
}
