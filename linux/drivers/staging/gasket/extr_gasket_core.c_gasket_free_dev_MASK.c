
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gasket_internal_desc {int mutex; int ** devs; } ;
struct gasket_dev {size_t dev_idx; int dev; struct gasket_internal_desc* internal_desc; } ;


 int FUNC_0 (struct gasket_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct gasket_dev *VAR_0)
{
 struct gasket_internal_desc *VAR_1 = VAR_0->internal_desc;

 FUNC_1(&VAR_1->mutex);
 VAR_1->devs[VAR_0->dev_idx] = ((void*)0);
 FUNC_2(&VAR_1->mutex);
 FUNC_3(VAR_0->dev);
 FUNC_0(VAR_0);
}
