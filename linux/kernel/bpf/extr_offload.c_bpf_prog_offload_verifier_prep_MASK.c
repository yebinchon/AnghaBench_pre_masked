
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_prog_offload {int dev_state; TYPE_3__* offdev; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* prepare ) (struct bpf_prog*) ;} ;
struct TYPE_4__ {struct bpf_prog_offload* offload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct bpf_prog *VAR_2)
{
 struct bpf_prog_offload *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_1);
 VAR_3 = VAR_2->aux->offload;
 if (VAR_3) {
  VAR_4 = VAR_3->offdev->ops->prepare(VAR_2);
  VAR_3->dev_state = !VAR_4;
 }
 FUNC_2(&VAR_1);

 return VAR_4;
}
