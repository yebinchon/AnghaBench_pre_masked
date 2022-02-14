
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct bpf_prog_offload {struct net_device* netdev; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct bpf_offload_netdev {scalar_t__ offdev; } ;
struct TYPE_2__ {struct bpf_prog_offload* offload; } ;


 struct bpf_offload_netdev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2(struct bpf_prog *VAR_0,
        struct net_device *VAR_1)
{
 struct bpf_offload_netdev *VAR_2, *VAR_3;
 struct bpf_prog_offload *VAR_4;

 if (!FUNC_1(VAR_0->aux))
  return 0;

 VAR_4 = VAR_0->aux->offload;
 if (!VAR_4)
  return 0;
 if (VAR_4->netdev == VAR_1)
  return 1;

 VAR_2 = FUNC_0(VAR_4->netdev);
 VAR_3 = FUNC_0(VAR_1);

 return VAR_2 && VAR_3 && VAR_2->offdev == VAR_3->offdev;
}
