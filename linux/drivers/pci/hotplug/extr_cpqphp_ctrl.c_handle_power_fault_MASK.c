
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_func {int status; } ;
struct event_info {int hp_slot; int event_type; } ;
struct controller {size_t next_event; int ctrl_int_comp; int rev; struct event_info* event_queue; scalar_t__ slot_device_offset; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct controller*,int) ;
 struct pci_func* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct controller*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct controller*) ;

__attribute__((used)) static u8 FUNC_5(u8 VAR_2, struct controller *VAR_3)
{
 int VAR_4;
 u8 VAR_5 = 0;
 struct pci_func *VAR_6;
 struct event_info *VAR_7;

 if (!VAR_2)
  return 0;





 FUNC_3("power fault interrupt\n");

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  if (VAR_2 & (0x01 << VAR_4)) {



   VAR_6 = FUNC_1(VAR_3->bus,
    (VAR_4 + VAR_3->slot_device_offset), 0);

   VAR_7 = &(VAR_3->event_queue[VAR_3->next_event]);
   VAR_3->next_event = (VAR_3->next_event + 1) % 10;
   VAR_7->hp_slot = VAR_4;

   VAR_5++;

   if (VAR_3->ctrl_int_comp & (0x00000100 << VAR_4)) {



    VAR_6->status = 0x00;

    VAR_7->event_type = VAR_1;
   } else {



    VAR_7->event_type = VAR_0;

    if (VAR_3->rev < 4) {
     FUNC_0(VAR_3, VAR_4);
     FUNC_2(VAR_3, VAR_4);
     FUNC_4(VAR_3);
    } else {

     VAR_6->status = 0xFF;
     FUNC_3("power fault bit %x set\n", VAR_4);
    }
   }
  }
 }

 return VAR_5;
}
