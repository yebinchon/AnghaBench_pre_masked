
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int num_rxq; } ;


 int FUNC_0 (struct ice_vsi*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ice_vsi *VAR_0, bool VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rxq; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_3)
   break;
 }

 return VAR_3;
}
