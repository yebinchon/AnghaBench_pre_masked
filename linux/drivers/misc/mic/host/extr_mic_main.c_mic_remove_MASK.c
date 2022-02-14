
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int va; } ;
struct TYPE_3__ {int va; } ;
struct mic_device {int id; TYPE_2__ mmio; TYPE_1__ aper; int cosm_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mic_device*) ;
 int FUNC_4 (struct mic_device*) ;
 int FUNC_5 (struct mic_device*) ;
 int FUNC_6 (struct mic_device*,struct pci_dev*) ;
 int FUNC_7 (struct mic_device*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct mic_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_1)
{
 struct mic_device *VAR_2;

 VAR_2 = FUNC_9(VAR_1);
 if (!VAR_2)
  return;

 FUNC_0(VAR_2->cosm_dev);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_7(VAR_2);
 FUNC_6(VAR_2, VAR_1);
 FUNC_2(VAR_2->aper.va);
 FUNC_2(VAR_2->mmio.va);
 FUNC_10(VAR_1);
 FUNC_8(VAR_1);
 FUNC_1(&VAR_0, VAR_2->id);
 FUNC_3(VAR_2);
}
