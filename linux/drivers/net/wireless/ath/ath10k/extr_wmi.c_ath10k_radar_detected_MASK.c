
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int hw; scalar_t__ dfs_block_radar_events; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_2)
{
 FUNC_1(VAR_2, VAR_0, "dfs radar detected\n");
 FUNC_0(VAR_2, VAR_1);




 if (VAR_2->dfs_block_radar_events)
  FUNC_2(VAR_2, "DFS Radar detected, but ignored as requested\n");
 else
  FUNC_3(VAR_2->hw);
}
