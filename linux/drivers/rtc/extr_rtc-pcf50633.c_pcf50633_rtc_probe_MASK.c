
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcf50633_rtc {int pcf; int rtc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct pcf50633_rtc* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int *,int ) ;
 int FUNC_5 (int ,int ,int ,struct pcf50633_rtc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct platform_device*,struct pcf50633_rtc*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct pcf50633_rtc *VAR_7;

 VAR_7 = FUNC_3(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->pcf = FUNC_2(VAR_6->dev.parent);
 FUNC_6(VAR_6, VAR_7);
 VAR_7->rtc_dev = FUNC_4(&VAR_6->dev, "pcf50633-rtc",
    &VAR_5, VAR_3);

 if (FUNC_0(VAR_7->rtc_dev))
  return FUNC_1(VAR_7->rtc_dev);

 FUNC_5(VAR_7->pcf, VAR_2,
     VAR_4, VAR_7);
 return 0;
}
