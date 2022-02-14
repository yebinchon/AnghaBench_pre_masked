
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gasket_internal_desc {int class; } ;
struct TYPE_2__ {int devt; int device; } ;
struct gasket_dev {TYPE_1__ dev_info; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gasket_dev*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gasket_internal_desc *VAR_0,
       struct gasket_dev *VAR_1)
{
 FUNC_2(VAR_1->dev_info.device);
 FUNC_0(VAR_0->class, VAR_1->dev_info.devt);
 FUNC_1(VAR_1);
}
