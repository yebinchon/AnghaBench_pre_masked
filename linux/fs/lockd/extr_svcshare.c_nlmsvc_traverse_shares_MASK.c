
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_share {struct nlm_share* s_next; int s_host; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {struct nlm_share* f_shares; } ;
typedef scalar_t__ (* nlm_host_match_fn_t ) (int ,struct nlm_host*) ;


 int FUNC_0 (struct nlm_share*) ;

void FUNC_1(struct nlm_host *VAR_0, struct nlm_file *VAR_1,
  nlm_host_match_fn_t VAR_2)
{
 struct nlm_share *VAR_3, **VAR_4;

 VAR_4 = &VAR_1->f_shares;
 while ((VAR_3 = *VAR_4) != ((void*)0)) {
  if (VAR_2(VAR_3->s_host, VAR_0)) {
   *VAR_4 = VAR_3->s_next;
   FUNC_0(VAR_3);
   continue;
  }
  VAR_4 = &VAR_3->s_next;
 }
}
