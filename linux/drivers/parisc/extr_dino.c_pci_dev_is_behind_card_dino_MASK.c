
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct dino_device {TYPE_3__ hba; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int bridge; } ;


 struct dino_device* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0)
{
 struct dino_device *VAR_1;

 VAR_1 = FUNC_0(FUNC_2(VAR_0->bus->bridge));
 return FUNC_1(&VAR_1->hba.dev->id);
}
