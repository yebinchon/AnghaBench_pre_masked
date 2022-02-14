
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnxt {int wol; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct net_device*) ;
 struct bnxt* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct net_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_3)
{
 struct net_device *VAR_4 = FUNC_6(VAR_3);
 struct bnxt *VAR_5;

 if (!VAR_4)
  return;

 FUNC_9();
 VAR_5 = FUNC_3(VAR_4);
 if (!VAR_5)
  goto shutdown_exit;

 if (FUNC_4(VAR_4))
  FUNC_2(VAR_4);

 FUNC_1(VAR_5);

 if (VAR_2 == VAR_1) {
  FUNC_0(VAR_5);
  FUNC_5(VAR_3);
  FUNC_8(VAR_3, VAR_5->wol);
  FUNC_7(VAR_3, VAR_0);
 }

shutdown_exit:
 FUNC_10();
}
