
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct team {int lock; } ;
struct lb_priv {int fp; TYPE_1__* ex; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_2__ {int orig_fprog; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_prog*) ;
 struct lb_priv* FUNC_2 (struct team*) ;
 int FUNC_3 (int *) ;
 struct bpf_prog* FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct team *VAR_0)
{
 struct lb_priv *VAR_1 = FUNC_2(VAR_0);
 struct bpf_prog *VAR_2;

 if (!VAR_1->ex->orig_fprog)
  return;

 FUNC_0(VAR_1->ex->orig_fprog);
 VAR_2 = FUNC_4(VAR_1->fp,
           FUNC_3(&VAR_0->lock));
 FUNC_1(VAR_2);
}
