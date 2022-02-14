
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct pci_version_request {void* protocol_version; TYPE_1__ message_type; } ;
struct pci_packet {int message; struct hv_pci_compl* compl_ctxt; int completion_func; } ;
struct hv_pci_compl {int host_event; int completion_status; } ;
struct hv_device {int device; int channel; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,void*) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_packet*) ;
 struct pci_packet* FUNC_5 (int,int ) ;
 void* VAR_8 ;
 void** VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct pci_version_request*,int,unsigned long,int ,int ) ;
 int FUNC_8 (struct hv_device*,int *) ;

__attribute__((used)) static int FUNC_9(struct hv_device *VAR_10)
{
 struct pci_version_request *VAR_11;
 struct hv_pci_compl VAR_12;
 struct pci_packet *VAR_13;
 int VAR_14;
 int VAR_15;







 VAR_13 = FUNC_5(sizeof(*VAR_13) + sizeof(*VAR_11), VAR_2);
 if (!VAR_13)
  return -VAR_0;

 FUNC_3(&VAR_12.host_event);
 VAR_13->completion_func = VAR_7;
 VAR_13->compl_ctxt = &VAR_12;
 VAR_11 = (struct pci_version_request *)&VAR_13->message;
 VAR_11->message_type.type = VAR_3;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_9); VAR_15++) {
  VAR_11->protocol_version = VAR_9[VAR_15];
  VAR_14 = FUNC_7(VAR_10->channel, VAR_11,
    sizeof(struct pci_version_request),
    (unsigned long)VAR_13, VAR_6,
    VAR_5);
  if (!VAR_14)
   VAR_14 = FUNC_8(VAR_10, &VAR_12.host_event);

  if (VAR_14) {
   FUNC_1(&VAR_10->device,
    "PCI Pass-through VSP failed to request version: %d",
    VAR_14);
   goto exit;
  }

  if (VAR_12.completion_status >= 0) {
   VAR_8 = VAR_9[VAR_15];
   FUNC_2(&VAR_10->device,
    "PCI VMBus probing: Using version %#x\n",
    VAR_8);
   goto exit;
  }

  if (VAR_12.completion_status != VAR_4) {
   FUNC_1(&VAR_10->device,
    "PCI Pass-through VSP failed version request: %#x",
    VAR_12.completion_status);
   VAR_14 = -VAR_1;
   goto exit;
  }

  FUNC_6(&VAR_12.host_event);
 }

 FUNC_1(&VAR_10->device,
  "PCI pass-through VSP failed to find supported version");
 VAR_14 = -VAR_1;

exit:
 FUNC_4(VAR_13);
 return VAR_14;
}
