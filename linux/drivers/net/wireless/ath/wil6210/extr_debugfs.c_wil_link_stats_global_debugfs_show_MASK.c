
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stats; int tsf; int ready; } ;
struct wil6210_priv {TYPE_1__ fw_stats_global; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct wil6210_priv*,struct seq_file*,int *) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct wil6210_priv *VAR_2 = VAR_0->private;

 if (!VAR_2->fw_stats_global.ready)
  return 0;

 FUNC_0(VAR_0, "TSF %lld\n", VAR_2->fw_stats_global.tsf);
 FUNC_1(VAR_2, VAR_0, &VAR_2->fw_stats_global.stats);

 return 0;
}
