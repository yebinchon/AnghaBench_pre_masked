
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ns_get_path_bpf_prog_args {TYPE_2__* info; TYPE_3__* prog; } ;
struct ns_common {int dummy; } ;
struct net {struct ns_common ns; } ;
struct bpf_prog_aux {TYPE_1__* offload; } ;
struct TYPE_8__ {scalar_t__ ifindex; } ;
struct TYPE_7__ {struct bpf_prog_aux* aux; } ;
struct TYPE_6__ {scalar_t__ ifindex; } ;
struct TYPE_5__ {TYPE_4__* netdev; } ;


 int VAR_0 ;
 struct net* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ns_common *FUNC_6(void *VAR_1)
{
 struct ns_get_path_bpf_prog_args *VAR_2 = VAR_1;
 struct bpf_prog_aux *VAR_3 = VAR_2->prog->aux;
 struct ns_common *VAR_4;
 struct net *VAR_5;

 FUNC_3();
 FUNC_1(&VAR_0);

 if (VAR_3->offload) {
  VAR_2->info->ifindex = VAR_3->offload->netdev->ifindex;
  VAR_5 = FUNC_0(VAR_3->offload->netdev);
  FUNC_2(VAR_5);
  VAR_4 = &VAR_5->ns;
 } else {
  VAR_2->info->ifindex = 0;
  VAR_4 = ((void*)0);
 }

 FUNC_5(&VAR_0);
 FUNC_4();

 return VAR_4;
}
