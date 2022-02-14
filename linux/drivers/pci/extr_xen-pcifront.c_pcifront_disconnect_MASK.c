
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct pcifront_device* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pcifront_device *VAR_2)
{
 FUNC_1(&VAR_1);

 if (VAR_2 == VAR_0) {
  FUNC_0(&VAR_2->xdev->dev,
    "Disconnecting PCI Frontend Buses\n");
  VAR_0 = ((void*)0);
 }

 FUNC_2(&VAR_1);
}
