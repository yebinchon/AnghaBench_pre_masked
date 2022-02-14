
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ath6kl {int * cookie_mem; scalar_t__ cookie_count; int * cookie_list; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ath6kl*,int *) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct ath6kl *VAR_1)
{
 u32 VAR_2;

 VAR_1->cookie_list = ((void*)0);
 VAR_1->cookie_count = 0;

 FUNC_1(VAR_1->cookie_mem, 0, sizeof(VAR_1->cookie_mem));

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, &VAR_1->cookie_mem[VAR_2]);
}
