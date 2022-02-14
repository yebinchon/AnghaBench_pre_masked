
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vhci_priv {int seqnum; struct vhci_device* vdev; } ;
struct vhci_device {int devid; } ;
struct TYPE_5__ {int setup; } ;
struct TYPE_6__ {TYPE_2__ cmd_submit; } ;
struct TYPE_4__ {int ep; int direction; int devid; int seqnum; int command; } ;
struct usbip_header {TYPE_3__ u; TYPE_1__ base; } ;
struct urb {scalar_t__ setup_packet; int pipe; scalar_t__ hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct usbip_header*,struct urb*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct usbip_header *VAR_3, struct urb *VAR_4)
{
 struct vhci_priv *VAR_5 = ((struct vhci_priv *)VAR_4->hcpriv);
 struct vhci_device *VAR_6 = VAR_5->vdev;

 FUNC_4("URB, local devnum %u, remote devid %u\n",
     FUNC_1(VAR_4->pipe), VAR_6->devid);

 VAR_3->base.command = VAR_0;
 VAR_3->base.seqnum = VAR_5->seqnum;
 VAR_3->base.devid = VAR_6->devid;
 VAR_3->base.direction = FUNC_3(VAR_4->pipe) ?
  VAR_1 : VAR_2;
 VAR_3->base.ep = FUNC_2(VAR_4->pipe);

 FUNC_5(VAR_3, VAR_4, VAR_0, 1);

 if (VAR_4->setup_packet)
  FUNC_0(VAR_3->u.cmd_submit.setup, VAR_4->setup_packet, 8);
}
