
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct srp_rport {struct device dev; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

void FUNC_4(struct srp_rport *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;

 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1);

 FUNC_1(VAR_1);
}
