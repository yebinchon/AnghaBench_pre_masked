
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tsc ;
struct ath6kl_vif {scalar_t__ nw_type; int ndev; struct ath6kl* ar; } ;
struct ath6kl_sta {int mac; } ;
struct ath6kl {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath6kl_vif*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 struct ath6kl_sta* FUNC_2 (struct ath6kl*,int) ;
 int FUNC_3 (int ,int ,int ,int,int*,int ) ;
 int FUNC_4 (int*,int ,int) ;

void FUNC_5(struct ath6kl_vif *VAR_4, u8 VAR_5, bool VAR_6)
{
 struct ath6kl_sta *VAR_7;
 struct ath6kl *VAR_8 = VAR_4->ar;
 u8 VAR_9[6];





 if (VAR_4->nw_type == VAR_0) {
  VAR_7 = FUNC_2(VAR_8, (VAR_5 >> 2));
  if (!VAR_7)
   return;

  FUNC_1(VAR_1,
      "ap tkip mic error received from aid=%d\n", VAR_5);

  FUNC_4(VAR_9, 0, sizeof(VAR_9));
  FUNC_3(VAR_4->ndev, VAR_7->mac,
          VAR_3, VAR_5,
          VAR_9, VAR_2);
 } else {
  FUNC_0(VAR_4, VAR_5, VAR_6);
 }
}
