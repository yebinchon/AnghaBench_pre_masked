
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct slot {scalar_t__ state; } ;
struct pci_func {int presence_save; scalar_t__ switch_save; } ;
struct event_info {int hp_slot; int event_type; } ;
struct controller {size_t next_event; int push_button; int ctrl_int_comp; scalar_t__ hpc_reg; struct event_info* event_queue; scalar_t__ slot_device_offset; int bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct slot* FUNC_0 (struct controller*,int) ;
 struct pci_func* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_4(u16 VAR_11, struct controller *VAR_12)
{
 int VAR_13;
 u8 VAR_14 = 0;
 u8 VAR_15;
 u16 VAR_16;
 struct pci_func *VAR_17;
 struct event_info *VAR_18;
 struct slot *VAR_19;

 if (!VAR_11)
  return 0;




 FUNC_2("cpqsbd:  Presence/Notify input change.\n");
 FUNC_2("         Changed bits are 0x%4.4x\n", VAR_11);

 for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
  if (VAR_11 & (0x0101 << VAR_13)) {



   VAR_17 = FUNC_1(VAR_12->bus,
    (VAR_13 + VAR_12->slot_device_offset), 0);

   VAR_18 = &(VAR_12->event_queue[VAR_12->next_event]);
   VAR_12->next_event = (VAR_12->next_event + 1) % 10;
   VAR_18->hp_slot = VAR_13;

   VAR_14++;

   VAR_19 = FUNC_0(VAR_12, VAR_13 + (FUNC_3(VAR_12->hpc_reg + VAR_10) >> 4));
   if (!VAR_19)
    return 0;




   if (VAR_17->switch_save && (VAR_12->push_button == 1)) {
    VAR_16 = VAR_12->ctrl_int_comp >> 16;
    VAR_15 = (VAR_16 >> VAR_13) & 0x01;
    VAR_15 |= (VAR_16 >> (VAR_13 + 7)) & 0x02;

    if (VAR_15 != VAR_17->presence_save) {



     FUNC_2("hp_slot %d button pressed\n", VAR_13);
     VAR_18->event_type = VAR_4;
    } else {



     FUNC_2("hp_slot %d button released\n", VAR_13);
     VAR_18->event_type = VAR_5;


     if ((VAR_19->state == VAR_1)
         || (VAR_19->state == VAR_0)) {
      VAR_18->event_type = VAR_2;
      FUNC_2("hp_slot %d button cancel\n", VAR_13);
     } else if ((VAR_19->state == VAR_9)
         || (VAR_19->state == VAR_8)) {

      VAR_18->event_type = VAR_3;
      FUNC_2("hp_slot %d button ignore\n", VAR_13);
     }
    }
   } else {



    VAR_16 = VAR_12->ctrl_int_comp >> 16;
    VAR_17->presence_save = (VAR_16 >> VAR_13) & 0x01;
    VAR_17->presence_save |= (VAR_16 >> (VAR_13 + 7)) & 0x02;

    if ((!(VAR_12->ctrl_int_comp & (0x010000 << VAR_13))) ||
        (!(VAR_12->ctrl_int_comp & (0x01000000 << VAR_13)))) {

     VAR_18->event_type = VAR_7;
    } else {

     VAR_18->event_type = VAR_6;
    }
   }
  }
 }

 return VAR_14;
}
