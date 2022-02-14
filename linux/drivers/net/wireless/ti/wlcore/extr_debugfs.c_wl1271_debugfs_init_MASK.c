
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int fw_stats_update; int fw_stats; int fw_stats_len; } ;
struct wl1271 {TYPE_3__ stats; TYPE_2__* hw; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {TYPE_1__* wiphy; } ;
struct TYPE_4__ {int debugfsdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct wl1271*,struct dentry*) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (struct wl1271*,struct dentry*) ;

int FUNC_6(struct wl1271 *VAR_4)
{
 int VAR_5;
 struct dentry *VAR_6;

 VAR_6 = FUNC_0(VAR_2,
         VAR_4->hw->wiphy->debugfsdir);

 VAR_4->stats.fw_stats = FUNC_2(VAR_4->stats.fw_stats_len, VAR_1);
 if (!VAR_4->stats.fw_stats) {
  VAR_5 = -VAR_0;
  goto out_remove;
 }

 VAR_4->stats.fw_stats_update = VAR_3;

 FUNC_3(VAR_4, VAR_6);

 VAR_5 = FUNC_5(VAR_4, VAR_6);
 if (VAR_5 < 0)
  goto out_exit;

 goto out;

out_exit:
 FUNC_4(VAR_4);

out_remove:
 FUNC_1(VAR_6);

out:
 return VAR_5;
}
