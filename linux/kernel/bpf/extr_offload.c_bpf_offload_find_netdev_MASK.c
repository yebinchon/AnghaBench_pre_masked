
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bpf_offload_netdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_offload_netdev* FUNC_1 (int *,struct net_device**,int ) ;

__attribute__((used)) static struct bpf_offload_netdev *
FUNC_2(struct net_device *VAR_4)
{
 FUNC_0(&VAR_0);

 if (!VAR_2)
  return ((void*)0);
 return FUNC_1(&VAR_1, &VAR_4, VAR_3);
}
