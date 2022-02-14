
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct iwl_ssid_ie {scalar_t__ len; int ssid; void* id; } ;
struct iwl_mvm_scan_params {int n_match_sets; int n_ssids; TYPE_3__* ssids; TYPE_2__* match_sets; } ;
struct TYPE_6__ {int ssid; scalar_t__ ssid_len; } ;
struct TYPE_4__ {int ssid; scalar_t__ ssid_len; } ;
struct TYPE_5__ {TYPE_1__ ssid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ,scalar_t__,struct iwl_ssid_ie*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm_scan_params *VAR_2,
     struct iwl_ssid_ie *VAR_3,
     u32 *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7;






 for (VAR_5 = 0, VAR_6 = VAR_2->n_match_sets - 1;
      VAR_6 >= 0 && VAR_5 < VAR_0;
      VAR_5++, VAR_6--) {

  if (!VAR_2->match_sets[VAR_6].ssid.ssid_len)
   continue;
  VAR_3[VAR_5].id = VAR_1;
  VAR_3[VAR_5].len = VAR_2->match_sets[VAR_6].ssid.ssid_len;
  FUNC_2(VAR_3[VAR_5].ssid, VAR_2->match_sets[VAR_6].ssid.ssid,
         VAR_3[VAR_5].len);
 }


 *VAR_4 = 0;
 for (VAR_6 = VAR_2->n_ssids - 1;
      VAR_6 >= 0 && VAR_5 < VAR_0;
      VAR_5++, VAR_6--) {
  VAR_7 = FUNC_1(VAR_2->ssids[VAR_6].ssid,
           VAR_2->ssids[VAR_6].ssid_len,
           VAR_3);
  if (VAR_7 < 0) {
   VAR_3[VAR_5].id = VAR_1;
   VAR_3[VAR_5].len = VAR_2->ssids[VAR_6].ssid_len;
   FUNC_2(VAR_3[VAR_5].ssid, VAR_2->ssids[VAR_6].ssid,
          VAR_3[VAR_5].len);
   *VAR_4 |= FUNC_0(VAR_5);
  } else {
   *VAR_4 |= FUNC_0(VAR_7);
  }
 }
}
