
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slgt_info {int port_count; int irq_requested; TYPE_1__* pdev; int line; int port; int gpio_present; int init_error; int irq_level; int device_name; int irq_flags; int reg_addr; int lock; int port_array; } ;
struct pci_dev {scalar_t__ device; } ;
typedef int port_array ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*) ;
 struct slgt_info* FUNC_3 (int,int,struct pci_dev*) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (struct slgt_info*) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (int ,struct slgt_info**,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,struct slgt_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int *) ;

__attribute__((used)) static void FUNC_12(int VAR_5, struct pci_dev *VAR_6)
{
 struct slgt_info *VAR_7[VAR_0];
 int VAR_8;
 int VAR_9 = 1;

 if (VAR_6->device == VAR_1)
  VAR_9 = 2;
 else if (VAR_6->device == VAR_2)
  VAR_9 = 4;


 for (VAR_8=0; VAR_8 < VAR_9; ++VAR_8) {
  VAR_7[VAR_8] = FUNC_3(VAR_5, VAR_8, VAR_6);
  if (VAR_7[VAR_8] == ((void*)0)) {
   for (--VAR_8; VAR_8 >= 0; --VAR_8) {
    FUNC_10(&VAR_7[VAR_8]->port);
    FUNC_6(VAR_7[VAR_8]);
   }
   return;
  }
 }


 for (VAR_8=0; VAR_8 < VAR_9; ++VAR_8) {
  FUNC_7(VAR_7[VAR_8]->port_array, VAR_7, sizeof(VAR_7));
  FUNC_2(VAR_7[VAR_8]);
  VAR_7[VAR_8]->port_count = VAR_9;
  FUNC_9(&VAR_7[VAR_8]->lock);
 }


 if (!FUNC_5(VAR_7[0])) {

  FUNC_4(VAR_7[0]);


  for (VAR_8 = 1; VAR_8 < VAR_9; ++VAR_8) {
   VAR_7[VAR_8]->irq_level = VAR_7[0]->irq_level;
   VAR_7[VAR_8]->reg_addr = VAR_7[0]->reg_addr;
   FUNC_4(VAR_7[VAR_8]);
  }

  if (FUNC_8(VAR_7[0]->irq_level,
     VAR_4,
     VAR_7[0]->irq_flags,
     VAR_7[0]->device_name,
     VAR_7[0]) < 0) {
   FUNC_0(("%s request_irq failed IRQ=%d\n",
    VAR_7[0]->device_name,
    VAR_7[0]->irq_level));
  } else {
   VAR_7[0]->irq_requested = 1;
   FUNC_1(VAR_7[0]);
   for (VAR_8=1 ; VAR_8 < VAR_9 ; VAR_8++) {
    VAR_7[VAR_8]->init_error = VAR_7[0]->init_error;
    VAR_7[VAR_8]->gpio_present = VAR_7[0]->gpio_present;
   }
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8) {
  struct slgt_info *VAR_10 = VAR_7[VAR_8];
  FUNC_11(&VAR_10->port, VAR_3, VAR_10->line,
    &VAR_10->pdev->dev);
 }
}
