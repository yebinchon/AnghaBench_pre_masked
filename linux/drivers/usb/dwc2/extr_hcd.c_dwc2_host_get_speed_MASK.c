
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; } ;
struct dwc2_hsotg {int dummy; } ;
struct TYPE_2__ {int speed; } ;



int FUNC_0(struct dwc2_hsotg *VAR_0, void *VAR_1)
{
 struct urb *VAR_2 = VAR_1;

 return VAR_2->dev->speed;
}
