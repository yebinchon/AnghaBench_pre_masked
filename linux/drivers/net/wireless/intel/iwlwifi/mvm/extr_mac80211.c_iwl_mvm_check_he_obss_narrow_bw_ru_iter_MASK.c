
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct iwl_mvm_he_obss_narrow_bw_ru_data {int tolerated; } ;
struct element {int datalen; int* data; } ;
struct cfg80211_bss {TYPE_1__* ies; } ;
struct TYPE_2__ {int len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct element* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct wiphy *VAR_2,
          struct cfg80211_bss *VAR_3,
          void *VAR_4)
{
 struct iwl_mvm_he_obss_narrow_bw_ru_data *VAR_5 = VAR_4;
 const struct element *VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_3->ies->data,
      VAR_3->ies->len);

 if (!VAR_6 || VAR_6->datalen < 10 ||
     !(VAR_6->data[10] &
       VAR_1)) {
  VAR_5->tolerated = 0;
 }
}
