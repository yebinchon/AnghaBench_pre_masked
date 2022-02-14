
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct cxlflash_cfg {TYPE_1__ cdev; int * chardev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cxlflash_cfg *VAR_0)
{
 FUNC_3(VAR_0->chardev);
 VAR_0->chardev = ((void*)0);
 FUNC_1(&VAR_0->cdev);
 FUNC_2(FUNC_0(VAR_0->cdev.dev));
}
