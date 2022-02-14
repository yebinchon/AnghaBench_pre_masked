
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct be_adapter {int num_msix_roce_vec; int num_msix_vec; TYPE_2__* msix_entries; TYPE_1__* pdev; int cfg_num_tx_irqs; int cfg_num_rx_irqs; } ;
struct TYPE_4__ {unsigned int entry; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct be_adapter*) ;
 unsigned int FUNC_1 (struct be_adapter*) ;
 unsigned int FUNC_2 (struct be_adapter*) ;
 scalar_t__ FUNC_3 (struct be_adapter*) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (unsigned int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_11(struct be_adapter *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 struct device *VAR_4 = &VAR_1->pdev->dev;
 int VAR_5;





 if (FUNC_3(VAR_1)) {
  VAR_3 =
   FUNC_1(VAR_1) - FUNC_2(VAR_1);
  VAR_3 = FUNC_8(VAR_3, FUNC_9());
  VAR_5 = FUNC_0(VAR_1) + VAR_3;
 } else {
  VAR_5 = FUNC_7(VAR_1->cfg_num_rx_irqs,
         VAR_1->cfg_num_tx_irqs);
 }

 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++)
  VAR_1->msix_entries[VAR_2].entry = VAR_2;

 VAR_5 = FUNC_10(VAR_1->pdev, VAR_1->msix_entries,
     VAR_0, VAR_5);
 if (VAR_5 < 0)
  goto fail;

 if (FUNC_3(VAR_1) && VAR_5 > VAR_0) {
  VAR_1->num_msix_roce_vec = VAR_5 / 2;
  FUNC_5(VAR_4, "enabled %d MSI-x vector(s) for RoCE\n",
    VAR_1->num_msix_roce_vec);
 }

 VAR_1->num_msix_vec = VAR_5 - VAR_1->num_msix_roce_vec;

 FUNC_5(VAR_4, "enabled %d MSI-x vector(s) for NIC\n",
   VAR_1->num_msix_vec);
 return 0;

fail:
 FUNC_6(VAR_4, "MSIx enable failed\n");


 if (FUNC_4(VAR_1))
  return VAR_5;
 return 0;
}
