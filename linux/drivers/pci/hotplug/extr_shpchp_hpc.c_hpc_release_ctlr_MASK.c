
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct controller {int num_slots; int mmio_size; int mmio_base; int creg; TYPE_1__* pci_dev; int poll_timer; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int FUNC_1 (struct controller*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct controller*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct controller*,int ) ;
 int FUNC_8 (struct controller*,int ,int) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_9(struct controller *VAR_15)
{
 int VAR_16;
 u32 VAR_17, VAR_18;




 for (VAR_16 = 0; VAR_16 < VAR_15->num_slots; VAR_16++) {
  VAR_17 = FUNC_7(VAR_15, FUNC_0(VAR_16));
  VAR_17 |= (VAR_10 | VAR_7 |
        VAR_1 | VAR_8 |
        VAR_3 | VAR_9 |
        VAR_4);
  VAR_17 &= ~VAR_13;
  FUNC_8(VAR_15, FUNC_0(VAR_16), VAR_17);
 }

 FUNC_1(VAR_15);




 VAR_18 = FUNC_7(VAR_15, VAR_11);
 VAR_18 |= (VAR_5 | VAR_6 |
       VAR_2 | VAR_0);
 VAR_18 &= ~VAR_12;
 FUNC_8(VAR_15, VAR_11, VAR_18);

 if (VAR_14)
  FUNC_2(&VAR_15->poll_timer);
 else {
  FUNC_3(VAR_15->pci_dev->irq, VAR_15);
  FUNC_5(VAR_15->pci_dev);
 }

 FUNC_4(VAR_15->creg);
 FUNC_6(VAR_15->mmio_base, VAR_15->mmio_size);
}
