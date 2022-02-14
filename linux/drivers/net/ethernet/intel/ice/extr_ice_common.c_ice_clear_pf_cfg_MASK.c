
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int dummy; } ;
struct ice_aq_desc {int dummy; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

enum ice_status FUNC_2(struct ice_hw *VAR_1)
{
 struct ice_aq_desc VAR_2;

 FUNC_1(&VAR_2, VAR_0);

 return FUNC_0(VAR_1, &VAR_2, ((void*)0), 0, ((void*)0));
}
