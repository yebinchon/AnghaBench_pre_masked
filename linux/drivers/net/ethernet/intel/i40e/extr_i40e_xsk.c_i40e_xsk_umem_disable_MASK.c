
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct net_device {int dummy; } ;
struct i40e_vsi {int af_xdp_zc_qps; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct i40e_vsi*) ;
 int FUNC_2 (struct i40e_vsi*,int ) ;
 int FUNC_3 (struct i40e_vsi*,int ) ;
 int FUNC_4 (struct i40e_vsi*,struct xdp_umem*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 struct xdp_umem* FUNC_6 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_7(struct i40e_vsi *VAR_1, u16 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->netdev;
 struct xdp_umem *VAR_4;
 bool VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(VAR_1->netdev) && FUNC_1(VAR_1);

 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_1, VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_0(VAR_2, VAR_1->af_xdp_zc_qps);
 FUNC_4(VAR_1, VAR_4);

 if (VAR_5) {
  VAR_6 = FUNC_3(VAR_1, VAR_2);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
