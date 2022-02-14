
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_device {struct mei_cl_device* cl; int bus; int me_cl; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct mei_cl_device*) ;
 int FUNC_1 (struct mei_cl_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mei_cl_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct mei_cl_device *VAR_1 = FUNC_4(VAR_0);

 if (!VAR_1)
  return;

 FUNC_3(VAR_1->me_cl);
 FUNC_2(VAR_1->bus);
 FUNC_1(VAR_1->cl);
 FUNC_0(VAR_1->cl);
 FUNC_0(VAR_1);
}
