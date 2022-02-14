
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_desc*,int,int) ;
 int FUNC_2 (int *,struct hclge_desc*,int) ;
 int FUNC_3 (struct hclge_desc*,int ,int) ;
 int FUNC_4 (struct hclge_dev*,unsigned long*) ;
 int FUNC_5 (struct device*,char*,int *,int,unsigned long*) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct hclge_dev *VAR_7,
          struct hclge_desc *VAR_8,
          int VAR_9,
          unsigned long *VAR_10)
{
 struct device *VAR_11 = &VAR_7->pdev->dev;
 __le32 *VAR_12;
 u32 VAR_13;
 int VAR_14;


 FUNC_3(&VAR_8[0], VAR_2,
       1);
 VAR_14 = FUNC_2(&VAR_7->hw, &VAR_8[0], VAR_9);
 if (VAR_14) {
  FUNC_0(VAR_11, "query all pf msix int cmd failed (%d)\n", VAR_14);
  return VAR_14;
 }


 VAR_13 = FUNC_6(VAR_8[0].data[0]) & VAR_3;
 if (VAR_13)
  FUNC_5(VAR_11, "SSU_PORT_BASED_ERR_INT",
    &VAR_6[0],
    VAR_13, VAR_10);


 VAR_12 = (__le32 *)&VAR_8[2];
 VAR_13 = FUNC_6(*VAR_12);
 if (VAR_13)
  FUNC_5(VAR_11, "PPP_PF_ABNORMAL_INT_ST0",
    &VAR_4[0],
    VAR_13, VAR_10);


 VAR_12 = (__le32 *)&VAR_8[3];
 VAR_13 = FUNC_6(*VAR_12) & VAR_0;
 if (VAR_13)
  FUNC_5(VAR_11, "PPU_PF_ABNORMAL_INT_ST",
    &VAR_5[0],
    VAR_13, VAR_10);

 VAR_13 = FUNC_6(*VAR_12) & VAR_1;
 if (VAR_13)
  FUNC_4(VAR_7, VAR_10);


 VAR_14 = FUNC_1(VAR_7, VAR_8, 0, VAR_9);
 if (VAR_14)
  FUNC_0(VAR_11, "clear all pf msix int cmd failed (%d)\n", VAR_14);

 return VAR_14;
}
