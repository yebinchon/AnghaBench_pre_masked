
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {scalar_t__ priv; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct uio_info*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct uio_info* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct uio_info*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_4)
{
 struct uio_info *VAR_5 = FUNC_6(VAR_4);


 FUNC_3(VAR_0, VAR_5->priv + VAR_2);
 FUNC_2(VAR_0, VAR_5->priv + VAR_1);

 FUNC_0(VAR_5->priv + VAR_3);

 FUNC_8(VAR_5);
 FUNC_7(VAR_4);
 FUNC_5(VAR_4);
 FUNC_1(VAR_5->priv);

 FUNC_4(VAR_5);
}
