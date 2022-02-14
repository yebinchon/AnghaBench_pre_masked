
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charger_manager {TYPE_1__* desc; int dev; } ;
typedef enum cm_event_types { ____Placeholder_cm_event_types } cm_event_types ;
struct TYPE_2__ {scalar_t__ polling_interval_ms; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct charger_manager*) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct charger_manager*,int ) ;

__attribute__((used)) static void FUNC_4(struct charger_manager *VAR_3,
   enum cm_event_types VAR_4)
{
 if (VAR_0)
  FUNC_0(VAR_3->dev, 1);

 if (FUNC_1(VAR_3) && VAR_3->desc->polling_interval_ms)
  FUNC_2(&VAR_2);
 FUNC_3(VAR_3, VAR_1[VAR_4]);
}
