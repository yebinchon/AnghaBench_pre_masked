
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct pcf50633_adc {int queue_head; int queue_mutex; int * queue; TYPE_1__* pcf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 struct pcf50633_adc* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct pcf50633_adc *VAR_3 = FUNC_6(VAR_2);
 int VAR_4, VAR_5;

 FUNC_5(VAR_3->pcf, VAR_0);

 FUNC_3(&VAR_3->queue_mutex);
 VAR_5 = VAR_3->queue_head;

 if (FUNC_0(VAR_3->queue[VAR_5]))
  FUNC_1(VAR_3->pcf->dev,
   "adc driver removed with request pending\n");

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_2(VAR_3->queue[VAR_4]);

 FUNC_4(&VAR_3->queue_mutex);

 return 0;
}
