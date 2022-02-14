
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedi_ctx {int dbg_ctx; } ;


 int FUNC_0 (int *,char*,struct qedi_ctx*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{

 struct qedi_ctx *VAR_1 = (struct qedi_ctx *)VAR_0;

 FUNC_0(&VAR_1->dbg_ctx, "qedi=%p.\n", VAR_1);
}
