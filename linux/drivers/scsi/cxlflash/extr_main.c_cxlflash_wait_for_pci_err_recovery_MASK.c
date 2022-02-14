
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cxlflash_cfg {int reset_waitq; struct pci_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(struct cxlflash_cfg *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->dev;

 if (FUNC_0(VAR_2))
  FUNC_1(VAR_1->reset_waitq,
       !FUNC_0(VAR_2),
       VAR_0);
}
