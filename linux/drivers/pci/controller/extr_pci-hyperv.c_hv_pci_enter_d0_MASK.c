
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_packet {int message; struct hv_pci_compl* compl_ctxt; int completion_func; } ;
struct TYPE_3__ {int type; } ;
struct pci_bus_d0_entry {int mmio_base; TYPE_1__ message_type; } ;
struct hv_pcibus_device {TYPE_2__* mem_config; } ;
struct hv_pci_compl {scalar_t__ completion_status; int host_event; } ;
struct hv_device {int device; int channel; } ;
struct TYPE_4__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 struct hv_pcibus_device* FUNC_1 (struct hv_device*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pci_packet*) ;
 struct pci_packet* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,struct pci_bus_d0_entry*,int,unsigned long,int ,int ) ;
 int FUNC_6 (struct hv_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct hv_device *VAR_7)
{
 struct hv_pcibus_device *VAR_8 = FUNC_1(VAR_7);
 struct pci_bus_d0_entry *VAR_9;
 struct hv_pci_compl VAR_10;
 struct pci_packet *VAR_11;
 int VAR_12;







 VAR_11 = FUNC_4(sizeof(*VAR_11) + sizeof(*VAR_9), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 FUNC_2(&VAR_10.host_event);
 VAR_11->completion_func = VAR_6;
 VAR_11->compl_ctxt = &VAR_10;
 VAR_9 = (struct pci_bus_d0_entry *)&VAR_11->message;
 VAR_9->message_type.type = VAR_3;
 VAR_9->mmio_base = VAR_8->mem_config->start;

 VAR_12 = FUNC_5(VAR_7->channel, VAR_9, sizeof(*VAR_9),
          (unsigned long)VAR_11, VAR_5,
          VAR_4);
 if (!VAR_12)
  VAR_12 = FUNC_6(VAR_7, &VAR_10.host_event);

 if (VAR_12)
  goto exit;

 if (VAR_10.completion_status < 0) {
  FUNC_0(&VAR_7->device,
   "PCI Pass-through VSP failed D0 Entry with status %x\n",
   VAR_10.completion_status);
  VAR_12 = -VAR_1;
  goto exit;
 }

 VAR_12 = 0;

exit:
 FUNC_3(VAR_11);
 return VAR_12;
}
