
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_5__ {int runtime_reg; int boot_status; int io_lock; } ;
struct TYPE_4__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int ) ;
 TYPE_2__ VAR_9 ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_10 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 int VAR_14;

 FUNC_9(&VAR_9.io_lock);

 if (!FUNC_5(VAR_9.runtime_reg + VAR_2, 1, VAR_0)) {
  FUNC_0(VAR_13, "Failed to request region 0x%04x-0x%04x.\n",
   VAR_9.runtime_reg + VAR_2,
   VAR_9.runtime_reg + VAR_2);
  VAR_14 = -VAR_1;
  goto exit;
 }

 if (!FUNC_5(VAR_9.runtime_reg + VAR_7, 4,
        VAR_0)) {
  FUNC_0(VAR_13, "Failed to request region 0x%04x-0x%04x.\n",
   VAR_9.runtime_reg + VAR_7,
   VAR_9.runtime_reg + VAR_6);
  VAR_14 = -VAR_1;
  goto exit_release_region;
 }


 FUNC_8();
 FUNC_3(0, VAR_9.runtime_reg + VAR_5);



 if (FUNC_7(VAR_11)) {
  FUNC_7(VAR_4);
  FUNC_1(VAR_13, "timeout value must be 1<=x<=15300, using %d\n",
   VAR_11);
 }


 FUNC_6(&VAR_9.boot_status);

 VAR_10.parent = VAR_13;

 VAR_14 = FUNC_2(&VAR_10);
 if (VAR_14 != 0) {
  FUNC_0(VAR_13, "cannot register miscdev on minor=%d (err=%d)\n",
       VAR_3, VAR_14);
  goto exit_release_region2;
 }

 FUNC_1(VAR_13,
  "SMSC SCH311x WDT initialized. timeout=%d sec (nowayout=%d)\n",
  VAR_11, VAR_8);

 return 0;

exit_release_region2:
 FUNC_4(VAR_9.runtime_reg + VAR_7, 4);
exit_release_region:
 FUNC_4(VAR_9.runtime_reg + VAR_2, 1);
 VAR_9.runtime_reg = 0;
exit:
 return VAR_14;
}
