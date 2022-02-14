
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ice_hw {int dummy; } ;
struct TYPE_3__ {int rx_cnt; } ;
struct TYPE_4__ {TYPE_1__ clear_pxe; } ;
struct ice_aq_desc {TYPE_2__ params; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,struct ice_aq_desc*,int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ice_aq_desc*,int ) ;

__attribute__((used)) static enum ice_status FUNC_2(struct ice_hw *VAR_2)
{
 struct ice_aq_desc VAR_3;

 FUNC_1(&VAR_3, VAR_1);
 VAR_3.params.clear_pxe.rx_cnt = VAR_0;

 return FUNC_0(VAR_2, &VAR_3, ((void*)0), 0, ((void*)0));
}
