
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int dummy; } ;
struct pci_dev {int aer_cap; } ;
struct aer_rpc {int aer_fifo; struct pci_dev* rpd; } ;
struct aer_err_source {int status; int id; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct aer_rpc* FUNC_0 (struct pcie_device*) ;
 int FUNC_1 (int *,struct aer_err_source) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct pcie_device *VAR_9 = (struct pcie_device *)VAR_8;
 struct aer_rpc *VAR_10 = FUNC_0(VAR_9);
 struct pci_dev *VAR_11 = VAR_10->rpd;
 struct aer_err_source VAR_12 = {};
 int VAR_13 = VAR_11->aer_cap;

 FUNC_2(VAR_11, VAR_13 + VAR_5, &VAR_12.status);
 if (!(VAR_12.status & (VAR_6|VAR_3)))
  return VAR_1;

 FUNC_2(VAR_11, VAR_13 + VAR_4, &VAR_12.id);
 FUNC_3(VAR_11, VAR_13 + VAR_5, VAR_12.status);

 if (!FUNC_1(&VAR_10->aer_fifo, VAR_12))
  return VAR_0;

 return VAR_2;
}
