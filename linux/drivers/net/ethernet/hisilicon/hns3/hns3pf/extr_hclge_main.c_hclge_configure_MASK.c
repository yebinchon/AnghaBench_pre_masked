
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_pg; int num_tc; scalar_t__ hw_pfc_map; } ;
struct TYPE_5__ {int speed; int phy_addr; int media_type; int mac_addr; } ;
struct TYPE_6__ {TYPE_1__ mac; } ;
struct hclge_dev {int tc_max; int fd_en; int pfc_max; int affinity_mask; TYPE_4__* pdev; int tx_sch_mode; int hw_tc_map; TYPE_3__ tm_info; TYPE_2__ hw; int fd_active_type; int wanted_umv_size; int num_rx_desc; int num_tx_desc; int rx_buf_len; int rss_size_max; scalar_t__ base_tqp_pid; int num_vmdq_vport; } ;
struct hclge_cfg {int tc_num; int speed_ability; int default_speed; int umv_space; int tqp_desc_num; int phy_addr; int media_type; int mac_addr; int rx_buf_len; int rss_size_max; int vmdq_vport_num; } ;
struct TYPE_8__ {int dev; int devfn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct hclge_dev*,struct hclge_cfg*) ;
 int FUNC_10 (struct hclge_dev*) ;
 int FUNC_11 (struct hclge_dev*,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct hclge_dev*) ;
 scalar_t__ FUNC_14 (struct hclge_dev*) ;
 int FUNC_15 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_16(struct hclge_dev *VAR_3)
{
 struct hclge_cfg VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_9(VAR_3, &VAR_4);
 if (VAR_6) {
  FUNC_5(&VAR_3->pdev->dev, "get mac mode error %d.\n", VAR_6);
  return VAR_6;
 }

 VAR_3->num_vmdq_vport = VAR_4.vmdq_vport_num;
 VAR_3->base_tqp_pid = 0;
 VAR_3->rss_size_max = VAR_4.rss_size_max;
 VAR_3->rx_buf_len = VAR_4.rx_buf_len;
 FUNC_8(VAR_3->hw.mac.mac_addr, VAR_4.mac_addr);
 VAR_3->hw.mac.media_type = VAR_4.media_type;
 VAR_3->hw.mac.phy_addr = VAR_4.phy_addr;
 VAR_3->num_tx_desc = VAR_4.tqp_desc_num;
 VAR_3->num_rx_desc = VAR_4.tqp_desc_num;
 VAR_3->tm_info.num_pg = 1;
 VAR_3->tc_max = VAR_4.tc_num;
 VAR_3->tm_info.hw_pfc_map = 0;
 VAR_3->wanted_umv_size = VAR_4.umv_space;

 if (FUNC_14(VAR_3)) {
  VAR_3->fd_en = 1;
  VAR_3->fd_active_type = VAR_0;
 }

 VAR_6 = FUNC_12(VAR_4.default_speed, &VAR_3->hw.mac.speed);
 if (VAR_6) {
  FUNC_5(&VAR_3->pdev->dev, "Get wrong speed ret=%d.\n", VAR_6);
  return VAR_6;
 }

 FUNC_11(VAR_3, VAR_4.speed_ability);

 if ((VAR_3->tc_max > VAR_2) ||
     (VAR_3->tc_max < 1)) {
  FUNC_7(&VAR_3->pdev->dev, "TC num = %d.\n",
    VAR_3->tc_max);
  VAR_3->tc_max = 1;
 }


 if (!FUNC_13(VAR_3)) {
  VAR_3->tc_max = 1;
  VAR_3->pfc_max = 0;
 } else {
  VAR_3->pfc_max = VAR_3->tc_max;
 }

 VAR_3->tm_info.num_tc = 1;


 for (VAR_5 = 0; VAR_5 < VAR_3->tm_info.num_tc; VAR_5++)
  FUNC_15(VAR_3->hw_tc_map, VAR_5, 1);

 VAR_3->tx_sch_mode = VAR_1;

 FUNC_10(VAR_3);


 VAR_5 = FUNC_4(FUNC_2(FUNC_6(&VAR_3->pdev->dev)));
 VAR_5 = VAR_5 ? FUNC_0(VAR_3->pdev->devfn) % VAR_5 : 0;
 FUNC_3(FUNC_1(VAR_5, FUNC_6(&VAR_3->pdev->dev)),
   &VAR_3->affinity_mask);

 return VAR_6;
}
