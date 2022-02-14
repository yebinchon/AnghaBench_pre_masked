
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_link_stats_basic {int dummy; } ;
struct wil6210_vif {scalar_t__ mid; int fw_stats_tsf; int fw_stats_ready; } ;
struct wil6210_priv {int max_assoc_sta; TYPE_1__* sta; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {scalar_t__ status; scalar_t__ mid; struct wmi_link_stats_basic fw_stats_basic; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;
 struct wil6210_priv* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_vif*,struct seq_file*,struct wmi_link_stats_basic*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct wil6210_vif *VAR_1,
         struct seq_file *VAR_2)
{
 struct wil6210_priv *VAR_3 = FUNC_2(VAR_1);
 struct wmi_link_stats_basic *VAR_4;
 int VAR_5;

 if (!VAR_1->fw_stats_ready) {
  FUNC_1(VAR_2, "no statistics\n");
  return;
 }

 FUNC_0(VAR_2, "TSF %lld\n", VAR_1->fw_stats_tsf);
 for (VAR_5 = 0; VAR_5 < VAR_3->max_assoc_sta; VAR_5++) {
  if (VAR_3->sta[VAR_5].status == VAR_0)
   continue;
  if (VAR_3->sta[VAR_5].mid != VAR_1->mid)
   continue;

  VAR_4 = &VAR_3->sta[VAR_5].fw_stats_basic;
  FUNC_3(VAR_1, VAR_2, VAR_4);
 }
}
