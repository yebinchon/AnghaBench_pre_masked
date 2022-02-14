
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union bpf_attr {scalar_t__ prog_type; int prog_ifindex; scalar_t__ prog_flags; } ;
struct bpf_prog_offload {scalar_t__ netdev; int offloads; int offdev; struct bpf_prog* prog; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct bpf_offload_netdev {int progs; int offdev; } ;
struct TYPE_6__ {TYPE_1__* nsproxy; } ;
struct TYPE_5__ {struct bpf_prog_offload* offload; } ;
struct TYPE_4__ {int net_ns; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 struct bpf_offload_netdev* FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bpf_prog_offload*) ;
 struct bpf_prog_offload* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct bpf_prog *VAR_7, union bpf_attr *VAR_8)
{
 struct bpf_offload_netdev *VAR_9;
 struct bpf_prog_offload *VAR_10;
 int VAR_11;

 if (VAR_8->prog_type != VAR_0 &&
     VAR_8->prog_type != VAR_1)
  return -VAR_2;

 if (VAR_8->prog_flags)
  return -VAR_2;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->prog = VAR_7;

 VAR_10->netdev = FUNC_2(VAR_6->nsproxy->net_ns,
        VAR_8->prog_ifindex);
 VAR_11 = FUNC_0(VAR_10->netdev);
 if (VAR_11)
  goto err_maybe_put;

 FUNC_4(&VAR_5);
 VAR_9 = FUNC_1(VAR_10->netdev);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto err_unlock;
 }
 VAR_10->offdev = VAR_9->offdev;
 VAR_7->aux->offload = VAR_10;
 FUNC_7(&VAR_10->offloads, &VAR_9->progs);
 FUNC_3(VAR_10->netdev);
 FUNC_8(&VAR_5);

 return 0;
err_unlock:
 FUNC_8(&VAR_5);
err_maybe_put:
 if (VAR_10->netdev)
  FUNC_3(VAR_10->netdev);
 FUNC_5(VAR_10);
 return VAR_11;
}
