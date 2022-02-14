
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hclge_desc*,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int * VAR_4 ;
 int FUNC_4 (struct device*,char*,int *,int,int *) ;
 int * VAR_5 ;
 int FUNC_5 (struct hclge_dev*,int ) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_9,
         struct hclge_desc *VAR_10,
         int VAR_11)
{
 struct hnae3_ae_dev *VAR_12 = VAR_9->ae_dev;
 struct device *VAR_13 = &VAR_9->pdev->dev;
 __le32 *VAR_14;
 u32 VAR_15;
 int VAR_16;


 FUNC_3(&VAR_10[0], VAR_2,
       1);
 VAR_16 = FUNC_2(&VAR_9->hw, &VAR_10[0], VAR_11);
 if (VAR_16) {
  FUNC_0(VAR_13, "query all pf ras int cmd failed (%d)\n", VAR_16);
  return VAR_16;
 }


 VAR_15 = FUNC_6(VAR_10[0].data[0]);
 if (VAR_15)
  FUNC_4(VAR_13, "SSU_PORT_BASED_ERR_INT",
    &VAR_8[0], VAR_15,
    &VAR_12->hw_err_reset_req);

 VAR_15 = FUNC_6(VAR_10[0].data[1]);
 if (VAR_15)
  FUNC_4(VAR_13, "SSU_FIFO_OVERFLOW_INT",
    &VAR_7[0], VAR_15,
    &VAR_12->hw_err_reset_req);

 VAR_15 = FUNC_6(VAR_10[0].data[2]);
 if (VAR_15)
  FUNC_4(VAR_13, "SSU_ETS_TCG_INT",
    &VAR_6[0], VAR_15,
    &VAR_12->hw_err_reset_req);


 VAR_14 = (__le32 *)&VAR_10[1];
 VAR_15 = FUNC_6(*VAR_14) & VAR_0;
 if (VAR_15)
  FUNC_4(VAR_13, "IGU_EGU_TNL_INT_STS",
    &VAR_4[0], VAR_15,
    &VAR_12->hw_err_reset_req);


 VAR_14 = (__le32 *)&VAR_10[3];
 VAR_15 = FUNC_6(*VAR_14) & VAR_1;
 if (VAR_15) {
  FUNC_4(VAR_13, "PPU_PF_ABNORMAL_INT_ST0",
    &VAR_5[0], VAR_15,
    &VAR_12->hw_err_reset_req);
  FUNC_5(VAR_9, VAR_3);
 }


 FUNC_1(&VAR_10[0], 0);
 VAR_16 = FUNC_2(&VAR_9->hw, &VAR_10[0], VAR_11);
 if (VAR_16)
  FUNC_0(VAR_13, "clear all pf ras int cmd failed (%d)\n", VAR_16);

 return VAR_16;
}
