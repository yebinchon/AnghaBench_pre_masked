
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct hns3_nic_ring_data {struct hns3_enet_ring* ring; } ;
struct hns3_nic_priv {struct hns3_nic_ring_data* ring_data; } ;
struct hns3_enet_ring {size_t desc_num; struct hns3_desc* desc; TYPE_4__* tqp; } ;
struct TYPE_10__ {int * bd_base_info; int * ot_vlan_tag; int * o_dm_vlan_id_fb; int * vlan_tag; int * fd_id; int * rss_hash; int * size; int * pkt_len; int * l234_info; } ;
struct TYPE_7__ {int * mss; int * bdtp_fe_sc_vld_ra_ri; int * paylen; int * ol4_len; int * ol3_len; int * ol2_len; int * ol_type_vlan_msec; int * tv; int * outer_vlan_tag; int * l4_len; int * l3_len; int * l2_len; int * type_cs_vlan_tso; int * send_size; int * vlan_tag; } ;
struct hns3_desc {TYPE_5__ rx; int addr; TYPE_2__ tx; } ;
struct TYPE_8__ {size_t num_tqps; } ;
struct hnae3_handle {TYPE_3__ kinfo; TYPE_1__* pdev; struct hns3_nic_priv* priv; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_9__ {scalar_t__ io_base; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,size_t,...) ;
 int FUNC_1 (struct device*,char*,size_t,...) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,char*,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_3, const char *VAR_4)
{
 struct hns3_nic_priv *VAR_5 = VAR_3->priv;
 struct hns3_nic_ring_data *VAR_6;
 struct hns3_desc *VAR_7, *VAR_8;
 struct device *VAR_9 = &VAR_3->pdev->dev;
 struct hns3_enet_ring *VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14;
 dma_addr_t VAR_15;
 int VAR_16;

 VAR_16 = FUNC_4(&VAR_4[8], "%u %u", &VAR_13, &VAR_11);
 if (VAR_16 == 2) {
  VAR_12 = VAR_11;
 } else if (VAR_16 != 1) {
  FUNC_0(VAR_9, "bd info: bad command string, cnt=%d\n", VAR_16);
  return -VAR_0;
 }

 if (VAR_13 >= VAR_3->kinfo.num_tqps) {
  FUNC_0(VAR_9, "Queue number(%u) is out of range(0-%u)\n", VAR_13,
   VAR_3->kinfo.num_tqps - 1);
  return -VAR_0;
 }

 VAR_6 = VAR_5->ring_data;
 VAR_10 = VAR_6[VAR_13].ring;
 VAR_14 = FUNC_3(VAR_10->tqp->io_base + VAR_2);
 VAR_11 = (VAR_16 == 1) ? VAR_14 : VAR_11;

 if (VAR_11 >= VAR_10->desc_num) {
  FUNC_0(VAR_9, "bd index(%u) is out of range(0-%u)\n", VAR_11,
   VAR_10->desc_num - 1);
  return -VAR_0;
 }

 VAR_8 = &VAR_10->desc[VAR_11];
 VAR_15 = FUNC_2(VAR_8->addr);
 FUNC_1(VAR_9, "TX Queue Num: %u, BD Index: %u\n", VAR_13, VAR_11);
 FUNC_1(VAR_9, "(TX)addr: %pad\n", &VAR_15);
 FUNC_1(VAR_9, "(TX)vlan_tag: %u\n", VAR_8->tx.vlan_tag);
 FUNC_1(VAR_9, "(TX)send_size: %u\n", VAR_8->tx.send_size);
 FUNC_1(VAR_9, "(TX)vlan_tso: %u\n", VAR_8->tx.type_cs_vlan_tso);
 FUNC_1(VAR_9, "(TX)l2_len: %u\n", VAR_8->tx.l2_len);
 FUNC_1(VAR_9, "(TX)l3_len: %u\n", VAR_8->tx.l3_len);
 FUNC_1(VAR_9, "(TX)l4_len: %u\n", VAR_8->tx.l4_len);
 FUNC_1(VAR_9, "(TX)vlan_tag: %u\n", VAR_8->tx.outer_vlan_tag);
 FUNC_1(VAR_9, "(TX)tv: %u\n", VAR_8->tx.tv);
 FUNC_1(VAR_9, "(TX)vlan_msec: %u\n", VAR_8->tx.ol_type_vlan_msec);
 FUNC_1(VAR_9, "(TX)ol2_len: %u\n", VAR_8->tx.ol2_len);
 FUNC_1(VAR_9, "(TX)ol3_len: %u\n", VAR_8->tx.ol3_len);
 FUNC_1(VAR_9, "(TX)ol4_len: %u\n", VAR_8->tx.ol4_len);
 FUNC_1(VAR_9, "(TX)paylen: %u\n", VAR_8->tx.paylen);
 FUNC_1(VAR_9, "(TX)vld_ra_ri: %u\n", VAR_8->tx.bdtp_fe_sc_vld_ra_ri);
 FUNC_1(VAR_9, "(TX)mss: %u\n", VAR_8->tx.mss);

 VAR_10 = VAR_6[VAR_13 + VAR_3->kinfo.num_tqps].ring;
 VAR_14 = FUNC_3(VAR_10->tqp->io_base + VAR_1);
 VAR_12 = (VAR_16 == 1) ? VAR_14 : VAR_11;
 VAR_7 = &VAR_10->desc[VAR_12];

 VAR_15 = FUNC_2(VAR_7->addr);
 FUNC_1(VAR_9, "RX Queue Num: %u, BD Index: %u\n", VAR_13, VAR_12);
 FUNC_1(VAR_9, "(RX)addr: %pad\n", &VAR_15);
 FUNC_1(VAR_9, "(RX)l234_info: %u\n", VAR_7->rx.l234_info);
 FUNC_1(VAR_9, "(RX)pkt_len: %u\n", VAR_7->rx.pkt_len);
 FUNC_1(VAR_9, "(RX)size: %u\n", VAR_7->rx.size);
 FUNC_1(VAR_9, "(RX)rss_hash: %u\n", VAR_7->rx.rss_hash);
 FUNC_1(VAR_9, "(RX)fd_id: %u\n", VAR_7->rx.fd_id);
 FUNC_1(VAR_9, "(RX)vlan_tag: %u\n", VAR_7->rx.vlan_tag);
 FUNC_1(VAR_9, "(RX)o_dm_vlan_id_fb: %u\n", VAR_7->rx.o_dm_vlan_id_fb);
 FUNC_1(VAR_9, "(RX)ot_vlan_tag: %u\n", VAR_7->rx.ot_vlan_tag);
 FUNC_1(VAR_9, "(RX)bd_base_info: %u\n", VAR_7->rx.bd_base_info);

 return 0;
}
