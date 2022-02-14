
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int name; } ;
struct TYPE_2__ {int qpn; } ;
struct mlx5i_priv {int qkey; TYPE_1__ qp; } ;
struct mlx5e_priv {struct mlx5i_priv* ppriv; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,union ib_gid*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int ,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,char*,int ,int ) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ib_device *VAR_1,
         union ib_gid *VAR_2, u16 VAR_3, int VAR_4,
         u32 VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_3(VAR_0);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 struct mlx5i_priv *VAR_8 = VAR_6->ppriv;
 int VAR_9;

 FUNC_1(VAR_7, "attaching QPN 0x%x, MGID %pI6\n", VAR_8->qp.qpn, VAR_2->raw);
 VAR_9 = FUNC_0(VAR_7, VAR_2, VAR_8->qp.qpn);
 if (VAR_9)
  FUNC_2(VAR_7, "failed attaching QPN 0x%x, MGID %pI6\n",
          VAR_8->qp.qpn, VAR_2->raw);

 if (VAR_4) {
  FUNC_1(VAR_7, "%s setting qkey 0x%x\n",
         VAR_0->name, VAR_5);
  VAR_8->qkey = VAR_5;
 }

 return VAR_9;
}
