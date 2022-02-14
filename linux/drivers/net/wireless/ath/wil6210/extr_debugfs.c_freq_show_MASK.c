
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct wireless_dev {TYPE_3__ chandef; } ;
struct wil6210_priv {TYPE_1__* main_ndev; } ;
struct seq_file {struct wil6210_priv* private; } ;
struct TYPE_5__ {int center_freq; } ;
struct TYPE_4__ {struct wireless_dev* ieee80211_ptr; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct wil6210_priv *VAR_2 = VAR_0->private;
 struct wireless_dev *VAR_3 = VAR_2->main_ndev->ieee80211_ptr;
 u32 VAR_4 = VAR_3->chandef.chan ? VAR_3->chandef.chan->center_freq : 0;

 FUNC_0(VAR_0, "Freq = %d\n", VAR_4);

 return 0;
}
