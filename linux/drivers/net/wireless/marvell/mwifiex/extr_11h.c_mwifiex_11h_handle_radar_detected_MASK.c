
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct mwifiex_radar_det_event {int det_type; int reg_domain; } ;
struct mwifiex_private {TYPE_1__* adapter; int dfs_chandef; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,int *) ;

int FUNC_3(struct mwifiex_private *VAR_3,
          struct sk_buff *VAR_4)
{
 struct mwifiex_radar_det_event *VAR_5;

 VAR_5 = (void *)(VAR_4->data + sizeof(u32));

 FUNC_1(VAR_3->adapter, VAR_2,
      "radar detected; indicating kernel\n");
 if (FUNC_2(VAR_3, &VAR_3->dfs_chandef))
  FUNC_1(VAR_3->adapter, VAR_0,
       "Failed to stop CAC in FW\n");
 FUNC_0(VAR_3->adapter->wiphy, &VAR_3->dfs_chandef,
        VAR_1);
 FUNC_1(VAR_3->adapter, VAR_2, "regdomain: %d\n",
      VAR_5->reg_domain);
 FUNC_1(VAR_3->adapter, VAR_2, "radar detection type: %d\n",
      VAR_5->det_type);

 return 0;
}
