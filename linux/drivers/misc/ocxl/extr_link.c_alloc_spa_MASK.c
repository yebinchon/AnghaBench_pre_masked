
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fault_work; } ;
struct spa {struct ocxl_process_element* spa_mem; scalar_t__ spa_order; TYPE_1__ xsl_fault; int pe_tree; int spa_lock; } ;
struct pci_dev {int dev; } ;
struct ocxl_process_element {int dummy; } ;
struct ocxl_link {struct spa* spa; int dev; int bus; int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct spa*) ;
 struct spa* FUNC_5 (int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int ,int ,struct ocxl_process_element*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_6, struct ocxl_link *VAR_7)
{
 struct spa *VAR_8;

 VAR_8 = FUNC_5(sizeof(struct spa), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_6(&VAR_8->spa_lock);
 FUNC_0(&VAR_8->pe_tree, VAR_1);
 FUNC_1(&VAR_8->xsl_fault.fault_work, VAR_5);

 VAR_8->spa_order = VAR_3 - VAR_2;
 VAR_8->spa_mem = (struct ocxl_process_element *)
  FUNC_2(VAR_1 | VAR_4, VAR_8->spa_order);
 if (!VAR_8->spa_mem) {
  FUNC_3(&VAR_6->dev, "Can't allocate Shared Process Area\n");
  FUNC_4(VAR_8);
  return -VAR_0;
 }
 FUNC_7("Allocated SPA for %x:%x:%x at %p\n", VAR_7->domain, VAR_7->bus,
  VAR_7->dev, VAR_8->spa_mem);

 VAR_7->spa = VAR_8;
 return 0;
}
