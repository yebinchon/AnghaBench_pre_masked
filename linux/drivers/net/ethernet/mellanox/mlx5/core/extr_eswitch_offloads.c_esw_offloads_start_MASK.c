
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct TYPE_7__ {scalar_t__ inline_mode; } ;
struct mlx5_eswitch {scalar_t__ mode; TYPE_3__ offloads; TYPE_4__* dev; } ;
struct TYPE_5__ {int num_vfs; } ;
struct TYPE_6__ {TYPE_1__ sriov; } ;
struct TYPE_8__ {TYPE_2__ priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct mlx5_eswitch*) ;
 int FUNC_3 (struct mlx5_eswitch*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct mlx5_eswitch*,scalar_t__*) ;
 int FUNC_5 (struct mlx5_eswitch*,int ) ;

__attribute__((used)) static int FUNC_6(struct mlx5_eswitch *VAR_5,
         struct netlink_ext_ack *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_5->mode != VAR_1 &&
     !FUNC_1(VAR_5->dev)) {
  FUNC_0(VAR_6,
       "Can't set offloads mode, SRIOV legacy not enabled");
  return -VAR_0;
 }

 FUNC_2(VAR_5);
 FUNC_5(VAR_5, VAR_5->dev->priv.sriov.num_vfs);
 VAR_7 = FUNC_3(VAR_5, VAR_2);
 if (VAR_7) {
  FUNC_0(VAR_6,
       "Failed setting eswitch to offloads");
  VAR_8 = FUNC_3(VAR_5, VAR_1);
  if (VAR_8) {
   FUNC_0(VAR_6,
        "Failed setting eswitch back to legacy");
  }
 }
 if (VAR_5->offloads.inline_mode == VAR_4) {
  if (FUNC_4(VAR_5,
       &VAR_5->offloads.inline_mode)) {
   VAR_5->offloads.inline_mode = VAR_3;
   FUNC_0(VAR_6,
        "Inline mode is different between vports");
  }
 }
 return VAR_7;
}
