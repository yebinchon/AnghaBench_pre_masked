
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct meson_vrtc_data {TYPE_1__* rtc; TYPE_1__* io_alarm; } ;
struct TYPE_6__ {int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 struct meson_vrtc_data* FUNC_3 (int *,int,int ) ;
 TYPE_1__* FUNC_4 (struct platform_device*,int ) ;
 TYPE_1__* FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct platform_device*,struct meson_vrtc_data*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct meson_vrtc_data *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->io_alarm = FUNC_4(VAR_3, 0);
 if (FUNC_0(VAR_4->io_alarm))
  return FUNC_1(VAR_4->io_alarm);

 FUNC_2(&VAR_3->dev, 1);

 FUNC_6(VAR_3, VAR_4);

 VAR_4->rtc = FUNC_5(&VAR_3->dev);
 if (FUNC_0(VAR_4->rtc))
  return FUNC_1(VAR_4->rtc);

 VAR_4->rtc->ops = &VAR_2;
 VAR_5 = FUNC_7(VAR_4->rtc);
 if (VAR_5)
  return VAR_5;

 return 0;
}
