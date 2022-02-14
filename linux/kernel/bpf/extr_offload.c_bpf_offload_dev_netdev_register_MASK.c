
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bpf_offload_netdev {int offdev_netdevs; int l; int maps; int progs; struct bpf_offload_dev* offdev; struct net_device* netdev; } ;
struct bpf_offload_dev {int netdevs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bpf_offload_netdev*) ;
 struct bpf_offload_netdev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct net_device*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct bpf_offload_dev *VAR_5,
        struct net_device *VAR_6)
{
 struct bpf_offload_netdev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->netdev = VAR_6;
 VAR_7->offdev = VAR_5;
 FUNC_0(&VAR_7->progs);
 FUNC_0(&VAR_7->maps);

 FUNC_1(&VAR_2);
 VAR_8 = FUNC_6(&VAR_3, &VAR_7->l, VAR_4);
 if (VAR_8) {
  FUNC_5(VAR_6, "failed to register for BPF offload\n");
  goto err_unlock_free;
 }

 FUNC_4(&VAR_7->offdev_netdevs, &VAR_5->netdevs);
 FUNC_7(&VAR_2);
 return 0;

err_unlock_free:
 FUNC_7(&VAR_2);
 FUNC_2(VAR_7);
 return VAR_8;
}
