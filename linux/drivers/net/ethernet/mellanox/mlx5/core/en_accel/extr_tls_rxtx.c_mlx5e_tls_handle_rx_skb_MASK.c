
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int decrypted; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int syndrome; } ;
struct TYPE_5__ {TYPE_4__ recv; } ;
struct mlx5e_tls_metadata {TYPE_1__ content; } ;
struct mlx5e_priv {TYPE_3__* tls; } ;
struct TYPE_6__ {int rx_tls_auth_fail; int rx_tls_resync_request; } ;
struct TYPE_7__ {TYPE_2__ sw_stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*,struct sk_buff*,struct mlx5e_tls_metadata*) ;

void FUNC_5(struct net_device *VAR_2, struct sk_buff *VAR_3,
        u32 *VAR_4)
{
 struct mlx5e_tls_metadata *VAR_5;
 struct mlx5e_priv *VAR_6;

 if (!FUNC_1(VAR_3))
  return;


 VAR_5 = (struct mlx5e_tls_metadata *)(VAR_3->data + VAR_0);
 switch (VAR_5->content.recv.syndrome) {
 case 129:
  VAR_3->decrypted = 1;
  break;
 case 128:
  FUNC_4(VAR_2, VAR_3, VAR_5);
  VAR_6 = FUNC_2(VAR_2);
  FUNC_0(&VAR_6->tls->sw_stats.rx_tls_resync_request);
  break;
 case 130:

  VAR_6 = FUNC_2(VAR_2);
  FUNC_0(&VAR_6->tls->sw_stats.rx_tls_auth_fail);
  break;
 default:

  return;
 }

 FUNC_3(VAR_3);
 *VAR_4 -= VAR_1;
}
