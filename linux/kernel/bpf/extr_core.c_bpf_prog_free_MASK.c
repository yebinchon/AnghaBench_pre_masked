
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_aux {int work; } ;
struct bpf_prog {struct bpf_prog_aux* aux; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void FUNC_2(struct bpf_prog *VAR_1)
{
 struct bpf_prog_aux *VAR_2 = VAR_1->aux;

 FUNC_0(&VAR_2->work, VAR_0);
 FUNC_1(&VAR_2->work);
}
