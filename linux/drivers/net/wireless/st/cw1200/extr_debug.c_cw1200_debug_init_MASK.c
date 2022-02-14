
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cw1200_debug_priv {int debugfs_phy; } ;
struct cw1200_common {TYPE_1__* hw; struct cw1200_debug_priv* debug; } ;
struct TYPE_4__ {int debugfsdir; } ;
struct TYPE_3__ {TYPE_2__* wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct cw1200_common*,int *) ;
 int VAR_4 ;
 struct cw1200_debug_priv* FUNC_2 (int,int ) ;

int FUNC_3(struct cw1200_common *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct cw1200_debug_priv *VAR_7 = FUNC_2(sizeof(struct cw1200_debug_priv),
   VAR_1);
 VAR_5->debug = VAR_7;
 if (!VAR_7)
  return VAR_6;

 VAR_7->debugfs_phy = FUNC_0("cw1200",
         VAR_5->hw->wiphy->debugfsdir);
 FUNC_1("status", 0400, VAR_7->debugfs_phy, VAR_5,
       &VAR_3);
 FUNC_1("counters", 0400, VAR_7->debugfs_phy, VAR_5,
       &VAR_2);
 FUNC_1("wsm_dumps", 0200, VAR_7->debugfs_phy, VAR_5,
       &VAR_4);

 return 0;
}
