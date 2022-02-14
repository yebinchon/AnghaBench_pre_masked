
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int slot; } ;
struct TYPE_9__ {int type; } ;
struct pci_resources_assigned2 {TYPE_4__ wslot; TYPE_3__ message_type; } ;
struct TYPE_8__ {int slot; } ;
struct TYPE_7__ {int type; } ;
struct pci_resources_assigned {TYPE_2__ wslot; TYPE_1__ message_type; } ;
struct pci_packet {int message; struct hv_pci_compl* compl_ctxt; int completion_func; } ;
struct hv_pcibus_device {int dummy; } ;
struct TYPE_11__ {int slot; } ;
struct TYPE_12__ {TYPE_5__ win_slot; } ;
struct hv_pci_dev {TYPE_6__ desc; } ;
struct hv_pci_compl {scalar_t__ completion_status; int host_event; } ;
struct hv_device {int device; int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 struct hv_pci_dev* FUNC_1 (struct hv_pcibus_device*,int) ;
 struct hv_pcibus_device* FUNC_2 (struct hv_device*) ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_packet*) ;
 struct pci_packet* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_packet*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (struct hv_pci_dev*) ;
 int FUNC_8 (int ,int *,size_t,unsigned long,int ,int ) ;
 int FUNC_9 (struct hv_device*,int *) ;

__attribute__((used)) static int FUNC_10(struct hv_device *VAR_10)
{
 struct hv_pcibus_device *VAR_11 = FUNC_2(VAR_10);
 struct pci_resources_assigned *VAR_12;
 struct pci_resources_assigned2 *VAR_13;
 struct hv_pci_compl VAR_14;
 struct hv_pci_dev *VAR_15;
 struct pci_packet *VAR_16;
 size_t VAR_17;
 u32 VAR_18;
 int VAR_19;

 VAR_17 = (VAR_9 < VAR_3)
   ? sizeof(*VAR_12) : sizeof(*VAR_13);

 VAR_16 = FUNC_5(sizeof(*VAR_16) + VAR_17, VAR_2);
 if (!VAR_16)
  return -VAR_0;

 VAR_19 = 0;

 for (VAR_18 = 0; VAR_18 < 256; VAR_18++) {
  VAR_15 = FUNC_1(VAR_11, VAR_18);
  if (!VAR_15)
   continue;

  FUNC_6(VAR_16, 0, sizeof(*VAR_16) + VAR_17);
  FUNC_3(&VAR_14.host_event);
  VAR_16->completion_func = VAR_8;
  VAR_16->compl_ctxt = &VAR_14;

  if (VAR_9 < VAR_3) {
   VAR_12 =
    (struct pci_resources_assigned *)&VAR_16->message;
   VAR_12->message_type.type =
    VAR_4;
   VAR_12->wslot.slot = VAR_15->desc.win_slot.slot;
  } else {
   VAR_13 =
    (struct pci_resources_assigned2 *)&VAR_16->message;
   VAR_13->message_type.type =
    VAR_5;
   VAR_13->wslot.slot = VAR_15->desc.win_slot.slot;
  }
  FUNC_7(VAR_15);

  VAR_19 = FUNC_8(VAR_10->channel, &VAR_16->message,
    VAR_17, (unsigned long)VAR_16,
    VAR_7,
    VAR_6);
  if (!VAR_19)
   VAR_19 = FUNC_9(VAR_10, &VAR_14.host_event);
  if (VAR_19)
   break;

  if (VAR_14.completion_status < 0) {
   VAR_19 = -VAR_1;
   FUNC_0(&VAR_10->device,
    "resource allocated returned 0x%x",
    VAR_14.completion_status);
   break;
  }
 }

 FUNC_4(VAR_16);
 return VAR_19;
}
