
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int flags; } ;
struct vxlan_dev {TYPE_1__ cfg; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_fid {int dummy; } ;
struct mlxsw_sp_bridge_device {TYPE_2__* ops; } ;
struct mlxsw_sp {int bridge; } ;
typedef int __be32 ;
struct TYPE_4__ {int (* fid_vid ) (struct mlxsw_sp_bridge_device*,struct mlxsw_sp_fid const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int *,int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int VAR_3 ;
 struct mlxsw_sp_bridge_device* FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct mlxsw_sp_fid const*,int*) ;
 int FUNC_4 (struct mlxsw_sp_fid const*,int *) ;
 struct net_device* FUNC_5 (struct net_device*) ;
 struct vxlan_dev* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct mlxsw_sp_bridge_device*,struct mlxsw_sp_fid const*) ;

__attribute__((used)) static int
FUNC_10(struct mlxsw_sp *VAR_4,
         const struct mlxsw_sp_fid *VAR_5,
         bool VAR_6,
         struct net_device **VAR_7,
         u16 *VAR_8, __be32 *VAR_9)
{
 struct mlxsw_sp_bridge_device *VAR_10;
 struct net_device *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_5, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_5, VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_0(&VAR_3, VAR_13);
 if (!VAR_12)
  return -VAR_1;
 *VAR_7 = VAR_12;

 if (!FUNC_8(VAR_12))
  return -VAR_1;

 if (VAR_6 && !FUNC_1(VAR_12, VAR_0))
  return -VAR_1;

 if (VAR_6 && FUNC_7(VAR_12)) {
  struct vxlan_dev *VAR_15 = FUNC_6(VAR_12);

  if (!(VAR_15->cfg.flags & VAR_2))
   return -VAR_1;
 }

 VAR_11 = FUNC_5(VAR_12);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_4->bridge, VAR_11);
 if (!VAR_10)
  return -VAR_1;

 *VAR_8 = VAR_10->ops->fid_vid(VAR_10, VAR_5);

 return 0;
}
