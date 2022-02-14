
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {int dummy; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_desc*,int,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct device*,char*,int *,int,unsigned long*) ;
 int * VAR_2 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hclge_dev *VAR_3,
           struct hclge_desc *VAR_4,
           int VAR_5,
           unsigned long *VAR_6)
{
 struct device *VAR_7 = &VAR_3->pdev->dev;
 __le32 *VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_3(&VAR_4[0], VAR_1,
       1);
 VAR_10 = FUNC_2(&VAR_3->hw, &VAR_4[0], VAR_5);
 if (VAR_10) {
  FUNC_0(VAR_7, "query all mpf msix int cmd failed (%d)\n", VAR_10);
  return VAR_10;
 }


 VAR_8 = (__le32 *)&VAR_4[1];
 VAR_9 = FUNC_5(*VAR_8);
 if (VAR_9)
  FUNC_4(VAR_7, "MAC_AFIFO_TNL_INT_R",
    &VAR_2[0], VAR_9,
    VAR_6);


 VAR_8 = (__le32 *)&VAR_4[5];
 VAR_9 = FUNC_5(*(VAR_8 + 2)) &
   VAR_0;
 if (VAR_9)
  FUNC_0(VAR_7, "PPU_MPF_ABNORMAL_INT_ST2 rx_q_search_miss found [dfx status=0x%x\n]",
   VAR_9);


 VAR_10 = FUNC_1(VAR_3, VAR_4, 1, VAR_5);
 if (VAR_10)
  FUNC_0(VAR_7, "clear all mpf msix int cmd failed (%d)\n", VAR_10);

 return VAR_10;
}
