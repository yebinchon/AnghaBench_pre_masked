
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ice_hw {int dummy; } ;
struct ice_aqc_get_set_rss_keys {int dummy; } ;
struct ice_aqc_get_set_rss_key {int vsi_id; } ;
struct TYPE_2__ {struct ice_aqc_get_set_rss_key get_set_rss_key; } ;
struct ice_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ice_hw*,struct ice_aq_desc*,struct ice_aqc_get_set_rss_keys*,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum
ice_status FUNC_3(struct ice_hw *VAR_6, u16 VAR_7,
        struct ice_aqc_get_set_rss_keys *VAR_8,
        bool VAR_9)
{
 struct ice_aqc_get_set_rss_key *VAR_10;
 u16 VAR_11 = sizeof(*VAR_8);
 struct ice_aq_desc VAR_12;

 VAR_10 = &VAR_12.params.get_set_rss_key;

 if (VAR_9) {
  FUNC_2(&VAR_12, VAR_5);
  VAR_12.flags |= FUNC_0(VAR_3);
 } else {
  FUNC_2(&VAR_12, VAR_4);
 }

 VAR_10->vsi_id = FUNC_0(((VAR_7 <<
      VAR_1) &
     VAR_0) |
           VAR_2);

 return FUNC_1(VAR_6, &VAR_12, VAR_8, VAR_11, ((void*)0));
}
