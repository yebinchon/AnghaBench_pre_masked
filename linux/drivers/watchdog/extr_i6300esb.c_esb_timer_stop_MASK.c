
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
struct esb_dev {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct esb_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct esb_dev*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;
 struct esb_dev* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_3)
{
 struct esb_dev *VAR_4 = FUNC_4(VAR_3);
 u8 VAR_5;


 FUNC_1(VAR_4);
 FUNC_5(VAR_2, FUNC_0(VAR_4));

 FUNC_3(VAR_4->pdev, VAR_0, 0x0);
 FUNC_2(VAR_4->pdev, VAR_0, &VAR_5);


 return VAR_5 & VAR_1;
}
