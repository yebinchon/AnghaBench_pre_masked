
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {scalar_t__ probe_active; int dev; int wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nvdimm_bus *VAR_0)
{
 FUNC_0(&VAR_0->dev);
 if (--VAR_0->probe_active == 0)
  FUNC_2(&VAR_0->wait);
 FUNC_1(&VAR_0->dev);
}
