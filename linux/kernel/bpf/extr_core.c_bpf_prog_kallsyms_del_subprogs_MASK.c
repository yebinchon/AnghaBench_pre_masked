
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int func_cnt; int * func; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bpf_prog *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->aux->func_cnt; VAR_1++)
  FUNC_0(VAR_0->aux->func[VAR_1]);
}
