
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dma_addr_t ;
struct TYPE_5__ {unsigned long** generic_buffer_virt; int * generic_buffer_phys; int ** command_packet_virt; int * command_packet_phys; TYPE_1__* tw_pci_dev; int host; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_2__ TW_Device_Extension ;
typedef int TW_Command_Full ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_3 ;
 unsigned long* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,unsigned long*,int ) ;
 int FUNC_3 (unsigned long*,int ,int) ;

__attribute__((used)) static int FUNC_4(TW_Device_Extension *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 dma_addr_t VAR_8;
 unsigned long *VAR_9;
 int VAR_10 = 1;

 VAR_9 = FUNC_1(&VAR_4->tw_pci_dev->dev,
   VAR_5 * VAR_3, &VAR_8, VAR_0);
 if (!VAR_9) {
  FUNC_0(VAR_4->host, VAR_2, 0x5, "Memory allocation failed");
  goto out;
 }

 if ((unsigned long)VAR_9 % (VAR_1)) {
  FUNC_0(VAR_4->host, VAR_2, 0x6, "Failed to allocate correctly aligned memory");
  FUNC_2(&VAR_4->tw_pci_dev->dev, VAR_5 * VAR_3,
    VAR_9, VAR_8);
  goto out;
 }

 FUNC_3(VAR_9, 0, VAR_5*VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  switch(VAR_6) {
  case 0:
   VAR_4->command_packet_phys[VAR_7] = VAR_8+(VAR_7*VAR_5);
   VAR_4->command_packet_virt[VAR_7] = (TW_Command_Full *)((unsigned char *)VAR_9 + (VAR_7*VAR_5));
   break;
  case 1:
   VAR_4->generic_buffer_phys[VAR_7] = VAR_8+(VAR_7*VAR_5);
   VAR_4->generic_buffer_virt[VAR_7] = (unsigned long *)((unsigned char *)VAR_9 + (VAR_7*VAR_5));
   break;
  }
 }
 VAR_10 = 0;
out:
 return VAR_10;
}
