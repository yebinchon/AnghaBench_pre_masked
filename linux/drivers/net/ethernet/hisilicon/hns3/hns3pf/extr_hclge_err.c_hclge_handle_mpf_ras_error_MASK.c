
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hnae3_ae_dev {int hw_err_reset_req; } ;
struct hclge_dev {int hw; TYPE_1__* pdev; struct hnae3_ae_dev* ae_dev; } ;
struct hclge_desc {int * data; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct hclge_desc*,int) ;
 int FUNC_4 (int *,struct hclge_desc*,int) ;
 int FUNC_5 (struct hclge_desc*,int ,int) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_6 (struct device*,char*,int *,int,int *) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct hclge_dev *VAR_24,
          struct hclge_desc *VAR_25,
          int VAR_26)
{
 struct hnae3_ae_dev *VAR_27 = VAR_24->ae_dev;
 struct device *VAR_28 = &VAR_24->pdev->dev;
 __le32 *VAR_29;
 u32 VAR_30;
 int VAR_31;


 FUNC_5(&VAR_25[0], VAR_6,
       1);
 VAR_31 = FUNC_4(&VAR_24->hw, &VAR_25[0], VAR_26);
 if (VAR_31) {
  FUNC_1(VAR_28, "query all mpf ras int cmd failed (%d)\n", VAR_31);
  return VAR_31;
 }


 VAR_30 = FUNC_7(VAR_25[0].data[0]);
 if (VAR_30)
  FUNC_6(VAR_28, "IMP_TCM_ECC_INT_STS",
    &VAR_11[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 VAR_30 = FUNC_7(VAR_25[0].data[1]);
 if (VAR_30)
  FUNC_6(VAR_28, "CMDQ_MEM_ECC_INT_STS",
    &VAR_9[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 if ((FUNC_7(VAR_25[0].data[2])) & FUNC_0(0))
  FUNC_2(VAR_28, "imp_rd_data_poison_err found\n");

 VAR_30 = FUNC_7(VAR_25[0].data[3]);
 if (VAR_30)
  FUNC_6(VAR_28, "TQP_INT_ECC_INT_STS",
    &VAR_23[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 VAR_30 = FUNC_7(VAR_25[0].data[4]);
 if (VAR_30)
  FUNC_6(VAR_28, "MSIX_ECC_INT_STS",
    &VAR_12[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[2];
 VAR_30 = FUNC_7(*(VAR_29 + 2));
 if (VAR_30)
  FUNC_6(VAR_28, "SSU_ECC_MULTI_BIT_INT_0",
    &VAR_21[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 VAR_30 = FUNC_7(*(VAR_29 + 3)) & FUNC_0(0);
 if (VAR_30) {
  FUNC_1(VAR_28, "SSU_ECC_MULTI_BIT_INT_1 ssu_mem32_ecc_mbit_err found [error status=0x%x]\n",
   VAR_30);
  FUNC_8(VAR_8, &VAR_27->hw_err_reset_req);
 }

 VAR_30 = FUNC_7(*(VAR_29 + 4)) & VAR_7;
 if (VAR_30)
  FUNC_6(VAR_28, "SSU_COMMON_ERR_INT",
    &VAR_20[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[3];
 VAR_30 = FUNC_7(*VAR_29) & VAR_0;
 if (VAR_30)
  FUNC_6(VAR_28, "IGU_INT_STS",
    &VAR_10[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[4];
 VAR_30 = FUNC_7(*(VAR_29 + 1));
 if (VAR_30)
  FUNC_6(VAR_28, "PPP_MPF_ABNORMAL_INT_ST1",
    &VAR_14[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 VAR_30 = FUNC_7(*(VAR_29 + 3)) & VAR_2;
 if (VAR_30)
  FUNC_6(VAR_28, "PPP_MPF_ABNORMAL_INT_ST3",
    &VAR_15[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[5];
 VAR_30 = FUNC_7(*(VAR_29 + 1));
 if (VAR_30) {
  FUNC_1(VAR_28,
   "PPU_MPF_ABNORMAL_INT_ST1 rpu_rx_pkt_ecc_mbit_err found\n");
  FUNC_8(VAR_8, &VAR_27->hw_err_reset_req);
 }

 VAR_30 = FUNC_7(*(VAR_29 + 2));
 if (VAR_30)
  FUNC_6(VAR_28, "PPU_MPF_ABNORMAL_INT_ST2",
    &VAR_16[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 VAR_30 = FUNC_7(*(VAR_29 + 3)) & VAR_3;
 if (VAR_30)
  FUNC_6(VAR_28, "PPU_MPF_ABNORMAL_INT_ST3",
    &VAR_17[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[6];
 VAR_30 = FUNC_7(*VAR_29);
 if (VAR_30)
  FUNC_6(VAR_28, "TM_SCH_RINT",
    &VAR_22[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[7];
 VAR_30 = FUNC_7(*VAR_29) & VAR_5;
 if (VAR_30)
  FUNC_6(VAR_28, "QCN_FIFO_RINT",
    &VAR_19[0], VAR_30,
    &VAR_27->hw_err_reset_req);

 VAR_30 = FUNC_7(*(VAR_29 + 1)) & VAR_4;
 if (VAR_30)
  FUNC_6(VAR_28, "QCN_ECC_RINT",
    &VAR_18[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 VAR_29 = (__le32 *)&VAR_25[9];
 VAR_30 = FUNC_7(*VAR_29) & VAR_1;
 if (VAR_30)
  FUNC_6(VAR_28, "NCSI_ECC_INT_RPT",
    &VAR_13[0], VAR_30,
    &VAR_27->hw_err_reset_req);


 FUNC_3(&VAR_25[0], 0);
 VAR_31 = FUNC_4(&VAR_24->hw, &VAR_25[0], VAR_26);
 if (VAR_31)
  FUNC_1(VAR_28, "clear all mpf ras int cmd failed (%d)\n", VAR_31);

 return VAR_31;
}
