
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct ab8500_btemp {int btemp_psy; int btemp_wq; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,struct ab8500_btemp*) ;
 struct ab8500_btemp* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct ab8500_btemp *VAR_2 = FUNC_4(VAR_1);
 int VAR_3, VAR_4;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = FUNC_5(VAR_1, VAR_0[VAR_3].name);
  FUNC_3(VAR_4, VAR_2);
 }


 FUNC_1(VAR_2->btemp_wq);

 FUNC_2();
 FUNC_6(VAR_2->btemp_psy);

 return 0;
}
