
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_26__ {int msg; } ;
struct TYPE_25__ {int fc_tx; int fc_rx; int autoneg; } ;
struct TYPE_23__ {size_t sqs_id; scalar_t__ nicvf; } ;
struct TYPE_22__ {int qs_count; } ;
struct TYPE_21__ {int link_up; int mac_type; int speed; int duplex; } ;
struct TYPE_20__ {int ind_tbl_size; } ;
struct TYPE_18__ {int vf_id; int tns_mode; int loopback_supported; int sqs_mode; int mac_addr; int node_id; } ;
union nic_mbx {TYPE_9__ msg; TYPE_8__ pfc; TYPE_6__ nicvf; TYPE_5__ sqs_alloc; TYPE_4__ link_status; int bgx_stats; TYPE_3__ rss_size; TYPE_1__ nic_cfg; } ;
typedef int u64 ;
struct TYPE_24__ {int fc_tx; int fc_rx; int autoneg; } ;
struct TYPE_19__ {int rss_size; } ;
struct nicvf {int pf_acked; int vf_id; int tns_mode; int link_up; int pf_nacked; TYPE_10__* netdev; TYPE_7__ pfc; struct nicvf* pnicvf; struct nicvf** snicvf; int sqs_count; int duplex; int speed; int mac_type; TYPE_2__ rss_info; int loopback_supported; int sqs_mode; int set_mac_pending; int node; } ;
struct TYPE_17__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_10__*,char*,int) ;
 int FUNC_2 (TYPE_10__*,char*,int) ;
 int FUNC_3 (TYPE_10__*,char*,...) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (struct nicvf*,int ,int ) ;
 int FUNC_9 (struct nicvf*,int *) ;
 int FUNC_10 (struct nicvf*,int) ;

__attribute__((used)) static void FUNC_11(struct nicvf *VAR_4)
{
 union nic_mbx VAR_5 = {};
 u64 *VAR_6;
 u64 VAR_7;
 int VAR_8;

 VAR_7 = VAR_3;
 VAR_6 = (u64 *)&VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  *VAR_6 = FUNC_10(VAR_4, VAR_7);
  VAR_6++;
  VAR_7 += sizeof(u64);
 }

 FUNC_1(VAR_4->netdev, "Mbox message: msg: 0x%x\n", VAR_5.msg.msg);
 switch (VAR_5.msg.msg) {
 case 130:
  VAR_4->pf_acked = 1;
  VAR_4->vf_id = VAR_5.nic_cfg.vf_id & 0x7F;
  VAR_4->tns_mode = VAR_5.nic_cfg.tns_mode & 0x7F;
  VAR_4->node = VAR_5.nic_cfg.node_id;
  if (!VAR_4->set_mac_pending)
   FUNC_0(VAR_4->netdev->dev_addr,
     VAR_5.nic_cfg.mac_addr);
  VAR_4->sqs_mode = VAR_5.nic_cfg.sqs_mode;
  VAR_4->loopback_supported = VAR_5.nic_cfg.loopback_supported;
  VAR_4->link_up = 0;
  VAR_4->duplex = 0;
  VAR_4->speed = 0;
  break;
 case 137:
  VAR_4->pf_acked = 1;
  break;
 case 133:
  VAR_4->pf_nacked = 1;
  break;
 case 129:
  VAR_4->rss_info.rss_size = VAR_5.rss_size.ind_tbl_size;
  VAR_4->pf_acked = 1;
  break;
 case 134:
  FUNC_9(VAR_4, &VAR_5.bgx_stats);
  VAR_4->pf_acked = 1;
  break;
 case 135:
  VAR_4->pf_acked = 1;
  if (VAR_4->link_up != VAR_5.link_status.link_up) {
   VAR_4->link_up = VAR_5.link_status.link_up;
   VAR_4->duplex = VAR_5.link_status.duplex;
   VAR_4->speed = VAR_5.link_status.speed;
   VAR_4->mac_type = VAR_5.link_status.mac_type;
   if (VAR_4->link_up) {
    FUNC_3(VAR_4->netdev,
         "Link is Up %d Mbps %s duplex\n",
         VAR_4->speed,
         VAR_4->duplex == VAR_0 ?
         "Full" : "Half");
    FUNC_5(VAR_4->netdev);
    FUNC_6(VAR_4->netdev);
   } else {
    FUNC_3(VAR_4->netdev, "Link is Down\n");
    FUNC_4(VAR_4->netdev);
    FUNC_7(VAR_4->netdev);
   }
  }
  break;
 case 136:
  VAR_4->sqs_count = VAR_5.sqs_alloc.qs_count;
  VAR_4->pf_acked = 1;
  break;
 case 128:



  VAR_4->snicvf[VAR_5.nicvf.sqs_id] =
   (struct nicvf *)VAR_5.nicvf.nicvf;
  VAR_4->pf_acked = 1;
  break;
 case 131:




  VAR_4->pnicvf = (struct nicvf *)VAR_5.nicvf.nicvf;
  VAR_4->pf_acked = 1;
  break;
 case 132:
  VAR_4->pfc.autoneg = VAR_5.pfc.autoneg;
  VAR_4->pfc.fc_rx = VAR_5.pfc.fc_rx;
  VAR_4->pfc.fc_tx = VAR_5.pfc.fc_tx;
  VAR_4->pf_acked = 1;
  break;
 default:
  FUNC_2(VAR_4->netdev,
      "Invalid message from PF, msg 0x%x\n", VAR_5.msg.msg);
  break;
 }
 FUNC_8(VAR_4, VAR_1, 0);
}
