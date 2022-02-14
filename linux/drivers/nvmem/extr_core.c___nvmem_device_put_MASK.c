
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_device {int refcnt; int owner; int dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nvmem_device *VAR_1)
{
 FUNC_2(&VAR_1->dev);
 FUNC_1(VAR_1->owner);
 FUNC_0(&VAR_1->refcnt, VAR_0);
}
