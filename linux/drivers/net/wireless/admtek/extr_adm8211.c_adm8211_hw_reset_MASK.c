
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {scalar_t__ transceiver_type; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_11)
{
 struct adm8211_priv *VAR_12 = VAR_11->priv;
 u32 VAR_13, VAR_14;
 int VAR_15 = 100;



 FUNC_1(VAR_9, 0);


 VAR_14 = FUNC_0(VAR_10);
 FUNC_1(VAR_10, VAR_1);

 while ((FUNC_0(VAR_10) & VAR_1) && VAR_15--)
  FUNC_3(50);

 if (VAR_15 <= 0)
  return -VAR_8;

 FUNC_1(VAR_10, VAR_14);

 if (VAR_12->pdev->revision == VAR_2 &&
     (VAR_12->transceiver_type == VAR_5 ||
      VAR_12->transceiver_type == VAR_4)) {
  VAR_13 = FUNC_0(VAR_7);
  VAR_13 |= (1 << 4) | (1 << 5);
  FUNC_1(VAR_7, VAR_13);
 } else if (VAR_12->pdev->revision == VAR_3) {
  VAR_13 = FUNC_0(VAR_7);
  VAR_13 &= ~((1 << 4) | (1 << 5));
  FUNC_1(VAR_7, VAR_13);
 }

 FUNC_1(VAR_9, 0);

 VAR_13 = FUNC_0(VAR_6);
 VAR_13 |= VAR_0;
 FUNC_1(VAR_6, VAR_13);

 FUNC_2(VAR_11);

 return 0;
}
