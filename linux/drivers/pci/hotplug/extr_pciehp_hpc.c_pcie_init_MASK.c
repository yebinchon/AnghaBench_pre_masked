
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct pcie_device {struct pci_dev* port; } ;
struct pci_dev {scalar_t__ broken_cmd_compl; scalar_t__ is_thunderbolt; scalar_t__ hotplug_user_indicators; struct pci_bus* subordinate; } ;
struct pci_bus {int devices; } ;
struct controller {int slot_cap; int state; int button_work; int queue; int requester; int reset_lock; int state_lock; int ctrl_lock; struct pcie_device* pcie; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,char*) ;
 int FUNC_4 (struct controller*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct controller* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_23 ;
 int FUNC_11 (struct pci_dev*,int ,int*) ;
 int FUNC_12 (struct pci_dev*,int ,int) ;
 int FUNC_13 (struct controller*) ;
 int FUNC_14 (struct controller*) ;
 int FUNC_15 (struct controller*,scalar_t__*) ;
 int FUNC_16 (struct controller*) ;
 int VAR_24 ;
 int FUNC_17 (int *) ;

struct controller *FUNC_18(struct pcie_device *VAR_25)
{
 struct controller *VAR_26;
 u32 VAR_27, VAR_28;
 u8 VAR_29;
 struct pci_dev *VAR_30 = VAR_25->port;
 struct pci_bus *VAR_31 = VAR_30->subordinate;

 VAR_26 = FUNC_8(sizeof(*VAR_26), VAR_0);
 if (!VAR_26)
  return ((void*)0);

 VAR_26->pcie = VAR_25;
 FUNC_11(VAR_30, VAR_5, &VAR_27);

 if (VAR_30->hotplug_user_indicators)
  VAR_27 &= ~(VAR_7 | VAR_14);





 if (VAR_30->is_thunderbolt)
  VAR_27 |= VAR_12;

 VAR_26->slot_cap = VAR_27;
 FUNC_10(&VAR_26->ctrl_lock);
 FUNC_10(&VAR_26->state_lock);
 FUNC_6(&VAR_26->reset_lock);
 FUNC_7(&VAR_26->requester);
 FUNC_7(&VAR_26->queue);
 FUNC_1(&VAR_26->button_work, VAR_24);
 FUNC_4(VAR_26);

 FUNC_5(&VAR_23);
 VAR_26->state = FUNC_9(&VAR_31->devices) ? VAR_1 : VAR_2;
 FUNC_17(&VAR_23);


 FUNC_11(VAR_30, VAR_3, &VAR_28);


 FUNC_12(VAR_30, VAR_16,
  VAR_17 | VAR_22 |
  VAR_20 | VAR_18 |
  VAR_19 | VAR_21);

 FUNC_3(VAR_26, "Slot #%d AttnBtn%c PwrCtrl%c MRL%c AttnInd%c PwrInd%c HotPlug%c Surprise%c Interlock%c NoCompl%c LLActRep%c%s\n",
  (VAR_27 & VAR_15) >> 19,
  FUNC_0(VAR_27, VAR_6),
  FUNC_0(VAR_27, VAR_13),
  FUNC_0(VAR_27, VAR_11),
  FUNC_0(VAR_27, VAR_7),
  FUNC_0(VAR_27, VAR_14),
  FUNC_0(VAR_27, VAR_9),
  FUNC_0(VAR_27, VAR_10),
  FUNC_0(VAR_27, VAR_8),
  FUNC_0(VAR_27, VAR_12),
  FUNC_0(VAR_28, VAR_4),
  VAR_30->broken_cmd_compl ? " (with Cmd Compl erratum)" : "");





 if (FUNC_2(VAR_26)) {
  FUNC_15(VAR_26, &VAR_29);
  if (!FUNC_14(VAR_26) && VAR_29) {
   FUNC_13(VAR_26);
   FUNC_16(VAR_26);
  }
 }

 return VAR_26;
}
