
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtnet_info {int max_queue_pairs; TYPE_1__* rq; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {int xdp_prog; scalar_t__ pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 struct bpf_prog* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct virtnet_info *VAR_1)
{
 struct bpf_prog *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->max_queue_pairs; VAR_3++) {
  while (VAR_1->rq[VAR_3].pages)
   FUNC_1(FUNC_3(&VAR_1->rq[VAR_3], VAR_0), 0);

  VAR_2 = FUNC_4(VAR_1->rq[VAR_3].xdp_prog);
  FUNC_0(VAR_1->rq[VAR_3].xdp_prog, ((void*)0));
  if (VAR_2)
   FUNC_2(VAR_2);
 }
}
