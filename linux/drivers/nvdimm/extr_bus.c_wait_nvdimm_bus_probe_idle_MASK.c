
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {scalar_t__ probe_active; int wait; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int) ;
 struct nvdimm_bus* FUNC_5 (struct device*) ;

void FUNC_6(struct device *VAR_0)
{
 struct nvdimm_bus *VAR_1 = FUNC_5(VAR_0);

 do {
  if (VAR_1->probe_active == 0)
   break;
  FUNC_3(VAR_0);
  FUNC_1(VAR_0);
  FUNC_4(VAR_1->wait,
    VAR_1->probe_active == 0);
  FUNC_0(VAR_0);
  FUNC_2(VAR_0);
 } while (1);
}
