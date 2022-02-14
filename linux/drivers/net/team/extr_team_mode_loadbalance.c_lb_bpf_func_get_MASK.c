
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int len; int * ptr; } ;
struct TYPE_5__ {TYPE_4__ bin_val; } ;
struct team_gsetter_ctx {TYPE_1__ data; } ;
struct team {int dummy; } ;
struct sock_filter {int dummy; } ;
struct lb_priv {TYPE_3__* ex; } ;
struct TYPE_7__ {TYPE_2__* orig_fprog; } ;
struct TYPE_6__ {int len; int * filter; } ;


 struct lb_priv* FUNC_0 (struct team*) ;

__attribute__((used)) static int FUNC_1(struct team *VAR_0, struct team_gsetter_ctx *VAR_1)
{
 struct lb_priv *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->ex->orig_fprog) {
  VAR_1->data.bin_val.len = 0;
  VAR_1->data.bin_val.ptr = ((void*)0);
  return 0;
 }
 VAR_1->data.bin_val.len = VAR_2->ex->orig_fprog->len *
    sizeof(struct sock_filter);
 VAR_1->data.bin_val.ptr = VAR_2->ex->orig_fprog->filter;
 return 0;
}
