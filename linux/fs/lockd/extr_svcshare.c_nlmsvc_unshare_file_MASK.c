
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {int dummy; } ;
struct nlm_share {struct nlm_share* s_next; struct nlm_host* s_host; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {struct nlm_share* f_shares; } ;
struct TYPE_2__ {struct xdr_netobj oh; } ;
struct nlm_args {TYPE_1__ lock; } ;
typedef int __be32 ;


 int FUNC_0 (struct nlm_share*) ;
 scalar_t__ FUNC_1 (struct nlm_share*,struct xdr_netobj*) ;
 int VAR_0 ;

__be32
FUNC_2(struct nlm_host *VAR_1, struct nlm_file *VAR_2,
   struct nlm_args *VAR_3)
{
 struct nlm_share *VAR_4, **VAR_5;
 struct xdr_netobj *VAR_6 = &VAR_3->lock.oh;

 for (VAR_5 = &VAR_2->f_shares; (VAR_4 = *VAR_5) != ((void*)0);
     VAR_5 = &VAR_4->s_next) {
  if (VAR_4->s_host == VAR_1 && FUNC_1(VAR_4, VAR_6)) {
   *VAR_5 = VAR_4->s_next;
   FUNC_0(VAR_4);
   return VAR_0;
  }
 }



 return VAR_0;
}
