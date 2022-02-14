
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ expires; } ;
struct rtc_test_data {TYPE_2__* rtc; TYPE_1__ alarm; } ;
struct platform_device {int id; int dev; } ;
struct TYPE_7__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 struct rtc_test_data* FUNC_3 (int *,int,int ) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (struct platform_device*,struct rtc_test_data*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct rtc_test_data *VAR_6;

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_5(VAR_5, VAR_6);

 VAR_6->rtc = FUNC_4(&VAR_5->dev);
 if (FUNC_0(VAR_6->rtc))
  return FUNC_1(VAR_6->rtc);

 switch (VAR_5->id) {
 case 0:
  VAR_6->rtc->ops = &VAR_4;
  break;
 default:
  VAR_6->rtc->ops = &VAR_3;
  FUNC_2(&VAR_5->dev, 1);
 }

 FUNC_7(&VAR_6->alarm, VAR_2, 0);
 VAR_6->alarm.expires = 0;

 return FUNC_6(VAR_6->rtc);
}
