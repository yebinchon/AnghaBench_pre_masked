
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int slot; } ;
struct TYPE_5__ {int type; } ;
struct pci_child_message {TYPE_2__ wslot; TYPE_1__ message_type; } ;
struct hv_pcibus_device {int dummy; } ;
struct TYPE_7__ {int slot; } ;
struct TYPE_8__ {TYPE_3__ win_slot; } ;
struct hv_pci_dev {TYPE_4__ desc; } ;
struct hv_device {int channel; } ;
typedef int pkt ;


 int VAR_0 ;
 int VAR_1 ;
 struct hv_pci_dev* FUNC_0 (struct hv_pcibus_device*,int) ;
 struct hv_pcibus_device* FUNC_1 (struct hv_device*) ;
 int FUNC_2 (struct pci_child_message*,int ,int) ;
 int FUNC_3 (struct hv_pci_dev*) ;
 int FUNC_4 (int ,struct pci_child_message*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_2)
{
 struct hv_pcibus_device *VAR_3 = FUNC_1(VAR_2);
 struct pci_child_message VAR_4;
 struct hv_pci_dev *VAR_5;
 u32 VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
  VAR_5 = FUNC_0(VAR_3, VAR_6);
  if (!VAR_5)
   continue;

  FUNC_2(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.message_type.type = VAR_0;
  VAR_4.wslot.slot = VAR_5->desc.win_slot.slot;

  FUNC_3(VAR_5);

  VAR_7 = FUNC_4(VAR_2->channel, &VAR_4, sizeof(VAR_4), 0,
           VAR_1, 0);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
