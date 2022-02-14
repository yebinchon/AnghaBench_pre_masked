
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * event_queue; int * sense_buffer_phys; scalar_t__* sense_buffer_virt; TYPE_1__* tw_pci_dev; int * generic_buffer_phys; scalar_t__* generic_buffer_virt; int * command_packet_phys; scalar_t__* command_packet_virt; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_2__ TW_Device_Extension ;
typedef int TW_Command_Full ;
typedef int TW_Command_Apache_Header ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(TW_Device_Extension *VAR_2)
{
 if (VAR_2->command_packet_virt[0])
  FUNC_0(&VAR_2->tw_pci_dev->dev,
        sizeof(TW_Command_Full)*VAR_0,
        VAR_2->command_packet_virt[0],
        VAR_2->command_packet_phys[0]);

 if (VAR_2->generic_buffer_virt[0])
  FUNC_0(&VAR_2->tw_pci_dev->dev,
        VAR_1*VAR_0,
        VAR_2->generic_buffer_virt[0],
        VAR_2->generic_buffer_phys[0]);

 if (VAR_2->sense_buffer_virt[0])
  FUNC_0(&VAR_2->tw_pci_dev->dev,
        sizeof(TW_Command_Apache_Header)*
        VAR_0,
        VAR_2->sense_buffer_virt[0],
        VAR_2->sense_buffer_phys[0]);

 FUNC_1(VAR_2->event_queue[0]);
}
