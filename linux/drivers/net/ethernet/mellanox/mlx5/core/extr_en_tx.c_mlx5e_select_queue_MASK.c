
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int num_channels; } ;
struct TYPE_7__ {TYPE_2__ params; } ;
struct TYPE_5__ {scalar_t__ trust_state; } ;
struct mlx5e_priv {int** channel_tc2txq; TYPE_4__** txq2sq; TYPE_3__ channels; TYPE_1__ dcbx_dp; } ;
struct TYPE_8__ {int ch_ix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,struct sk_buff*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,int *) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

u16 FUNC_6(struct net_device *VAR_1, struct sk_buff *VAR_2,
         struct net_device *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1, VAR_2, ((void*)0));
 struct mlx5e_priv *VAR_5 = FUNC_3(VAR_1);
 u16 VAR_6;
 int VAR_7 = 0;

 if (!FUNC_1(VAR_1))
  return VAR_4;






  if (FUNC_5(VAR_2))
   VAR_7 = FUNC_4(VAR_2);




 VAR_6 = VAR_5->channels.params.num_channels;
 if (VAR_4 >= VAR_6)
  VAR_4 = VAR_5->txq2sq[VAR_4]->ch_ix;

 return VAR_5->channel_tc2txq[VAR_4][VAR_7];
}
