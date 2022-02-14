
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int vfs; int afvf_wq_info; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct rvu*) ;
 int FUNC_6 (struct rvu*) ;
 int FUNC_7 (struct rvu*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct rvu*,int *,int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct rvu *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5, VAR_6, VAR_7;

 if (!FUNC_5(VAR_3)) {
  FUNC_0(&VAR_4->dev,
    "Skipping SRIOV enablement since not enough IRQs are available\n");
  return 0;
 }

 VAR_6 = FUNC_1();
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_4(VAR_4);


 if (VAR_7 > VAR_6)
  VAR_7 = VAR_6;






 if (VAR_7 & 0x1) {
  FUNC_0(&VAR_4->dev,
    "Number of VFs should be even. Enabling %d out of %d.\n",
    VAR_7 - 1, VAR_7);
  VAR_7--;
 }

 if (!VAR_7)
  return 0;





 VAR_3->vfs = VAR_7;

 VAR_5 = FUNC_9(VAR_3, &VAR_3->afvf_wq_info, VAR_0, VAR_7,
       VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_7(VAR_3);

 FUNC_2();

 VAR_5 = FUNC_3(VAR_4, VAR_7);
 if (VAR_5) {
  FUNC_6(VAR_3);
  FUNC_8(&VAR_3->afvf_wq_info);
  return VAR_5;
 }

 return 0;
}
