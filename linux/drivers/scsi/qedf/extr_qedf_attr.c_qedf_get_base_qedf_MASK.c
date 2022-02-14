
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedf_ctx {struct fc_lport* lport; } ;
struct fc_lport {int vport; } ;


 struct qedf_ctx* FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct qedf_ctx*) ;
 struct fc_lport* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct qedf_ctx *FUNC_4(struct qedf_ctx *VAR_0)
{
 struct fc_lport *VAR_1;
 struct fc_lport *VAR_2;

 if (!(FUNC_1(VAR_0)))
  return ((void*)0);

 VAR_1 = VAR_0->lport;
 VAR_2 = FUNC_2(FUNC_3(VAR_1->vport));
 return FUNC_0(VAR_2);
}
