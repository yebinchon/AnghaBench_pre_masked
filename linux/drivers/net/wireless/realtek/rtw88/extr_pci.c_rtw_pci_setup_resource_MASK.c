
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_pci {struct pci_dev* pdev; } ;
struct rtw_dev {scalar_t__ priv; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct rtw_dev*,char*) ;
 int FUNC_1 (struct rtw_dev*) ;
 int FUNC_2 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_3 (struct rtw_dev*,struct pci_dev*) ;
 int FUNC_4 (struct rtw_dev*) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_0, struct pci_dev *VAR_1)
{
 struct rtw_pci *VAR_2;
 int VAR_3;

 VAR_2 = (struct rtw_pci *)VAR_0->priv;
 VAR_2->pdev = VAR_1;


 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_0, "failed to request pci io region\n");
  goto err_out;
 }

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_0, "failed to allocate pci resources\n");
  goto err_io_unmap;
 }

 FUNC_4(VAR_0);

 return 0;

err_io_unmap:
 FUNC_3(VAR_0, VAR_1);

err_out:
 return VAR_3;
}
