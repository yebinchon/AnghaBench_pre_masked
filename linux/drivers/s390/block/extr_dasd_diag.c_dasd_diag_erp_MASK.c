
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {TYPE_2__* cdev; int flags; TYPE_1__* block; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int bp_block; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dasd_device*,int ,int ,int *) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct dasd_device *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_1);
 VAR_2 = FUNC_1(VAR_1, VAR_1->block->bp_block, 0, ((void*)0));
 if (VAR_2 == 4) {
  if (!(FUNC_4(VAR_0, &VAR_1->flags)))
   FUNC_3("%s: The access mode of a DIAG device changed to read-only\n",
    FUNC_0(&VAR_1->cdev->dev));
  VAR_2 = 0;
 }
 if (VAR_2)
  FUNC_3("%s: DIAG ERP failed with rc=%d\n",
   FUNC_0(&VAR_1->cdev->dev), VAR_2);
}
