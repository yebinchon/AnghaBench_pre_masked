
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_bus {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int*,int ) ;
 int FUNC_2 () ;

int FUNC_3(struct nvdimm_bus *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 FUNC_2();

 FUNC_1(&VAR_2->dev, &VAR_4, VAR_1);
 FUNC_0(&VAR_2->dev, "count: %d\n", VAR_4);
 if (VAR_4 != VAR_3)
  return -VAR_0;
 return 0;
}
