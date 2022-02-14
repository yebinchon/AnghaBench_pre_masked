
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct i40e_vsi {int dummy; } ;


 int FUNC_0 (struct i40e_vsi*,int ) ;
 int FUNC_1 (struct i40e_vsi*,struct xdp_umem*,int ) ;

int FUNC_2(struct i40e_vsi *VAR_0, struct xdp_umem *VAR_1,
   u16 VAR_2)
{
 return VAR_1 ? FUNC_1(VAR_0, VAR_1, VAR_2) :
  FUNC_0(VAR_0, VAR_2);
}
