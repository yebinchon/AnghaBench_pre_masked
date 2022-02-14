
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xdp_umem {int dummy; } ;
struct ixgbe_adapter {int af_xdp_zc_qps; int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;
 int FUNC_3 (struct ixgbe_adapter*,int ) ;
 int FUNC_4 (struct ixgbe_adapter*,struct xdp_umem*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct xdp_umem* FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ixgbe_adapter *VAR_1, u16 VAR_2)
{
 struct xdp_umem *VAR_3;
 bool VAR_4;

 VAR_3 = FUNC_6(VAR_1->netdev, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_1->netdev) &&
       FUNC_1(VAR_1);

 if (VAR_4)
  FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_2, VAR_1->af_xdp_zc_qps);
 FUNC_4(VAR_1, VAR_3);

 if (VAR_4)
  FUNC_3(VAR_1, VAR_2);

 return 0;
}
