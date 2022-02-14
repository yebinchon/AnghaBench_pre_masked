
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int refcnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_prog*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bpf_prog*,int) ;
 int FUNC_3 (struct bpf_prog*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bpf_prog *VAR_1, bool VAR_2)
{
 if (FUNC_1(&VAR_1->aux->refcnt)) {
  FUNC_3(VAR_1, VAR_0, 0);

  FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_1, 1);
 }
}
