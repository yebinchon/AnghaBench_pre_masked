
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_struct {int dummy; } ;
struct bpf_prog {int pages; TYPE_1__* aux; } ;
struct TYPE_2__ {struct user_struct* user; } ;


 int FUNC_0 (struct user_struct*,int ) ;
 int FUNC_1 (struct user_struct*) ;

__attribute__((used)) static void FUNC_2(struct bpf_prog *VAR_0)
{
 struct user_struct *VAR_1 = VAR_0->aux->user;

 FUNC_0(VAR_1, VAR_0->pages);
 FUNC_1(VAR_1);
}
