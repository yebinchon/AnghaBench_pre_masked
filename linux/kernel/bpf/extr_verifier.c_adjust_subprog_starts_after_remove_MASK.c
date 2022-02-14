
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bpf_verifier_env {int subprog_cnt; TYPE_2__* subprog_info; TYPE_1__* prog; } ;
struct bpf_prog_aux {int func_info_cnt; TYPE_2__* func_info; } ;
struct TYPE_5__ {scalar_t__ start; } ;
struct TYPE_4__ {struct bpf_prog_aux* aux; } ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(struct bpf_verifier_env *VAR_0,
           u32 VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_0->subprog_cnt; VAR_3++)
  if (VAR_0->subprog_info[VAR_3].start >= VAR_1)
   break;

 for (VAR_4 = VAR_3; VAR_4 < VAR_0->subprog_cnt; VAR_4++)
  if (VAR_0->subprog_info[VAR_4].start >= VAR_1 + VAR_2)
   break;



 if (VAR_0->subprog_info[VAR_4].start != VAR_1 + VAR_2)
  VAR_4--;

 if (VAR_4 > VAR_3) {
  struct bpf_prog_aux *VAR_5 = VAR_0->prog->aux;
  int VAR_6;


  VAR_6 = VAR_0->subprog_cnt + 1 - VAR_4;

  FUNC_0(VAR_0->subprog_info + VAR_3,
   VAR_0->subprog_info + VAR_4,
   sizeof(*VAR_0->subprog_info) * VAR_6);
  VAR_0->subprog_cnt -= VAR_4 - VAR_3;


  if (VAR_5->func_info) {
   VAR_6 = VAR_5->func_info_cnt - VAR_4;

   FUNC_0(VAR_5->func_info + VAR_3,
    VAR_5->func_info + VAR_4,
    sizeof(*VAR_5->func_info) * VAR_6);
   VAR_5->func_info_cnt -= VAR_4 - VAR_3;



  }
 } else {

  if (VAR_0->subprog_info[VAR_3].start == VAR_1)
   VAR_3++;
 }


 for (; VAR_3 <= VAR_0->subprog_cnt; VAR_3++)
  VAR_0->subprog_info[VAR_3].start -= VAR_2;

 return 0;
}
