
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct hclge_dbg_bitmap_cmd {int bit1; int bit0; int bit2; int bit3; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct hclge_dev*,struct hclge_desc*,int,int,int ) ;
 int FUNC_3 (char const*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_9, const char *VAR_10)
{
 struct device *VAR_11 = &VAR_9->pdev->dev;
 struct hclge_dbg_bitmap_cmd *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 struct hclge_desc VAR_19[2];

 int VAR_20, VAR_21;

 VAR_20 = FUNC_3(VAR_10, "%i %i %i %i %i %i",
       &VAR_16, &VAR_14, &VAR_18, &VAR_13, &VAR_17, &VAR_15);
 if (VAR_20 != 6) {
  FUNC_0(&VAR_9->pdev->dev,
   "dump dcb: bad command parameter, cnt=%d\n", VAR_20);
  return;
 }

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_15, 1,
     VAR_3);
 if (VAR_21)
  return;

 VAR_12 = (struct hclge_dbg_bitmap_cmd *)&VAR_19[0].data[1];
 FUNC_1(VAR_11, "roce_qset_mask: 0x%x\n", VAR_12->bit0);
 FUNC_1(VAR_11, "nic_qs_mask: 0x%x\n", VAR_12->bit1);
 FUNC_1(VAR_11, "qs_shaping_pass: 0x%x\n", VAR_12->bit2);
 FUNC_1(VAR_11, "qs_bp_sts: 0x%x\n", VAR_12->bit3);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_14, 1, VAR_2);
 if (VAR_21)
  return;

 VAR_12 = (struct hclge_dbg_bitmap_cmd *)&VAR_19[0].data[1];
 FUNC_1(VAR_11, "pri_mask: 0x%x\n", VAR_12->bit0);
 FUNC_1(VAR_11, "pri_cshaping_pass: 0x%x\n", VAR_12->bit1);
 FUNC_1(VAR_11, "pri_pshaping_pass: 0x%x\n", VAR_12->bit2);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_18, 1, VAR_0);
 if (VAR_21)
  return;

 VAR_12 = (struct hclge_dbg_bitmap_cmd *)&VAR_19[0].data[1];
 FUNC_1(VAR_11, "pg_mask: 0x%x\n", VAR_12->bit0);
 FUNC_1(VAR_11, "pg_cshaping_pass: 0x%x\n", VAR_12->bit1);
 FUNC_1(VAR_11, "pg_pshaping_pass: 0x%x\n", VAR_12->bit2);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_16, 1,
     VAR_1);
 if (VAR_21)
  return;

 VAR_12 = (struct hclge_dbg_bitmap_cmd *)&VAR_19[0].data[1];
 FUNC_1(VAR_11, "port_mask: 0x%x\n", VAR_12->bit0);
 FUNC_1(VAR_11, "port_shaping_pass: 0x%x\n", VAR_12->bit1);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_17, 1, VAR_4);
 if (VAR_21)
  return;

 FUNC_1(VAR_11, "sch_nq_cnt: 0x%x\n", VAR_19[0].data[1]);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_17, 1, VAR_5);
 if (VAR_21)
  return;

 FUNC_1(VAR_11, "sch_rq_cnt: 0x%x\n", VAR_19[0].data[1]);

 VAR_21 = FUNC_2(VAR_9, VAR_19, 0, 2, VAR_7);
 if (VAR_21)
  return;

 FUNC_1(VAR_11, "pri_bp: 0x%x\n", VAR_19[0].data[1]);
 FUNC_1(VAR_11, "fifo_dfx_info: 0x%x\n", VAR_19[0].data[2]);
 FUNC_1(VAR_11, "sch_roce_fifo_afull_gap: 0x%x\n", VAR_19[0].data[3]);
 FUNC_1(VAR_11, "tx_private_waterline: 0x%x\n", VAR_19[0].data[4]);
 FUNC_1(VAR_11, "tm_bypass_en: 0x%x\n", VAR_19[0].data[5]);
 FUNC_1(VAR_11, "SSU_TM_BYPASS_EN: 0x%x\n", VAR_19[1].data[0]);
 FUNC_1(VAR_11, "SSU_RESERVE_CFG: 0x%x\n", VAR_19[1].data[1]);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_16, 1,
     VAR_6);
 if (VAR_21)
  return;

 FUNC_1(VAR_11, "SCH_NIC_NUM: 0x%x\n", VAR_19[0].data[1]);
 FUNC_1(VAR_11, "SCH_ROCE_NUM: 0x%x\n", VAR_19[0].data[2]);

 VAR_21 = FUNC_2(VAR_9, VAR_19, VAR_16, 1,
     VAR_8);
 if (VAR_21)
  return;

 FUNC_1(VAR_11, "TC_MAP_SEL: 0x%x\n", VAR_19[0].data[1]);
 FUNC_1(VAR_11, "IGU_PFC_PRI_EN: 0x%x\n", VAR_19[0].data[2]);
 FUNC_1(VAR_11, "MAC_PFC_PRI_EN: 0x%x\n", VAR_19[0].data[3]);
 FUNC_1(VAR_11, "IGU_PRI_MAP_TC_CFG: 0x%x\n", VAR_19[0].data[4]);
 FUNC_1(VAR_11, "IGU_TX_PRI_MAP_TC_CFG: 0x%x\n", VAR_19[0].data[5]);
}
