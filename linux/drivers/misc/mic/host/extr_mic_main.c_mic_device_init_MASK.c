
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int revision; } ;
struct TYPE_2__ {scalar_t__ next_avail_src; } ;
struct mic_device {TYPE_1__ irq_info; int mic_mutex; int stepping; int family; struct pci_dev* pdev; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct mic_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct mic_device *VAR_0, struct pci_dev *VAR_1)
{
 VAR_0->pdev = VAR_1;
 VAR_0->family = FUNC_0(VAR_1);
 VAR_0->stepping = VAR_1->revision;
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->mic_mutex);
 VAR_0->irq_info.next_avail_src = 0;
}
