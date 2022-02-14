
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct dummy {int * ss_hcd; int * hs_hcd; } ;
struct TYPE_2__ {struct dummy* dum; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct dummy *VAR_1;

 VAR_1 = FUNC_1(FUNC_2(VAR_0))->dum;

 if (VAR_1->ss_hcd) {
  FUNC_4(FUNC_0(VAR_1->ss_hcd));
  FUNC_3(FUNC_0(VAR_1->ss_hcd));
 }

 FUNC_4(FUNC_0(VAR_1->hs_hcd));
 FUNC_3(FUNC_0(VAR_1->hs_hcd));

 VAR_1->hs_hcd = ((void*)0);
 VAR_1->ss_hcd = ((void*)0);

 return 0;
}
