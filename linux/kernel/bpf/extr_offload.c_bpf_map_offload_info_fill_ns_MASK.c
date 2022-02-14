
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ns_get_path_bpf_map_args {TYPE_1__* info; TYPE_2__* offmap; } ;
struct ns_common {int dummy; } ;
struct net {struct ns_common ns; } ;
struct TYPE_6__ {scalar_t__ ifindex; } ;
struct TYPE_5__ {TYPE_3__* netdev; } ;
struct TYPE_4__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 struct net* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ns_common *FUNC_6(void *VAR_1)
{
 struct ns_get_path_bpf_map_args *VAR_2 = VAR_1;
 struct ns_common *VAR_3;
 struct net *VAR_4;

 FUNC_3();
 FUNC_1(&VAR_0);

 if (VAR_2->offmap->netdev) {
  VAR_2->info->ifindex = VAR_2->offmap->netdev->ifindex;
  VAR_4 = FUNC_0(VAR_2->offmap->netdev);
  FUNC_2(VAR_4);
  VAR_3 = &VAR_4->ns;
 } else {
  VAR_2->info->ifindex = 0;
  VAR_3 = ((void*)0);
 }

 FUNC_5(&VAR_0);
 FUNC_4();

 return VAR_3;
}
