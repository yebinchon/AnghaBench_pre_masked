
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cac_started; } ;
struct mwifiex_private {int dfs_chandef; int netdev; int dfs_cac_work; int adapter; TYPE_1__ wdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (struct mwifiex_private*,int *) ;

void FUNC_4(struct mwifiex_private *VAR_4)
{
 if (VAR_4->wdev.cac_started) {
  if (FUNC_3(VAR_4, &VAR_4->dfs_chandef))
   FUNC_2(VAR_4->adapter, VAR_0,
        "failed to stop CAC in FW\n");
  FUNC_2(VAR_4->adapter, VAR_2,
       "Aborting delayed work for CAC.\n");
  FUNC_0(&VAR_4->dfs_cac_work);
  FUNC_1(VAR_4->netdev, &VAR_4->dfs_chandef,
       VAR_3, VAR_1);
 }
}
