
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link_state; } ;
struct mlx4_en_priv {TYPE_1__ port_state; int port; int mdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_priv *VAR_1)
{
 if (FUNC_0(VAR_1->mdev, VAR_1->port))
  return -VAR_0;
 if (VAR_1->port_state.link_state == 1)
  return 0;
 else
  return 1;
}
