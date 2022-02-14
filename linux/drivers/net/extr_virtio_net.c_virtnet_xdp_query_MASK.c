
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct virtnet_info {int max_queue_pairs; TYPE_1__* rq; } ;
struct net_device {int dummy; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_3__ {int xdp_prog; } ;


 struct virtnet_info* FUNC_0 (struct net_device*) ;
 struct bpf_prog* FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 struct virtnet_info *VAR_1 = FUNC_0(VAR_0);
 const struct bpf_prog *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_queue_pairs; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1->rq[VAR_3].xdp_prog);
  if (VAR_2)
   return VAR_2->aux->id;
 }
 return 0;
}
