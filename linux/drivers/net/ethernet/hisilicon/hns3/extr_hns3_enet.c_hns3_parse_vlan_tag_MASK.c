
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int revision; } ;
struct hns3_enet_ring {TYPE_1__* tqp; } ;
struct TYPE_4__ {int vlan_tag; int ot_vlan_tag; } ;
struct hns3_desc {TYPE_2__ rx; } ;
struct hnae3_handle {int port_base_vlan_state; struct pci_dev* pdev; } ;
struct TYPE_3__ {struct hnae3_handle* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct hns3_enet_ring *VAR_4,
    struct hns3_desc *VAR_5, u32 VAR_6,
    u16 *VAR_7)
{
 struct hnae3_handle *VAR_8 = VAR_4->tqp->handle;
 struct pci_dev *VAR_9 = VAR_4->tqp->handle->pdev;

 if (VAR_9->revision == 0x20) {
  *VAR_7 = FUNC_1(VAR_5->rx.ot_vlan_tag);
  if (!(*VAR_7 & VAR_3))
   *VAR_7 = FUNC_1(VAR_5->rx.vlan_tag);

  return (*VAR_7 != 0);
 }
 switch (FUNC_0(VAR_6, VAR_1,
    VAR_2)) {
 case 0x1:
  if (VAR_8->port_base_vlan_state !=
    VAR_0)
   return 0;

  *VAR_7 = FUNC_1(VAR_5->rx.ot_vlan_tag);
  return 1;
 case 0x2:
  if (VAR_8->port_base_vlan_state !=
    VAR_0)
   return 0;

  *VAR_7 = FUNC_1(VAR_5->rx.vlan_tag);
  return 1;
 case 0x3:
  if (VAR_8->port_base_vlan_state ==
    VAR_0)
   *VAR_7 = FUNC_1(VAR_5->rx.ot_vlan_tag);
  else
   *VAR_7 = FUNC_1(VAR_5->rx.vlan_tag);

  return 1;
 default:
  return 0;
 }
}
