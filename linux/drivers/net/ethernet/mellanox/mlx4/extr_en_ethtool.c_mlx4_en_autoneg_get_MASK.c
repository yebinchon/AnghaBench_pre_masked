
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct mlx4_en_priv {TYPE_3__ port_state; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_4__ {int flags2; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_1(struct net_device *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_0(VAR_4);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;
 u32 VAR_7 = VAR_0;

 if ((VAR_6->dev->caps.flags2 & VAR_2) &&
     (VAR_5->port_state.flags & VAR_3))
  VAR_7 = VAR_1;

 return VAR_7;
}
