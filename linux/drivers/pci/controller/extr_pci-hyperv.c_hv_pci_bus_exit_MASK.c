
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_packet {TYPE_2__* message; struct hv_pci_compl* compl_ctxt; int completion_func; } ;
struct pci_message {int dummy; } ;
struct pci_bus_relations {TYPE_2__* message; struct hv_pci_compl* compl_ctxt; int completion_func; } ;
struct hv_pcibus_device {int dummy; } ;
struct hv_pci_compl {int host_event; } ;
struct hv_device {TYPE_1__* channel; int device; } ;
typedef int relations ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ rescind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct hv_pcibus_device* FUNC_1 (struct hv_device*) ;
 int FUNC_2 (struct hv_pcibus_device*,struct pci_packet*) ;
 int VAR_4 ;
 int FUNC_3 (struct hv_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_packet*,int ,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__**,int,unsigned long,int ,int ) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct hv_device *VAR_5)
{
 struct hv_pcibus_device *VAR_6 = FUNC_1(VAR_5);
 struct {
  struct pci_packet teardown_packet;
  u8 buffer[sizeof(struct pci_message)];
 } VAR_7;
 struct pci_bus_relations VAR_8;
 struct hv_pci_compl VAR_9;
 int VAR_10;





 if (VAR_5->channel->rescind)
  return;


 FUNC_5(&VAR_8, 0, sizeof(VAR_8));
 FUNC_2(VAR_6, &VAR_8);

 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10)
  FUNC_0(&VAR_5->device,
   "Couldn't send resources released packet(s)\n");

 FUNC_5(&VAR_7.teardown_packet, 0, sizeof(VAR_7.teardown_packet));
 FUNC_4(&VAR_9.host_event);
 VAR_7.teardown_packet.completion_func = VAR_4;
 VAR_7.teardown_packet.compl_ctxt = &VAR_9;
 VAR_7.teardown_packet.message[0].type = VAR_1;

 VAR_10 = FUNC_6(VAR_5->channel, &VAR_7.teardown_packet.message,
          sizeof(struct pci_message),
          (unsigned long)&VAR_7.teardown_packet,
          VAR_3,
          VAR_2);
 if (!VAR_10)
  FUNC_7(&VAR_9.host_event, 10 * VAR_0);
}
