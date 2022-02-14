
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int new_prog; } ;
struct qede_reload_args {TYPE_1__ u; } ;
struct qede_dev {int xdp_prog; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct qede_dev *VAR_0,
     struct qede_reload_args *VAR_1)
{
 struct bpf_prog *VAR_2;

 VAR_2 = FUNC_1(&VAR_0->xdp_prog, VAR_1->u.new_prog);
 if (VAR_2)
  FUNC_0(VAR_2);
}
