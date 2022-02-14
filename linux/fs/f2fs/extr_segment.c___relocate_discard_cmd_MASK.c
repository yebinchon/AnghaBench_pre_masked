
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct discard_cmd_control {int * pend_list; } ;
struct discard_cmd {int len; int list; } ;


 int FUNC_0 (int *,int *) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct discard_cmd_control *VAR_0,
      struct discard_cmd *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->pend_list[FUNC_1(VAR_1->len)]);
}
