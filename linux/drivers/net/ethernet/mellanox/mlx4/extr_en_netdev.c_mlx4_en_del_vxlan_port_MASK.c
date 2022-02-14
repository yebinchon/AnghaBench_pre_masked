
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udp_tunnel_info {scalar_t__ port; scalar_t__ type; scalar_t__ sa_family; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ vxlan_port; int vxlan_del_task; TYPE_1__* mdev; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {scalar_t__ tunnel_offload_mode; } ;
struct TYPE_5__ {TYPE_3__ caps; } ;
struct TYPE_4__ {int workqueue; TYPE_2__* dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4,
       struct udp_tunnel_info *VAR_5)
{
 struct mlx4_en_priv *VAR_6 = FUNC_1(VAR_4);
 __be16 VAR_7 = VAR_5->port;
 __be16 VAR_8;

 if (VAR_5->type != VAR_3)
  return;

 if (VAR_5->sa_family != VAR_0)
  return;

 if (VAR_6->mdev->dev->caps.tunnel_offload_mode != VAR_2)
  return;

 VAR_8 = VAR_6->vxlan_port;
 if (VAR_8 != VAR_7) {
  FUNC_0(VAR_1, VAR_6, "vxlan port %d isn't configured, ignoring\n", FUNC_2(VAR_7));
  return;
 }

 FUNC_3(VAR_6->mdev->workqueue, &VAR_6->vxlan_del_task);
}
