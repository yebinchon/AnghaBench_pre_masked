
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int flags; unsigned long offload_handle; struct net_device* dev; } ;
struct TYPE_8__ {int a6; int a4; } ;
struct TYPE_9__ {int spi; TYPE_3__ daddr; } ;
struct TYPE_6__ {int a6; int a4; } ;
struct TYPE_7__ {int flags; scalar_t__ family; TYPE_1__ saddr; } ;
struct xfrm_state {TYPE_5__ xso; TYPE_4__ id; TYPE_2__ props; } ;
struct net_device {int dummy; } ;
struct mlx5e_priv {int mdev; int ipsec; } ;
struct mlx5e_ipsec_sa_entry {int xfrm; int hw_context; int set_iv_op; int ipsec; struct xfrm_state* x; } ;
struct mlx5_accel_esp_xfrm_attrs {int dummy; } ;
typedef int saddr ;
typedef int daddr ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct mlx5e_ipsec_sa_entry*) ;
 struct mlx5e_ipsec_sa_entry* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int ,int ,int *,int *,int ,int) ;
 int FUNC_6 (int ,struct mlx5_accel_esp_xfrm_attrs*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlx5e_ipsec_sa_entry*,struct mlx5_accel_esp_xfrm_attrs*) ;
 int FUNC_9 (struct mlx5e_ipsec_sa_entry*) ;
 int FUNC_10 (struct mlx5e_ipsec_sa_entry*) ;
 int FUNC_11 (struct mlx5e_ipsec_sa_entry*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct mlx5e_ipsec_sa_entry*) ;
 int FUNC_13 (struct xfrm_state*) ;
 int FUNC_14 (struct net_device*,char*,int) ;
 struct mlx5e_priv* FUNC_15 (struct net_device*) ;

__attribute__((used)) static int FUNC_16(struct xfrm_state *VAR_8)
{
 struct mlx5e_ipsec_sa_entry *VAR_9 = ((void*)0);
 struct net_device *VAR_10 = VAR_8->xso.dev;
 struct mlx5_accel_esp_xfrm_attrs VAR_11;
 struct mlx5e_priv *VAR_12;
 __be32 VAR_13[4] = {0}, VAR_14[4] = {0}, VAR_15;
 bool VAR_16 = 0;
 int VAR_17;

 VAR_12 = FUNC_15(VAR_10);

 VAR_17 = FUNC_13(VAR_8);
 if (VAR_17)
  return VAR_17;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_9->x = VAR_8;
 VAR_9->ipsec = VAR_12->ipsec;




 if (VAR_8->xso.flags & VAR_4) {
  VAR_17 = FUNC_9(VAR_9);
  if (VAR_17) {
   FUNC_14(VAR_10, "Failed adding to SADB_RX: %d\n", VAR_17);
   goto err_entry;
  }
 } else {
  VAR_9->set_iv_op = (VAR_8->props.flags & VAR_5) ?
    VAR_7 : VAR_6;
 }


 FUNC_12(VAR_9);


 FUNC_8(VAR_9, &VAR_11);
 VAR_9->xfrm =
  FUNC_6(VAR_12->mdev, &VAR_11,
        VAR_3);
 if (FUNC_0(VAR_9->xfrm)) {
  VAR_17 = FUNC_1(VAR_9->xfrm);
  goto err_sadb_rx;
 }


 if (VAR_8->props.family == VAR_0) {
  VAR_13[3] = VAR_8->props.saddr.a4;
  VAR_14[3] = VAR_8->id.daddr.a4;
 } else {
  FUNC_4(VAR_13, VAR_8->props.saddr.a6, sizeof(VAR_13));
  FUNC_4(VAR_14, VAR_8->id.daddr.a6, sizeof(VAR_14));
  VAR_16 = 1;
 }
 VAR_15 = VAR_8->id.spi;
 VAR_9->hw_context =
   FUNC_5(VAR_12->mdev,
        VAR_9->xfrm,
        VAR_13, VAR_14, VAR_15,
        VAR_16);
 if (FUNC_0(VAR_9->hw_context)) {
  VAR_17 = FUNC_1(VAR_9->hw_context);
  goto err_xfrm;
 }

 VAR_8->xso.offload_handle = (unsigned long)VAR_9;
 goto out;

err_xfrm:
 FUNC_7(VAR_9->xfrm);
err_sadb_rx:
 if (VAR_8->xso.flags & VAR_4) {
  FUNC_10(VAR_9);
  FUNC_11(VAR_9);
 }
err_entry:
 FUNC_2(VAR_9);
out:
 return VAR_17;
}
