
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_pattern_detector {scalar_t__ (* set_dfs_domain ) (struct dfs_pattern_detector*,int) ;struct ath_common* common; int channel_detectors; } ;
struct ath_common {int dummy; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 struct dfs_pattern_detector VAR_3 ;
 int FUNC_3 (struct dfs_pattern_detector*) ;
 struct dfs_pattern_detector* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct dfs_pattern_detector*,int) ;

struct dfs_pattern_detector *
FUNC_6(struct ath_common *VAR_4,
     enum nl80211_dfs_regions VAR_5)
{
 struct dfs_pattern_detector *VAR_6;

 if (!FUNC_1(VAR_0))
  return ((void*)0);

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 *VAR_6 = VAR_3;
 FUNC_0(&VAR_6->channel_detectors);

 VAR_6->common = VAR_4;
 if (VAR_6->set_dfs_domain(VAR_6, VAR_5))
  return VAR_6;

 FUNC_2(VAR_4, VAR_1,"Could not set DFS domain to %d", VAR_5);
 FUNC_3(VAR_6);
 return ((void*)0);
}
