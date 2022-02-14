
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_rc {int polling; int work; } ;
struct au0828_dev {struct au0828_rc* ir; } ;


 int FUNC_0 (struct au0828_rc*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(struct au0828_dev *VAR_0)
{
 struct au0828_rc *VAR_1 = VAR_0->ir;

 if (!VAR_1)
  return 0;

 FUNC_2("Restarting RC\n");


 FUNC_0(VAR_1, 0xe0, 1 << 4);

 FUNC_3(&VAR_1->work, FUNC_1(VAR_1->polling));

 return 0;
}
