
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wil_sta_info {int status; size_t mid; int addr; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int max_assoc_sta; struct wil6210_vif** vifs; struct wil_sta_info* sta; } ;
struct TYPE_4__ {int mcs; } ;
struct TYPE_3__ {int mcs; } ;
struct station_info {int signal; TYPE_2__ rxrate; TYPE_1__ txrate; } ;
struct seq_file {struct wil6210_priv* private; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct wil6210_priv*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct station_info*) ;
 struct station_info* FUNC_2 (int,int ) ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (struct wil6210_vif*,int,struct station_info*) ;




__attribute__((used)) static int FUNC_6(struct seq_file *VAR_3, void *VAR_4)
{
 struct wil6210_priv *VAR_5 = VAR_3->private;
 struct station_info *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->max_assoc_sta; VAR_7++) {
  struct wil_sta_info *VAR_9 = &VAR_5->sta[VAR_7];
  char *VAR_10 = "unknown";
  struct wil6210_vif *VAR_11;
  u8 VAR_12;

  switch (VAR_9->status) {
  case 128:
   VAR_10 = "unused   ";
   break;
  case 130:
   VAR_10 = "pending  ";
   break;
  case 129:
   VAR_10 = "connected";
   break;
  }
  VAR_12 = (VAR_9->status != 128) ? VAR_9->mid : VAR_2;
  FUNC_3(VAR_3, "[%d][MID %d] %pM %s\n",
      VAR_7, VAR_12, VAR_9->addr, VAR_10);

  if (VAR_9->status != 129)
   continue;

  VAR_11 = (VAR_12 < FUNC_0(VAR_5)) ? VAR_5->vifs[VAR_12] : ((void*)0);
  if (VAR_11) {
   VAR_8 = FUNC_5(VAR_11, VAR_7, VAR_6);
   if (VAR_8)
    goto out;

   FUNC_3(VAR_3, "  Tx_mcs = %d\n", VAR_6->txrate.mcs);
   FUNC_3(VAR_3, "  Rx_mcs = %d\n", VAR_6->rxrate.mcs);
   FUNC_3(VAR_3, "  SQ     = %d\n", VAR_6->signal);
  } else {
   FUNC_4(VAR_3, "  INVALID MID\n");
  }
 }

out:
 FUNC_1(VAR_6);
 return VAR_8;
}
