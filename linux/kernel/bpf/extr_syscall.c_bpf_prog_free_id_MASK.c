
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct bpf_prog *VAR_2, bool VAR_3)
{





 if (!VAR_2->aux->id)
  return;

 if (VAR_3)
  FUNC_3(&VAR_1);
 else
  FUNC_0(&VAR_1);

 FUNC_2(&VAR_0, VAR_2->aux->id);
 VAR_2->aux->id = 0;

 if (VAR_3)
  FUNC_4(&VAR_1);
 else
  FUNC_1(&VAR_1);
}
