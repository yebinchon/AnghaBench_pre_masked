
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_cookie {struct ath6kl_cookie* arc_list_next; } ;
struct ath6kl {int cookie_count; struct ath6kl_cookie* cookie_list; } ;



struct ath6kl_cookie *FUNC_0(struct ath6kl *VAR_0)
{
 struct ath6kl_cookie *VAR_1;

 VAR_1 = VAR_0->cookie_list;
 if (VAR_1 != ((void*)0)) {
  VAR_0->cookie_list = VAR_1->arc_list_next;
  VAR_0->cookie_count--;
 }

 return VAR_1;
}
