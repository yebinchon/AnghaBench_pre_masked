
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_cmdq {scalar_t__ bytes_to_copy; } ;


 int FUNC_0 (struct bfa_msgq_cmdq*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct bfa_msgq_cmdq *VAR_1 = (struct bfa_msgq_cmdq *)VAR_0;

 if (VAR_1->bytes_to_copy)
  FUNC_0(VAR_1);
}
