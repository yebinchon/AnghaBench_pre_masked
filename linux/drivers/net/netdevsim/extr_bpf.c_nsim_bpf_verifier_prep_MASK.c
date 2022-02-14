
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nsim_dev {int bpf_bind_accept; } ;
struct bpf_prog {TYPE_2__* aux; } ;
struct TYPE_4__ {TYPE_1__* offload; } ;
struct TYPE_3__ {int offdev; } ;


 int VAR_0 ;
 struct nsim_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct nsim_dev*,struct bpf_prog*) ;

__attribute__((used)) static int FUNC_2(struct bpf_prog *VAR_1)
{
 struct nsim_dev *VAR_2 =
   FUNC_0(VAR_1->aux->offload->offdev);

 if (!VAR_2->bpf_bind_accept)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_1);
}
