
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_3__ {scalar_t__ gen; } ;
struct TYPE_4__ {TYPE_1__ sb_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;

int FUNC_2(struct pci_dev *VAR_3)
{

 FUNC_1();
 if (VAR_2.sb_type.gen == VAR_1 ||
     VAR_2.sb_type.gen == VAR_0) {
  FUNC_0(&VAR_3->dev, "QUIRK: Enable AMD remote wakeup fix\n");
  return 1;
 }
 return 0;
}
