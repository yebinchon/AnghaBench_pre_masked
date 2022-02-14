
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_rc {int rc; } ;
struct au0828_dev {struct au0828_rc* ir; } ;


 int FUNC_0 (struct au0828_rc*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct au0828_dev *VAR_0)
{
 struct au0828_rc *VAR_1 = VAR_0->ir;


 if (!VAR_1)
  return;

 FUNC_1(VAR_1->rc);


 FUNC_0(VAR_1);
 VAR_0->ir = ((void*)0);
}
