
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct net_device {int mtu; int features; } ;
struct fcoe_port {int timer; scalar_t__ fcoe_pending_queue_active; int fcoe_pending_queue; struct fcoe_interface* priv; } ;
struct fcoe_interface {int dummy; } ;
struct fcoe_hdr {int dummy; } ;
struct fcoe_ctlr {int ctl_src_addr; } ;
struct fcoe_crc_eof {int dummy; } ;
struct fc_lport {int vport; scalar_t__ vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct fc_lport*,int) ;
 int FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (struct fc_lport*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*,int *,int ) ;
 int FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (struct fc_lport*,struct net_device*) ;
 int VAR_5 ;
 struct fcoe_ctlr* FUNC_7 (struct fcoe_interface*) ;
 int FUNC_8 (int ,int,int ) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 struct fcoe_port* FUNC_10 (struct fc_lport*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;
 scalar_t__ FUNC_13 (struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct fc_lport *VAR_6, struct net_device *VAR_7)
{
 u32 VAR_8;
 u64 VAR_9, VAR_10;
 struct fcoe_interface *VAR_11;
 struct fcoe_ctlr *VAR_12;
 struct fcoe_port *VAR_13;


 VAR_13 = FUNC_10(VAR_6);
 VAR_11 = VAR_13->priv;
 VAR_12 = FUNC_7(VAR_11);


 if (FUNC_9(VAR_7))
  VAR_6->vlan = FUNC_13(VAR_7);
 else
  VAR_6->vlan = 0;






 VAR_8 = VAR_7->mtu;
 if (VAR_7->features & VAR_4) {
  VAR_8 = VAR_1;
  FUNC_0(VAR_7, "Supports FCOE_MTU of %d bytes\n", VAR_8);
 }
 VAR_8 -= (sizeof(struct fcoe_hdr) + sizeof(struct fcoe_crc_eof));
 if (FUNC_1(VAR_6, VAR_8))
  return -VAR_0;


 FUNC_6(VAR_6, VAR_7);

 FUNC_11(&VAR_13->fcoe_pending_queue);
 VAR_13->fcoe_pending_queue_active = 0;
 FUNC_12(&VAR_13->timer, VAR_5, 0);

 FUNC_5(VAR_6);

 if (!VAR_6->vport) {
  if (FUNC_4(VAR_7, &VAR_9, VAR_2))
   VAR_9 = FUNC_8(VAR_12->ctl_src_addr, 1, 0);
  FUNC_2(VAR_6, VAR_9);
  if (FUNC_4(VAR_7, &VAR_10, VAR_3))
   VAR_10 = FUNC_8(VAR_12->ctl_src_addr,
       2, 0);
  FUNC_3(VAR_6, VAR_10);
 }

 return 0;
}
