
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int name; int node_num; } ;


 int FUNC_0 (int ,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct dlm_ctxt *VAR_1 = VAR_0;
 FUNC_0(0, "ast for recovery lock fired!, this=%u, dlm=%s\n",
      VAR_1->node_num, VAR_1->name);
}
