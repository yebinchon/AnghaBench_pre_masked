
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct secocec_data {int cec_adap; int notifier; scalar_t__ ir; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct secocec_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct secocec_data *VAR_4 = FUNC_3(VAR_3);
 u16 VAR_5;

 if (VAR_4->ir) {
  FUNC_5(VAR_1, &VAR_5);

  FUNC_6(VAR_1, VAR_5 & ~VAR_2);

  FUNC_2(&VAR_3->dev, "IR disabled");
 }
 FUNC_0(VAR_4->notifier);
 FUNC_1(VAR_4->cec_adap);

 FUNC_4(VAR_0, 7);

 FUNC_2(&VAR_3->dev, "CEC device removed");

 return 0;
}
