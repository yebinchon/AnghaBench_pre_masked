
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcn36xx {int conf_mutex; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct wcn36xx*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_2, u32 VAR_3)
{
 struct wcn36xx *VAR_4 = VAR_2->priv;
 FUNC_2(VAR_0, "mac set RTS threshold %d\n", VAR_3);

 FUNC_0(&VAR_4->conf_mutex);
 FUNC_3(VAR_4, VAR_1, VAR_3);
 FUNC_1(&VAR_4->conf_mutex);

 return 0;
}
