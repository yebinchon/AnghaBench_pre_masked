
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct gem_init_block {int dummy; } ;
struct gem {int regs; int gblock_dvma; int init_block; int reset_task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 struct gem* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pci_dev*,int,int ,int ) ;
 struct net_device* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1) {
  struct gem *VAR_2 = FUNC_3(VAR_1);

  FUNC_7(VAR_1);


  FUNC_0(&VAR_2->reset_task);


  FUNC_4(VAR_0,
        sizeof(struct gem_init_block),
        VAR_2->init_block,
        VAR_2->gblock_dvma);
  FUNC_2(VAR_2->regs);
  FUNC_6(VAR_0);
  FUNC_1(VAR_1);
 }
}
