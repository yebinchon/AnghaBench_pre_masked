
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int qpn; } ;
struct mlx5i_priv {TYPE_1__ qp; } ;
struct mlx5e_priv {struct mlx5i_priv* ppriv; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int ,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,union ib_gid*,int ) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, struct ib_device *VAR_1,
         union ib_gid *VAR_2, u16 VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_2(VAR_0);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 struct mlx5i_priv *VAR_6 = VAR_4->ppriv;
 int VAR_7;

 FUNC_0(VAR_5, "detaching QPN 0x%x, MGID %pI6\n", VAR_6->qp.qpn, VAR_2->raw);

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_6->qp.qpn);
 if (VAR_7)
  FUNC_0(VAR_5, "failed detaching QPN 0x%x, MGID %pI6\n",
         VAR_6->qp.qpn, VAR_2->raw);

 return VAR_7;
}
