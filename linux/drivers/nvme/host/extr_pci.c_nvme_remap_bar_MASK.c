
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nvme_dev {unsigned long bar_mapped_size; scalar_t__ bar; scalar_t__ dbs; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct nvme_dev *VAR_2, unsigned long VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_4(VAR_2->dev);

 if (VAR_3 <= VAR_2->bar_mapped_size)
  return 0;
 if (VAR_3 > FUNC_2(VAR_4, 0))
  return -VAR_0;
 if (VAR_2->bar)
  FUNC_1(VAR_2->bar);
 VAR_2->bar = FUNC_0(FUNC_3(VAR_4, 0), VAR_3);
 if (!VAR_2->bar) {
  VAR_2->bar_mapped_size = 0;
  return -VAR_0;
 }
 VAR_2->bar_mapped_size = VAR_3;
 VAR_2->dbs = VAR_2->bar + VAR_1;

 return 0;
}
