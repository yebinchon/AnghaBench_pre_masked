
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int pflags; } ;
struct TYPE_4__ {TYPE_3__ params; } ;
struct mlx5e_priv {TYPE_1__ channels; } ;
typedef enum mlx5e_priv_flag { ____Placeholder_mlx5e_priv_flag } mlx5e_priv_flag ;
struct TYPE_5__ {int (* handler ) (struct net_device*,int) ;int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct net_device*,char*,char*,int ,int) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
         u32 VAR_2,
         enum mlx5e_priv_flag VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_3(VAR_1);
 bool VAR_5 = !!(VAR_2 & FUNC_0(VAR_3));
 u32 VAR_6 = VAR_2 ^ VAR_4->channels.params.pflags;
 int VAR_7;

 if (!(VAR_6 & FUNC_0(VAR_3)))
  return 0;

 VAR_7 = VAR_0[VAR_3].handler(VAR_1, VAR_5);
 if (VAR_7) {
  FUNC_2(VAR_1, "%s private flag '%s' failed err %d\n",
      VAR_5 ? "Enable" : "Disable", VAR_0[VAR_3].name, VAR_7);
  return VAR_7;
 }

 FUNC_1(&VAR_4->channels.params, VAR_3, VAR_5);
 return 0;
}
