
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_set_rss_keys {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int ,struct ice_aqc_get_set_rss_keys*,int) ;
 int FUNC_1 (struct ice_hw*,int ) ;
 int FUNC_2 (struct ice_hw*,int ) ;

enum ice_status
FUNC_3(struct ice_hw *VAR_1, u16 VAR_2,
     struct ice_aqc_get_set_rss_keys *VAR_3)
{
 if (!FUNC_2(VAR_1, VAR_2) || !VAR_3)
  return VAR_0;

 return FUNC_0(VAR_1, FUNC_1(VAR_1, VAR_2),
     VAR_3, 0);
}
