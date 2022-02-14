
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int* variable; } ;
struct TYPE_4__ {TYPE_1__ probe_resp; } ;
struct ieee80211_mgmt {int da; TYPE_2__ u; } ;
struct ath6kl_vif {int fw_vif_idx; struct ath6kl* ar; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int ,int ,unsigned int,int ,int*,int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int*,int const*,int const) ;

__attribute__((used)) static int FUNC_5(struct ath6kl_vif *VAR_2,
         const u8 *VAR_3, size_t VAR_4,
         unsigned int VAR_5)
{
 struct ath6kl *VAR_6 = VAR_2->ar;
 const u8 *VAR_7;
 u8 *VAR_8;
 int VAR_9;
 int VAR_10;
 const struct ieee80211_mgmt *VAR_11;

 VAR_11 = (const struct ieee80211_mgmt *) VAR_3;



 VAR_8 = FUNC_3(VAR_4, VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 VAR_9 = 0;

 VAR_7 = VAR_11->u.probe_resp.variable;
 while (VAR_7 + 1 < VAR_3 + VAR_4) {
  if (VAR_7 + 2 + VAR_7[1] > VAR_3 + VAR_4)
   break;
  if (FUNC_0(VAR_7)) {
   FUNC_4(VAR_8 + VAR_9, VAR_7, 2 + VAR_7[1]);
   VAR_9 += 2 + VAR_7[1];
  }
  VAR_7 += 2 + VAR_7[1];
 }

 VAR_10 = FUNC_1(VAR_6->wmi, VAR_2->fw_vif_idx, VAR_5,
       VAR_11->da, VAR_8, VAR_9);
 FUNC_2(VAR_8);
 return VAR_10;
}
