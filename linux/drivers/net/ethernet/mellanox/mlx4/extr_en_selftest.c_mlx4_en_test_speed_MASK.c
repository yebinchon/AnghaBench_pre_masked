
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ link_speed; } ;
struct mlx4_en_priv {TYPE_1__ port_state; int port; int mdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_priv *VAR_7)
{

 if (FUNC_0(VAR_7->mdev, VAR_7->port))
  return -VAR_0;


 if (VAR_7->port_state.link_speed != VAR_1 &&
     VAR_7->port_state.link_speed != VAR_2 &&
     VAR_7->port_state.link_speed != VAR_3 &&
     VAR_7->port_state.link_speed != VAR_4 &&
     VAR_7->port_state.link_speed != VAR_5 &&
     VAR_7->port_state.link_speed != VAR_6)
  return VAR_7->port_state.link_speed;

 return 0;
}
