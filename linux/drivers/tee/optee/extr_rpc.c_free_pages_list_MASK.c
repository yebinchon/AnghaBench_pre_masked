
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct optee_call_ctx {scalar_t__ num_entries; int * pages_list; } ;


 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct optee_call_ctx *VAR_0)
{
 if (VAR_0->pages_list) {
  FUNC_0(VAR_0->pages_list,
          VAR_0->num_entries);
  VAR_0->pages_list = ((void*)0);
  VAR_0->num_entries = 0;
 }
}
