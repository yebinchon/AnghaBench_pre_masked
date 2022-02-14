
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct xa_state {int dummy; } ;
struct exceptional_entry_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,struct exceptional_entry_key*) ;
 int * FUNC_1 (struct xa_state*,void*,struct exceptional_entry_key*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct xa_state *VAR_1, void *VAR_2, bool VAR_3)
{
 struct exceptional_entry_key VAR_4;
 wait_queue_head_t *VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_4);







 if (FUNC_2(VAR_5))
  FUNC_0(VAR_5, VAR_0, VAR_3 ? 0 : 1, &VAR_4);
}
