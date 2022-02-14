
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int max_pasid_log; } ;
struct ocxl_fn {scalar_t__ pasid_base; TYPE_2__ dev; TYPE_1__ config; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 int FUNC_1 (struct pci_dev*,int*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ocxl_fn *VAR_1)
{
 struct pci_dev *VAR_2 = FUNC_2(VAR_1->dev.parent);
 int VAR_3, VAR_4, VAR_5;


 if (VAR_1->config.max_pasid_log < 0)
  return 0;

 VAR_3 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_4 = 1 << VAR_1->config.max_pasid_log;

 if (VAR_4 > VAR_5) {
  FUNC_0(&VAR_1->dev,
   "Function requires more PASIDs than is available (%d vs. %d)\n",
   VAR_4, VAR_5);
  return -VAR_0;
 }

 VAR_1->pasid_base = 0;
 return 0;
}
