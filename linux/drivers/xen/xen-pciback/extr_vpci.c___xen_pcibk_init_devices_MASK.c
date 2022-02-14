
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_device {struct vpci_dev_data* pci_dev_data; } ;
struct vpci_dev_data {int * dev_list; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct vpci_dev_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct xen_pcibk_device *VAR_3)
{
 int VAR_4;
 struct vpci_dev_data *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(&VAR_5->lock);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_0(&VAR_5->dev_list[VAR_4]);

 VAR_3->pci_dev_data = VAR_5;

 return 0;
}
