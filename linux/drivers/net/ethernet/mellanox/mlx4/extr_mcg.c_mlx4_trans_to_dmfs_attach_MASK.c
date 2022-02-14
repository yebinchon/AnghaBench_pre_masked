
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_6__ {int dst_gid_msk; int dst_gid; } ;
struct TYPE_5__ {int dst_mac_msk; int dst_mac; } ;
struct TYPE_4__ {int * member_0; } ;
struct mlx4_spec_list {int list; TYPE_3__ ib; int id; TYPE_2__ eth; TYPE_1__ member_0; } ;
struct mlx4_qp {int qpn; } ;
struct mlx4_net_trans_rule {int allow_loopback; int list; int qpn; int port; int priority; int promisc_mode; int exclusive; int queue_mode; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_net_trans_rule*,int *) ;

int FUNC_6(struct mlx4_dev *VAR_8, struct mlx4_qp *VAR_9,
         u8 VAR_10[16], u8 VAR_11,
         int VAR_12,
         enum mlx4_protocol VAR_13, u64 *VAR_14)
{
  struct mlx4_spec_list VAR_15 = { ((void*)0) };
  __be64 VAR_16 = FUNC_1(VAR_4 << 16);

  struct mlx4_net_trans_rule VAR_17 = {
   .queue_mode = VAR_5,
   .exclusive = 0,
   .promisc_mode = VAR_3,
   .priority = VAR_2,
  };

  VAR_17.allow_loopback = !VAR_12;
  VAR_17.port = VAR_11;
  VAR_17.qpn = VAR_9->qpn;
  FUNC_0(&VAR_17.list);

  switch (VAR_13) {
  case 129:
   VAR_15.id = VAR_6;
   FUNC_3(VAR_15.eth.dst_mac, &VAR_10[10], VAR_1);
   FUNC_3(VAR_15.eth.dst_mac_msk, &VAR_16, VAR_1);
   break;

  case 128:
   VAR_15.id = VAR_7;
   FUNC_3(VAR_15.ib.dst_gid, VAR_10, 16);
   FUNC_4(&VAR_15.ib.dst_gid_msk, 0xff, 16);
   break;
  default:
   return -VAR_0;
  }
  FUNC_2(&VAR_15.list, &VAR_17.list);

  return FUNC_5(VAR_8, &VAR_17, VAR_14);
}
