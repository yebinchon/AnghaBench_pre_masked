
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {scalar_t__ netdev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct ice_vsi*) ;
 int FUNC_3 (struct ice_vsi*) ;
 int FUNC_4 (struct ice_vsi*) ;

int FUNC_5(struct ice_vsi *VAR_0)
{
 int VAR_1;

 if (VAR_0->netdev) {
  FUNC_0(VAR_0->netdev);

  VAR_1 = FUNC_4(VAR_0);

  if (VAR_1)
   return VAR_1;
 }
 FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  VAR_1 = FUNC_3(VAR_0);

 return VAR_1;
}
