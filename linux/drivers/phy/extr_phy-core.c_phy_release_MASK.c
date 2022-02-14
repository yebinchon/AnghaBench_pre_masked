
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int id; int pwr; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct phy*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 struct phy* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1)
{
 struct phy *VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 FUNC_1(VAR_1, "releasing '%s'\n", FUNC_0(VAR_1));
 FUNC_4(VAR_2->pwr);
 FUNC_2(&VAR_0, VAR_2->id);
 FUNC_3(VAR_2);
}
