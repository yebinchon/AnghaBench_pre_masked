
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv_otg {int phy; scalar_t__ qwork; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mv_otg*) ;
 struct mv_otg* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct mv_otg *VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->qwork) {
  FUNC_1(VAR_1->qwork);
  FUNC_0(VAR_1->qwork);
 }

 FUNC_2(VAR_1);

 FUNC_4(&VAR_1->phy);

 return 0;
}
