
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct dsaf_device {TYPE_2__* misc_op; TYPE_1__ ae_dev; int dev; } ;
struct TYPE_4__ {int (* dsaf_reset ) (struct dsaf_device*,int) ;} ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dsaf_device*) ;
 int FUNC_2 (struct dsaf_device*) ;
 int FUNC_3 (struct dsaf_device*) ;
 int FUNC_4 (struct dsaf_device*) ;
 int FUNC_5 (struct dsaf_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct dsaf_device*,int) ;
 int FUNC_8 (struct dsaf_device*,int) ;

__attribute__((used)) static int FUNC_9(struct dsaf_device *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->dev,
  "hns_dsaf_init_hw begin %s !\n", VAR_0->ae_dev.name);

 VAR_0->misc_op->dsaf_reset(VAR_0, 0);
 FUNC_6(10);
 VAR_0->misc_op->dsaf_reset(VAR_0, 1);

 FUNC_1(VAR_0);


 FUNC_2(VAR_0);


 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  return VAR_1;


 FUNC_4(VAR_0);


 FUNC_5(VAR_0);

 return 0;
}
