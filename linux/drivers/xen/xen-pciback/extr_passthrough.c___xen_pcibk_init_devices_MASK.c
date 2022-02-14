
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pcibk_device {struct passthrough_dev_data* pci_dev_data; } ;
struct passthrough_dev_data {int dev_list; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct passthrough_dev_data* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct xen_pcibk_device *VAR_2)
{
 struct passthrough_dev_data *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_3->lock);

 FUNC_0(&VAR_3->dev_list);

 VAR_2->pci_dev_data = VAR_3;

 return 0;
}
