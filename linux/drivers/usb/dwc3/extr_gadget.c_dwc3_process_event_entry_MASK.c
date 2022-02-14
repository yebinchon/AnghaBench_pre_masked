
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int is_devspec; } ;
union dwc3_event {int raw; int devt; TYPE_1__ type; int depevt; } ;
struct dwc3 {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dwc3*,int *) ;
 int FUNC_2 (struct dwc3*,int *) ;
 int FUNC_3 (int ,struct dwc3*) ;

__attribute__((used)) static void FUNC_4(struct dwc3 *VAR_1,
  const union dwc3_event *VAR_2)
{
 FUNC_3(VAR_2->raw, VAR_1);

 if (!VAR_2->type.is_devspec)
  FUNC_1(VAR_1, &VAR_2->depevt);
 else if (VAR_2->type.type == VAR_0)
  FUNC_2(VAR_1, &VAR_2->devt);
 else
  FUNC_0(VAR_1->dev, "UNKNOWN IRQ type %d\n", VAR_2->raw);
}
