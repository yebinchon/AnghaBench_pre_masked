
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct dpc_dev {int cap_pos; scalar_t__ rp_extensions; TYPE_1__* dev; } ;
struct aer_err_info {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct pci_dev* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_1 (struct pci_dev*,struct aer_err_info*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_3 (struct dpc_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int VAR_6 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,char*,int,int) ;
 int FUNC_7 (struct pci_dev*,int,int*) ;
 int FUNC_8 (struct pci_dev*,char*,char*) ;
 int FUNC_9 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct aer_err_info VAR_9;
 struct dpc_dev *VAR_10 = VAR_8;
 struct pci_dev *VAR_11 = VAR_10->dev->port;
 u16 VAR_12 = VAR_10->cap_pos, VAR_13, VAR_14, VAR_15, VAR_16;

 FUNC_7(VAR_11, VAR_12 + VAR_3, &VAR_13);
 FUNC_7(VAR_11, VAR_12 + VAR_2, &VAR_14);

 FUNC_6(VAR_11, "containment event, status:%#06x source:%#06x\n",
   VAR_13, VAR_14);

 VAR_15 = (VAR_13 & VAR_4) >> 1;
 VAR_16 = (VAR_13 & VAR_5) >> 5;
 FUNC_8(VAR_11, "%s detected\n",
   (VAR_15 == 0) ? "unmasked uncorrectable error" :
   (VAR_15 == 1) ? "ERR_NONFATAL" :
   (VAR_15 == 2) ? "ERR_FATAL" :
   (VAR_16 == 0) ? "RP PIO error" :
   (VAR_16 == 1) ? "software trigger" :
         "reserved error");


 if (VAR_10->rp_extensions && VAR_15 == 3 && VAR_16 == 0)
  FUNC_3(VAR_10);
 else if (VAR_15 == 0 &&
   FUNC_2(VAR_11, &VAR_9) &&
   FUNC_0(VAR_11, &VAR_9)) {
  FUNC_1(VAR_11, &VAR_9);
  FUNC_5(VAR_11);
  FUNC_4(VAR_11);
 }


 FUNC_9(VAR_11, VAR_6, VAR_1);

 return VAR_0;
}
