
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rocker {TYPE_1__* msix_entries; int port_count; struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct msix_entry {int dummy; } ;
struct TYPE_3__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct pci_dev*,TYPE_1__*,int) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct rocker *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_5 != FUNC_0(VAR_3->port_count))
  return -VAR_0;

 VAR_3->msix_entries = FUNC_2(VAR_5,
          sizeof(struct msix_entry),
          VAR_2);
 if (!VAR_3->msix_entries)
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  VAR_3->msix_entries[VAR_6].entry = VAR_6;

 VAR_7 = FUNC_3(VAR_4, VAR_3->msix_entries, VAR_5);
 if (VAR_7 < 0)
  goto err_enable_msix;

 return 0;

err_enable_msix:
 FUNC_1(VAR_3->msix_entries);
 return VAR_7;
}
