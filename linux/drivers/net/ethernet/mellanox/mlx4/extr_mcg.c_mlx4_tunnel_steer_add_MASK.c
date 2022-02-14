
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {int dst_mac_msk; int dst_mac; } ;
struct TYPE_3__ {int * member_0; } ;
struct mlx4_spec_list {int list; void* id; TYPE_2__ eth; TYPE_1__ member_0; } ;
struct mlx4_net_trans_rule {int allow_loopback; int port; int qpn; int list; int priority; int promisc_mode; int exclusive; int queue_mode; } ;
struct mlx4_dev {int dummy; } ;
typedef unsigned char __be64 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_net_trans_rule*,int *) ;

int FUNC_5(struct mlx4_dev *VAR_6, unsigned char *VAR_7,
     int VAR_8, int VAR_9, u16 VAR_10, u64 *VAR_11)
{
 int VAR_12;
 struct mlx4_spec_list VAR_13 = { ((void*)0) };
 struct mlx4_spec_list VAR_14 = { ((void*)0) };
 struct mlx4_spec_list VAR_15 = { ((void*)0) };

 struct mlx4_net_trans_rule VAR_16 = {
  .queue_mode = VAR_3,
  .exclusive = 0,
  .allow_loopback = 1,
  .promisc_mode = VAR_1,
 };

 __be64 VAR_17 = FUNC_1(VAR_2 << 16);

 VAR_16.port = VAR_8;
 VAR_16.qpn = VAR_9;
 VAR_16.priority = VAR_10;
 FUNC_0(&VAR_16.list);

 VAR_13.id = VAR_4;
 FUNC_3(VAR_13.eth.dst_mac, VAR_7, VAR_0);
 FUNC_3(VAR_13.eth.dst_mac_msk, &VAR_17, VAR_0);

 VAR_14.id = VAR_5;
 VAR_15.id = VAR_4;

 FUNC_2(&VAR_13.list, &VAR_16.list);
 FUNC_2(&VAR_14.list, &VAR_16.list);
 FUNC_2(&VAR_15.list, &VAR_16.list);

 VAR_12 = FUNC_4(VAR_6, &VAR_16, VAR_11);
 return VAR_12;
}
