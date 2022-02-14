
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union bpf_attr {scalar_t__ map_type; int map_ifindex; } ;
struct net {int dummy; } ;
struct bpf_map {int dummy; } ;
struct bpf_offloaded_map {struct bpf_map map; int offloads; int netdev; } ;
struct bpf_offload_netdev {int maps; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {struct net* net_ns; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bpf_map* FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int FUNC_3 (struct bpf_map*,union bpf_attr*) ;
 int FUNC_4 (struct bpf_offloaded_map*,int ) ;
 struct bpf_offload_netdev* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_2__* VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bpf_offloaded_map*) ;
 struct bpf_offloaded_map* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;

struct bpf_map *FUNC_14(union bpf_attr *VAR_10)
{
 struct net *VAR_11 = VAR_9->nsproxy->net_ns;
 struct bpf_offload_netdev *VAR_12;
 struct bpf_offloaded_map *VAR_13;
 int VAR_14;

 if (!FUNC_6(VAR_3))
  return FUNC_0(-VAR_6);
 if (VAR_10->map_type != VAR_0 &&
     VAR_10->map_type != VAR_1)
  return FUNC_0(-VAR_4);

 VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return FUNC_0(-VAR_5);

 FUNC_3(&VAR_13->map, VAR_10);

 FUNC_11();
 FUNC_7(&VAR_8);
 VAR_13->netdev = FUNC_1(VAR_11, VAR_10->map_ifindex);
 VAR_14 = FUNC_2(VAR_13->netdev);
 if (VAR_14)
  goto err_unlock;

 VAR_12 = FUNC_5(VAR_13->netdev);
 if (!VAR_12) {
  VAR_14 = -VAR_4;
  goto err_unlock;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_2);
 if (VAR_14)
  goto err_unlock;

 FUNC_10(&VAR_13->offloads, &VAR_12->maps);
 FUNC_13(&VAR_8);
 FUNC_12();

 return &VAR_13->map;

err_unlock:
 FUNC_13(&VAR_8);
 FUNC_12();
 FUNC_8(VAR_13);
 return FUNC_0(VAR_14);
}
