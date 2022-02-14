
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int vsi_num; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_vsi*) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct ice_vsi*,int ,int ) ;
 int FUNC_3 (struct ice_vsi*) ;
 int FUNC_4 (int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ice_vsi *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1, VAR_0, 0);
 if (VAR_2)
  FUNC_4(VAR_1->netdev, "Failed to stop Tx rings, VSI %d error %d\n",
      VAR_1->vsi_num, VAR_2);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_4(VAR_1->netdev, "Failed to stop Rx rings, VSI %d error %d\n",
      VAR_1->vsi_num, VAR_2);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);

 return VAR_2;
}
