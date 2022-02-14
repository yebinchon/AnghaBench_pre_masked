
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf50633_adc {int queue_head; TYPE_1__** queue; } ;
struct pcf50633 {int dummy; } ;
struct TYPE_2__ {int avg; int mux; } ;


 struct pcf50633_adc* FUNC_0 (struct pcf50633*) ;
 int FUNC_1 (struct pcf50633*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pcf50633 *VAR_0)
{
 struct pcf50633_adc *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = VAR_1->queue_head;

 if (!VAR_1->queue[VAR_2])
  return;

 FUNC_1(VAR_0, VAR_1->queue[VAR_2]->mux, VAR_1->queue[VAR_2]->avg);
}
