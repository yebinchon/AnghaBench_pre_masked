
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct cas_init_block {int dummy; } ;
struct cas {int regs; int block_dvma; int init_block; scalar_t__ orig_cacheline_size; int pm_mutex; scalar_t__ hw_running; int reset_task; int fw_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct cas* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int,int ,int ) ;
 struct net_device* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ,scalar_t__) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_1)
{
 struct net_device *VAR_2 = FUNC_8(VAR_1);
 struct cas *VAR_3;
 if (!VAR_2)
  return;

 VAR_3 = FUNC_5(VAR_2);
 FUNC_12(VAR_2);

 FUNC_13(VAR_3->fw_data);

 FUNC_3(&VAR_3->pm_mutex);
 FUNC_0(&VAR_3->reset_task);
 if (VAR_3->hw_running)
  FUNC_1(VAR_3);
 FUNC_4(&VAR_3->pm_mutex);


 if (VAR_3->orig_cacheline_size) {



  FUNC_11(VAR_1, VAR_0,
          VAR_3->orig_cacheline_size);
 }

 FUNC_7(VAR_1, sizeof(struct cas_init_block),
       VAR_3->init_block, VAR_3->block_dvma);
 FUNC_9(VAR_1, VAR_3->regs);
 FUNC_2(VAR_2);
 FUNC_10(VAR_1);
 FUNC_6(VAR_1);
}
