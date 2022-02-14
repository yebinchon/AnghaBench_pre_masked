
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct gasket_interrupt_data {int num_interrupts; int pack_width; TYPE_1__* interrupts; int interrupt_bar_index; } ;
struct gasket_dev {int dev; struct gasket_interrupt_data* interrupt_data; } ;
struct TYPE_2__ {int index; int packing; int reg; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct gasket_dev*,int ,int ) ;
 int FUNC_2 (struct gasket_dev*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gasket_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;
 ulong VAR_4;
 ulong VAR_5;
 struct gasket_interrupt_data *VAR_6 =
  VAR_1->interrupt_data;

 if (!VAR_6) {
  FUNC_0(VAR_1->dev, "Interrupt data is not initialized\n");
  return;
 }

 FUNC_0(VAR_1->dev, "Running interrupt setup\n");



 for (VAR_2 = 0; VAR_2 < VAR_6->num_interrupts; VAR_2++) {





  FUNC_0(VAR_1->dev,
   "Setting up interrupt index %d with index 0x%llx and packing %d\n",
   VAR_6->interrupts[VAR_2].index,
   VAR_6->interrupts[VAR_2].reg,
   VAR_6->interrupts[VAR_2].packing);
  if (VAR_6->interrupts[VAR_2].packing == VAR_0) {
   VAR_5 = VAR_6->interrupts[VAR_2].index;
  } else {
   switch (VAR_6->interrupts[VAR_2].packing) {
   case 131:
    VAR_3 = 0;
    break;
   case 130:
    VAR_3 = VAR_6->pack_width;
    break;
   case 129:
    VAR_3 = 2 * VAR_6->pack_width;
    break;
   case 128:
    VAR_3 = 3 * VAR_6->pack_width;
    break;
   default:
    FUNC_0(VAR_1->dev,
     "Found interrupt description with unknown enum %d\n",
     VAR_6->interrupts[VAR_2].packing);
    return;
   }

   VAR_4 = ~(0xFFFF << VAR_3);
   VAR_5 = FUNC_1(VAR_1,
         VAR_6->interrupt_bar_index,
         VAR_6->interrupts[VAR_2].reg);
   VAR_5 &= VAR_4;
   VAR_5 |= VAR_6->interrupts[VAR_2].index
     << VAR_3;
  }
  FUNC_2(VAR_1, VAR_5,
        VAR_6->interrupt_bar_index,
        VAR_6->interrupts[VAR_2].reg);
 }
}
