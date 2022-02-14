
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_struct {int dummy; } ;
struct bpf_prog {TYPE_1__* aux; int pages; } ;
struct TYPE_2__ {struct user_struct* user; } ;


 int FUNC_0 (struct user_struct*,int ) ;
 int FUNC_1 (struct user_struct*) ;
 struct user_struct* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct bpf_prog *VAR_0)
{
 struct user_struct *VAR_1 = FUNC_2();
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0->pages);
 if (VAR_2) {
  FUNC_1(VAR_1);
  return VAR_2;
 }

 VAR_0->aux->user = VAR_1;
 return 0;
}
