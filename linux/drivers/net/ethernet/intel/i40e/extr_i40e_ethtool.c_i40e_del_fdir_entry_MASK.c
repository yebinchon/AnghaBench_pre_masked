
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int state; } ;
struct ethtool_rxnfc {int fs; } ;
struct ethtool_rx_flow_spec {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_pf*) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (struct i40e_vsi*,int *,int ,struct ethtool_rxnfc*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct i40e_vsi *VAR_4,
          struct ethtool_rxnfc *VAR_5)
{
 struct ethtool_rx_flow_spec *VAR_6 =
  (struct ethtool_rx_flow_spec *)&VAR_5->fs;
 struct i40e_pf *VAR_7 = VAR_4->back;
 int VAR_8 = 0;

 if (FUNC_3(VAR_3, VAR_7->state) ||
     FUNC_3(VAR_2, VAR_7->state))
  return -VAR_0;

 if (FUNC_3(VAR_1, VAR_7->state))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_4, ((void*)0), VAR_6->location, VAR_5);

 FUNC_1(VAR_7);

 FUNC_0(VAR_7);
 return VAR_8;
}
