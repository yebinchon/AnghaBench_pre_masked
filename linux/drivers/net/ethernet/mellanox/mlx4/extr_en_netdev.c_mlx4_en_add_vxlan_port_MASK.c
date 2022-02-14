
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udp_tunnel_info {scalar_t__ port; scalar_t__ type; scalar_t__ sa_family; } ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {scalar_t__ vxlan_port; int vxlan_add_task; TYPE_3__* mdev; } ;
typedef scalar_t__ __be16 ;
struct TYPE_6__ {int workqueue; TYPE_2__* dev; } ;
struct TYPE_4__ {scalar_t__ tunnel_offload_mode; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,int ,int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3,
       struct udp_tunnel_info *VAR_4)
{
 struct mlx4_en_priv *VAR_5 = FUNC_1(VAR_3);
 __be16 VAR_6 = VAR_4->port;
 __be16 VAR_7;

 if (VAR_4->type != VAR_2)
  return;

 if (VAR_4->sa_family != VAR_0)
  return;

 if (VAR_5->mdev->dev->caps.tunnel_offload_mode != VAR_1)
  return;

 VAR_7 = VAR_5->vxlan_port;
 if (VAR_7 && VAR_7 != VAR_6) {
  FUNC_0(VAR_5, "vxlan port %d configured, can't add port %d\n",
   FUNC_2(VAR_7), FUNC_2(VAR_6));
  return;
 }

 VAR_5->vxlan_port = VAR_6;
 FUNC_3(VAR_5->mdev->workqueue, &VAR_5->vxlan_add_task);
}
