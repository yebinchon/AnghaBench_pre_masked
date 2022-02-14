
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct radar_types {int region; } ;
typedef enum nl80211_dfs_regions { ____Placeholder_nl80211_dfs_regions } nl80211_dfs_regions ;


 size_t FUNC_0 (struct radar_types const**) ;
 struct radar_types const** VAR_0 ;

__attribute__((used)) static const struct radar_types *
FUNC_1(enum nl80211_dfs_regions VAR_1)
{
 u32 VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2]->region == VAR_1)
   return VAR_0[VAR_2];
 }
 return ((void*)0);
}
