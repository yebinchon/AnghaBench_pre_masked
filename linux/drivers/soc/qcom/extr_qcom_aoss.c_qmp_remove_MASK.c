
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmp {int mbox_chan; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qmp* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct qmp*) ;
 int FUNC_3 (struct qmp*) ;
 int FUNC_4 (struct qmp*) ;
 int FUNC_5 (struct qmp*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct qmp *VAR_1 = FUNC_1(VAR_0);

 FUNC_5(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 FUNC_0(VAR_1->mbox_chan);

 return 0;
}
