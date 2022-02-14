
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_25__ {scalar_t__ base_queue; int num_oqueues; int num_iqueues; } ;
union oct_nic_if_cfg {scalar_t__ u64; TYPE_2__ s; } ;
typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct octeon_soft_command {int caller_is_done; int sc_status; int complete; scalar_t__ iq_no; scalar_t__ virtdptr; scalar_t__ virtrptr; } ;
struct TYPE_17__ {int (* enable_interrupt ) (struct octeon_device*,int ) ;} ;
struct TYPE_26__ {int liquidio_firmware_version; } ;
struct TYPE_24__ {int rings_per_vf; } ;
struct octeon_device {int pf_num; size_t ifcount; scalar_t__ chip_id; int priv_flags; int no_speed_setting; TYPE_16__* pci_dev; TYPE_10__ fn_list; struct octdev_props* props; TYPE_3__ fw_info; TYPE_1__ sriov_info; } ;
struct octdev_props {struct net_device* netdev; int gmxport; } ;
struct net_device {int hw_enc_features; int vlan_features; int features; int hw_features; int dev_addr; int max_mtu; int min_mtu; int * netdev_ops; } ;
struct TYPE_30__ {int u64; } ;
struct TYPE_31__ {int macaddr_spoofchk; int macaddr_is_admin_asgnd; TYPE_7__ link; int gmxport; scalar_t__ hw_addr; TYPE_5__* txpciq; TYPE_4__* rxpciq; } ;
struct TYPE_32__ {char* liquidio_firmware_version; TYPE_8__ linfo; int oqmask; int iqmask; } ;
struct liquidio_if_cfg_resp {int status; TYPE_9__ cfg_info; } ;
struct liquidio_if_cfg_info {int dummy; } ;
struct lio_version {void* micro; void* minor; void* major; } ;
struct TYPE_29__ {int u64; } ;
struct TYPE_22__ {int num_rxpciq; int num_txpciq; TYPE_14__* rxpciq; TYPE_12__* txpciq; scalar_t__ hw_addr; int gmxport; int macaddr_spoofchk; int macaddr_is_admin_asgnd; TYPE_6__ link; } ;
struct lio {int ifidx; int dev_capability; int enc_dev_capability; int link_changes; struct octeon_device* oct_dev; int rxq; int rx_qsize; int txq; int tx_qsize; TYPE_15__ linfo; struct net_device* netdev; struct octdev_props* octprops; int msg_enable; } ;
struct TYPE_28__ {int u64; } ;
struct TYPE_27__ {int u64; } ;
struct TYPE_23__ {int dev; } ;
struct TYPE_20__ {int q_no; } ;
struct TYPE_21__ {TYPE_13__ s; int u64; } ;
struct TYPE_18__ {int q_no; } ;
struct TYPE_19__ {TYPE_11__ s; int u64; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lio* FUNC_1 (struct net_device*) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (int ,int) ;
 struct net_device* FUNC_4 (int ,int) ;
 void* FUNC_5 (int ) ;
 int VAR_45 ;
 int FUNC_6 (int *,char*,size_t,...) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int ,size_t*) ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct lio*,int ) ;
 int FUNC_11 (int *) ;
 int VAR_49 ;
 scalar_t__ FUNC_12 (struct octeon_device*,struct lio*,int) ;
 int VAR_50 ;
 int FUNC_13 (struct octeon_device*,size_t) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int ,int) ;
 int FUNC_16 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_17 (struct octeon_device*,size_t,int,int) ;
 int FUNC_18 (struct lio*,int ,int) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (struct net_device*,int ) ;
 scalar_t__ FUNC_22 (struct octeon_device*,int,int,int ) ;
 int FUNC_23 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_24 (struct octeon_device*,int ) ;
 int FUNC_25 (struct octeon_device*,int ) ;
 int FUNC_26 (struct octeon_device*,struct octeon_soft_command*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_27 (struct octeon_device*,int ,int ,int ,struct octeon_device*) ;
 int FUNC_28 (struct octeon_device*,int ,int ) ;
 int FUNC_29 (struct octeon_device*,struct octeon_soft_command*) ;
 int FUNC_30 (scalar_t__*,int) ;
 scalar_t__ FUNC_31 (struct net_device*) ;
 scalar_t__ FUNC_32 (struct net_device*) ;
 scalar_t__ FUNC_33 (struct net_device*) ;
 int FUNC_34 (int ,int,char*,char*) ;
 int FUNC_35 (struct octeon_device*,int ) ;
 int FUNC_36 (struct octeon_device*,struct octeon_soft_command*,int ) ;

__attribute__((used)) static int FUNC_37(struct octeon_device *VAR_51)
{
 int VAR_52, VAR_53, VAR_54;
 u32 VAR_55, VAR_56;
 struct liquidio_if_cfg_resp *VAR_57;
 struct octeon_soft_command *VAR_58;
 union oct_nic_if_cfg VAR_59;
 struct octdev_props *VAR_60;
 struct net_device *VAR_61;
 struct lio_version *VAR_62;
 struct lio *VAR_63 = ((void*)0);
 u8 VAR_64[VAR_3], VAR_65, VAR_66;
 u32 VAR_67;

 VAR_67 = VAR_51->pf_num;


 FUNC_27(VAR_51, VAR_39, VAR_41,
        VAR_49, VAR_51);




 FUNC_28(VAR_51, VAR_42,
     VAR_46);

 FUNC_28(VAR_51, VAR_43,
     VAR_47);

 FUNC_28(VAR_51, VAR_44,
     VAR_48);

 for (VAR_65 = 0; VAR_65 < VAR_51->ifcount; VAR_65++) {
  VAR_55 = sizeof(struct liquidio_if_cfg_resp);
  VAR_56 = sizeof(struct lio_version);
  VAR_58 = (struct octeon_soft_command *)
   FUNC_22(VAR_51, VAR_56,
        VAR_55, 0);
  VAR_57 = (struct liquidio_if_cfg_resp *)VAR_58->virtrptr;
  VAR_62 = (struct lio_version *)VAR_58->virtdptr;

  *((u64 *)VAR_62) = 0;
  VAR_62->major = FUNC_5(VAR_10);
  VAR_62->minor = FUNC_5(VAR_12);
  VAR_62->micro = FUNC_5(VAR_11);

  VAR_59.u64 = 0;

  VAR_59.s.num_iqueues = VAR_51->sriov_info.rings_per_vf;
  VAR_59.s.num_oqueues = VAR_51->sriov_info.rings_per_vf;
  VAR_59.s.base_queue = 0;

  VAR_58->iq_no = 0;

  FUNC_26(VAR_51, VAR_58, VAR_39,
         VAR_40, 0, VAR_59.u64,
         0);

  FUNC_11(&VAR_58->complete);
  VAR_58->sc_status = VAR_29;

  VAR_52 = FUNC_29(VAR_51, VAR_58);
  if (VAR_52 == VAR_4) {
   FUNC_7(&VAR_51->pci_dev->dev,
    "iq/oq config failed status: %x\n", VAR_52);

   FUNC_23(VAR_51, VAR_58);
   return(-VAR_1);
  }




  VAR_52 = FUNC_36(VAR_51, VAR_58, 0);
  if (VAR_52)
   return VAR_52;

  VAR_52 = VAR_57->status;
  if (VAR_52) {
   FUNC_7(&VAR_51->pci_dev->dev,
    "iq/oq config failed, retval = %d\n", VAR_52);
   FUNC_3(VAR_58->caller_is_done, 1);
   return -VAR_1;
  }

  FUNC_34(VAR_51->fw_info.liquidio_firmware_version,
    32, "%s",
    VAR_57->cfg_info.liquidio_firmware_version);

  FUNC_30((u64 *)(&VAR_57->cfg_info),
        (sizeof(struct liquidio_if_cfg_info)) >> 3);

  VAR_53 = FUNC_9(VAR_57->cfg_info.iqmask);
  VAR_54 = FUNC_9(VAR_57->cfg_info.oqmask);

  if (!(VAR_53) || !(VAR_54)) {
   FUNC_7(&VAR_51->pci_dev->dev,
    "Got bad iqueues (%016llx) or oqueues (%016llx) from firmware.\n",
    VAR_57->cfg_info.iqmask, VAR_57->cfg_info.oqmask);
   FUNC_3(VAR_58->caller_is_done, 1);
   goto setup_nic_dev_done;
  }
  FUNC_6(&VAR_51->pci_dev->dev,
   "interface %d, iqmask %016llx, oqmask %016llx, numiqueues %d, numoqueues %d\n",
   VAR_65, VAR_57->cfg_info.iqmask, VAR_57->cfg_info.oqmask,
   VAR_53, VAR_54);

  VAR_61 = FUNC_4(VAR_9, VAR_53);

  if (!VAR_61) {
   FUNC_7(&VAR_51->pci_dev->dev, "Device allocation failed\n");
   FUNC_3(VAR_58->caller_is_done, 1);
   goto setup_nic_dev_done;
  }

  FUNC_2(VAR_61, &VAR_51->pci_dev->dev);




  VAR_61->netdev_ops = &VAR_50;

  VAR_63 = FUNC_1(VAR_61);

  FUNC_18(VAR_63, 0, sizeof(struct lio));

  VAR_63->ifidx = VAR_67;

  VAR_60 = &VAR_51->props[VAR_65];
  VAR_60->gmxport = VAR_57->cfg_info.linfo.gmxport;
  VAR_60->netdev = VAR_61;

  VAR_63->linfo.num_rxpciq = VAR_54;
  VAR_63->linfo.num_txpciq = VAR_53;

  for (VAR_66 = 0; VAR_66 < VAR_54; VAR_66++) {
   VAR_63->linfo.rxpciq[VAR_66].u64 =
       VAR_57->cfg_info.linfo.rxpciq[VAR_66].u64;
  }
  for (VAR_66 = 0; VAR_66 < VAR_53; VAR_66++) {
   VAR_63->linfo.txpciq[VAR_66].u64 =
       VAR_57->cfg_info.linfo.txpciq[VAR_66].u64;
  }

  VAR_63->linfo.hw_addr = VAR_57->cfg_info.linfo.hw_addr;
  VAR_63->linfo.gmxport = VAR_57->cfg_info.linfo.gmxport;
  VAR_63->linfo.link.u64 = VAR_57->cfg_info.linfo.link.u64;
  VAR_63->linfo.macaddr_is_admin_asgnd =
   VAR_57->cfg_info.linfo.macaddr_is_admin_asgnd;
  VAR_63->linfo.macaddr_spoofchk =
   VAR_57->cfg_info.linfo.macaddr_spoofchk;

  VAR_63->msg_enable = FUNC_20(VAR_45, VAR_0);

  VAR_63->dev_capability = VAR_15
          | VAR_21 | VAR_20
          | VAR_24 | VAR_23
          | VAR_25 | VAR_26
          | VAR_13
          | VAR_22;
  FUNC_21(VAR_61, VAR_35);




  VAR_63->enc_dev_capability = VAR_21
       | VAR_20
       | VAR_14
       | VAR_16 | VAR_24
       | VAR_23
       | VAR_25 | VAR_26
       | VAR_22;

  VAR_61->hw_enc_features =
      (VAR_63->enc_dev_capability & ~VAR_22);
  VAR_61->vlan_features = VAR_63->dev_capability;

  VAR_63->dev_capability |= VAR_17 |
           VAR_18 |
           VAR_19;

  VAR_61->features = (VAR_63->dev_capability & ~VAR_22);

  VAR_61->hw_features = VAR_63->dev_capability;
  VAR_61->hw_features &= ~VAR_18;


  VAR_61->min_mtu = VAR_8;
  VAR_61->max_mtu = VAR_7;

  FUNC_3(VAR_58->caller_is_done, 1);




  VAR_63->oct_dev = VAR_51;
  VAR_63->octprops = VAR_60;
  VAR_63->netdev = VAR_61;

  FUNC_6(&VAR_51->pci_dev->dev,
   "if%d gmx: %d hw_addr: 0x%llx\n", VAR_65,
   VAR_63->linfo.gmxport, FUNC_0(VAR_63->linfo.hw_addr));


  FUNC_30(&VAR_63->linfo.hw_addr, 1);
  for (VAR_66 = 0; VAR_66 < VAR_3; VAR_66++)
   VAR_64[VAR_66] = *((u8 *)(((u8 *)&VAR_63->linfo.hw_addr) + 2 + VAR_66));


  FUNC_8(VAR_61->dev_addr, VAR_64);

  if (FUNC_17(VAR_51, VAR_65,
          VAR_63->linfo.num_txpciq,
          VAR_63->linfo.num_rxpciq)) {
   FUNC_7(&VAR_51->pci_dev->dev, "I/O queues creation failed\n");
   goto setup_nic_dev_free;
  }

  FUNC_10(VAR_63, VAR_5);




  VAR_51->fn_list.enable_interrupt(VAR_51,
           VAR_27);




  VAR_63->txq = VAR_63->linfo.txpciq[0].s.q_no;
  VAR_63->rxq = VAR_63->linfo.rxpciq[0].s.q_no;

  VAR_63->tx_qsize = FUNC_25(VAR_51, VAR_63->txq);
  VAR_63->rx_qsize = FUNC_24(VAR_51, VAR_63->rxq);

  if (FUNC_12(VAR_51, VAR_63, VAR_53)) {
   FUNC_7(&VAR_51->pci_dev->dev,
    "Gather list allocation failed\n");
   goto setup_nic_dev_free;
  }


  FUNC_14(VAR_61);
  if (VAR_63->oct_dev->chip_id == VAR_28)
   VAR_51->priv_flags = VAR_38;
  else
   VAR_51->priv_flags = 0x0;

  if (VAR_61->features & VAR_22)
   FUNC_15(VAR_61, VAR_30,
          VAR_36 | VAR_37);

  if (FUNC_32(VAR_61))
   goto setup_nic_dev_free;

  if (FUNC_33(VAR_61))
   goto setup_nic_dev_free;


  if (FUNC_31(VAR_61)) {
   FUNC_7(&VAR_51->pci_dev->dev, "Device registration failed\n");
   goto setup_nic_dev_free;
  }

  FUNC_6(&VAR_51->pci_dev->dev,
   "Setup NIC ifidx:%d mac:%02x%02x%02x%02x%02x%02x\n",
   VAR_65, VAR_64[0], VAR_64[1], VAR_64[2], VAR_64[3], VAR_64[4], VAR_64[5]);
  FUNC_19(VAR_61);
  VAR_63->link_changes++;

  FUNC_10(VAR_63, VAR_6);





  FUNC_16(VAR_61, VAR_32,
         VAR_31);
  FUNC_15(VAR_61, VAR_33,
         VAR_34);

  FUNC_6(&VAR_51->pci_dev->dev,
   "NIC ifidx:%d Setup successful\n", VAR_65);

  VAR_51->no_speed_setting = 1;
 }

 return 0;

setup_nic_dev_free:

 while (VAR_65--) {
  FUNC_7(&VAR_51->pci_dev->dev,
   "NIC ifidx:%d Setup failed\n", VAR_65);
  FUNC_13(VAR_51, VAR_65);
 }

setup_nic_dev_done:

 return -VAR_2;
}
