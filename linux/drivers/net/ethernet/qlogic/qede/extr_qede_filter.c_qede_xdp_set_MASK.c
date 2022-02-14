
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bpf_prog* new_prog; } ;
struct qede_reload_args {TYPE_1__ u; int * func; } ;
struct qede_dev {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct qede_dev*,struct qede_reload_args*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct qede_dev *VAR_1, struct bpf_prog *VAR_2)
{
 struct qede_reload_args VAR_3;


 VAR_3.func = &VAR_0;
 VAR_3.u.new_prog = VAR_2;
 FUNC_0(VAR_1, &VAR_3, 0);

 return 0;
}
