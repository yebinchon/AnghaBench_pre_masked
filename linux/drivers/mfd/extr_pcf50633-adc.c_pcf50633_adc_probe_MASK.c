
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcf50633_adc {int queue_mutex; int pcf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct pcf50633_adc* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,struct pcf50633_adc*) ;
 int FUNC_4 (struct platform_device*,struct pcf50633_adc*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct pcf50633_adc *VAR_5;

 VAR_5 = FUNC_1(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->pcf = FUNC_0(VAR_4->dev.parent);
 FUNC_4(VAR_4, VAR_5);

 FUNC_3(VAR_5->pcf, VAR_2,
     VAR_3, VAR_5);

 FUNC_2(&VAR_5->queue_mutex);

 return 0;
}
