
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct ice_pf {int hw; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct ice_pf* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static pci_ers_result_t FUNC_10(struct pci_dev *VAR_3)
{
 struct ice_pf *VAR_4 = FUNC_4(VAR_3);
 pci_ers_result_t VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6) {
  FUNC_1(&VAR_3->dev,
   "Cannot re-enable PCI device after reset, error %d\n",
   VAR_6);
  VAR_5 = VAR_1;
 } else {
  FUNC_7(VAR_3);
  FUNC_5(VAR_3);
  FUNC_6(VAR_3);
  FUNC_8(VAR_3, 0);


  VAR_7 = FUNC_9(&VAR_4->hw, VAR_0);
  if (!VAR_7)
   VAR_5 = VAR_2;
  else
   VAR_5 = VAR_1;
 }

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6)
  FUNC_0(&VAR_3->dev,
   "pci_cleanup_aer_uncorrect_error_status failed, error %d\n",
   VAR_6);


 return VAR_5;
}
