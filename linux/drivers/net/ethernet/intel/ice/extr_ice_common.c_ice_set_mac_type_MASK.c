
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {scalar_t__ vendor_id; int mac_type; } ;
typedef enum ice_status { ____Placeholder_ice_status } ice_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static enum ice_status FUNC_0(struct ice_hw *VAR_3)
{
 if (VAR_3->vendor_id != VAR_2)
  return VAR_0;

 VAR_3->mac_type = VAR_1;
 return 0;
}
