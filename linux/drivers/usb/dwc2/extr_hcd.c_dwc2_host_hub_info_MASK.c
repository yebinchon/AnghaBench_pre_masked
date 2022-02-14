
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {TYPE_3__* dev; } ;
struct dwc2_hsotg {int dummy; } ;
struct TYPE_6__ {int ttport; TYPE_2__* tt; } ;
struct TYPE_5__ {TYPE_1__* hub; } ;
struct TYPE_4__ {int devnum; } ;



__attribute__((used)) static void FUNC_0(struct dwc2_hsotg *VAR_0, void *VAR_1,
          int *VAR_2, int *VAR_3)
{
 struct urb *VAR_4 = VAR_1;

 if (VAR_4->dev->tt)
  *VAR_2 = VAR_4->dev->tt->hub->devnum;
 else
  *VAR_2 = 0;
 *VAR_3 = VAR_4->dev->ttport;
}
