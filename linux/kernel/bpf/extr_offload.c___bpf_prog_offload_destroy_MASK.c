
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_prog_offload {int offloads; TYPE_2__* offdev; scalar_t__ dev_state; } ;
struct bpf_prog {TYPE_3__* aux; } ;
struct TYPE_6__ {struct bpf_prog_offload* offload; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* destroy ) (struct bpf_prog*) ;} ;


 int FUNC_0 (struct bpf_prog*,int) ;
 int FUNC_1 (struct bpf_prog_offload*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bpf_prog*) ;

__attribute__((used)) static void FUNC_4(struct bpf_prog *VAR_0)
{
 struct bpf_prog_offload *VAR_1 = VAR_0->aux->offload;

 if (VAR_1->dev_state)
  VAR_1->offdev->ops->destroy(VAR_0);


 FUNC_0(VAR_0, 1);

 FUNC_2(&VAR_1->offloads);
 FUNC_1(VAR_1);
 VAR_0->aux->offload = ((void*)0);
}
