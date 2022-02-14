
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_vsi*) ;
 int FUNC_1 (struct ice_vsi*) ;
 int FUNC_2 (struct ice_vsi*) ;
 int FUNC_3 (struct ice_vsi*) ;
 int FUNC_4 (struct ice_vsi*) ;
 int FUNC_5 (struct ice_vsi*) ;
 int FUNC_6 (struct ice_vsi*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ice_vsi *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  goto err_setup_tx_ring;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto err_setup_rx_ring;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  goto err_setup_rx_ring;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2)
  goto err_start_rx_ring;

 return VAR_2;

err_start_rx_ring:
 FUNC_1(VAR_1);
err_setup_rx_ring:
 FUNC_6(VAR_1, VAR_0, 0);
err_setup_tx_ring:
 FUNC_2(VAR_1);

 return VAR_2;
}
