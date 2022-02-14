
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct net_device {scalar_t__ mtu; } ;
struct mlx4_en_priv {scalar_t__ port_up; TYPE_3__* mdev; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_2 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_3 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_4 (struct mlx4_en_priv*) ;
 scalar_t__ FUNC_5 (struct mlx4_en_priv*) ;
 int FUNC_6 (int) ;
 struct mlx4_en_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

void FUNC_11(struct net_device *VAR_5, u32 *VAR_6, u64 *VAR_7)
{
 struct mlx4_en_priv *VAR_8 = FUNC_7(VAR_5);
 int VAR_9, VAR_10;

 FUNC_0(VAR_7, 0, sizeof(u64) * VAR_3);

 if (*VAR_6 & VAR_1) {

  VAR_10 = FUNC_9(VAR_5);

  FUNC_8(VAR_5);



  FUNC_6(200);

  if (VAR_8->mdev->dev->caps.flags &
     VAR_2) {
   VAR_7[3] = FUNC_4(VAR_8);
   if (VAR_8->port_up && VAR_5->mtu >= VAR_4)
    VAR_7[4] = FUNC_3(VAR_8);
  }

  if (VAR_10)
   FUNC_10(VAR_5);

 }
 VAR_7[0] = FUNC_1(VAR_8);
 VAR_7[1] = FUNC_2(VAR_8);
 VAR_7[2] = FUNC_5(VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_7[VAR_9])
   *VAR_6 |= VAR_0;
 }
}
