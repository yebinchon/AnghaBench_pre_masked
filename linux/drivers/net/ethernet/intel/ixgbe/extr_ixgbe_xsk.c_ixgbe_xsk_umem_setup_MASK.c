
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct ixgbe_adapter {int dummy; } ;


 int FUNC_0 (struct ixgbe_adapter*,int ) ;
 int FUNC_1 (struct ixgbe_adapter*,struct xdp_umem*,int ) ;

int FUNC_2(struct ixgbe_adapter *VAR_0, struct xdp_umem *VAR_1,
    u16 VAR_2)
{
 return VAR_1 ? FUNC_1(VAR_0, VAR_1, VAR_2) :
  FUNC_0(VAR_0, VAR_2);
}
