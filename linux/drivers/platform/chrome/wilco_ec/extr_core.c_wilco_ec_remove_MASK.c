
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilco_ec_device {scalar_t__ debugfs_pdev; scalar_t__ rtc_pdev; scalar_t__ telem_pdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 struct wilco_ec_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct wilco_ec_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct wilco_ec_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(VAR_1->telem_pdev);
 FUNC_1(VAR_1->rtc_pdev);
 if (VAR_1->debugfs_pdev)
  FUNC_1(VAR_1->debugfs_pdev);


 FUNC_0();

 return 0;
}
