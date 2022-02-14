
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptr; int len; } ;
struct TYPE_5__ {TYPE_1__ bin_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; } ;
struct team {int lock; } ;
struct sock_fprog_kern {int dummy; } ;
struct lb_priv {TYPE_3__* ex; int fp; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_6__ {struct sock_fprog_kern* orig_fprog; } ;


 int FUNC_0 (struct sock_fprog_kern**,int ,int ) ;
 int FUNC_1 (struct sock_fprog_kern*) ;
 int FUNC_2 (struct bpf_prog**,struct sock_fprog_kern*) ;
 int FUNC_3 (struct bpf_prog*) ;
 struct lb_priv* FUNC_4 (struct team*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct bpf_prog*) ;
 struct bpf_prog* FUNC_7 (int ,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct team *VAR_0, struct team_gsetter_ctx *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_4(VAR_0);
 struct bpf_prog *VAR_3 = ((void*)0);
 struct bpf_prog *VAR_4 = ((void*)0);
 struct sock_fprog_kern *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_1->data.bin_val.len) {
  VAR_6 = FUNC_0(&VAR_5, VAR_1->data.bin_val.len,
         VAR_1->data.bin_val.ptr);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_2(&VAR_3, VAR_5);
  if (VAR_6) {
   FUNC_1(VAR_5);
   return VAR_6;
  }
 }

 if (VAR_2->ex->orig_fprog) {

  FUNC_1(VAR_2->ex->orig_fprog);
  VAR_4 = FUNC_7(VAR_2->fp,
      FUNC_5(&VAR_0->lock));
 }

 FUNC_6(VAR_2->fp, VAR_3);
 VAR_2->ex->orig_fprog = VAR_5;

 if (VAR_4) {
  FUNC_8();
  FUNC_3(VAR_4);
 }
 return 0;
}
