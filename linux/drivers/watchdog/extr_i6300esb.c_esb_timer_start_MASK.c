
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int status; } ;
struct esb_dev {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct esb_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct esb_dev*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int *) ;
 struct esb_dev* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct watchdog_device *VAR_5)
{
 struct esb_dev *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = FUNC_3(VAR_4, &VAR_5->status);
 u8 VAR_8;

 FUNC_1(VAR_6);
 FUNC_5(VAR_3, FUNC_0(VAR_6));

 VAR_8 = VAR_1 | (VAR_7 ? VAR_2 : 0x00);
 FUNC_2(VAR_6->pdev, VAR_0, VAR_8);
 return 0;
}
