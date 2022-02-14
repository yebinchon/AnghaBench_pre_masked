
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct cxl {int slices; int * afu; } ;


 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (int ) ;
 struct cxl* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct cxl *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(&VAR_0->dev);
 for (VAR_2 = 0; VAR_2 < VAR_1->slices; VAR_2++)
  FUNC_1(VAR_1->afu[VAR_2]);

 FUNC_0(VAR_1);
 return 0;
}
