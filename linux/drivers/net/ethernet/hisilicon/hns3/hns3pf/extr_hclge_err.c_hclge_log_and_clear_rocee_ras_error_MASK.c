
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct device {int dummy; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct hclge_dev*,struct hclge_desc*,int ,int ) ;
 int FUNC_2 (struct hclge_desc*,int) ;
 int FUNC_3 (int *,struct hclge_desc*,int) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hclge_dev*) ;
 int FUNC_6 (struct hclge_dev*) ;
 unsigned int FUNC_7 (int ) ;

__attribute__((used)) static enum hnae3_reset_type
FUNC_8(struct hclge_dev *VAR_9)
{
 enum hnae3_reset_type VAR_10 = VAR_8;
 struct device *VAR_11 = &VAR_9->pdev->dev;
 struct hclge_desc VAR_12[2];
 unsigned int VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(VAR_9, &VAR_12[0],
        VAR_0, 0);
 if (VAR_14) {
  FUNC_0(VAR_11, "failed(%d) to query ROCEE RAS INT SRC\n", VAR_14);

  return VAR_7;
 }

 VAR_13 = FUNC_7(VAR_12[0].data[0]);

 if (VAR_13 & VAR_1) {
  if (VAR_13 & VAR_5)
   FUNC_0(VAR_11, "ROCEE RAS AXI rresp error\n");

  if (VAR_13 & VAR_2)
   FUNC_0(VAR_11, "ROCEE RAS AXI bresp error\n");

  VAR_10 = VAR_6;

  VAR_14 = FUNC_4(VAR_9);
  if (VAR_14)
   return VAR_7;
 }

 if (VAR_13 & VAR_3) {
  FUNC_0(VAR_11, "ROCEE RAS 2bit ECC error\n");
  VAR_10 = VAR_7;

  VAR_14 = FUNC_5(VAR_9);
  if (VAR_14)
   return VAR_7;
 }

 if (VAR_13 & VAR_4) {
  VAR_14 = FUNC_6(VAR_9);
  if (VAR_14) {
   FUNC_0(VAR_11, "failed(%d) to process ovf error\n", VAR_14);

   return VAR_7;
  }
 }


 FUNC_2(&VAR_12[0], 0);
 VAR_14 = FUNC_3(&VAR_9->hw, &VAR_12[0], 1);
 if (VAR_14) {
  FUNC_0(VAR_11, "failed(%d) to clear ROCEE RAS error\n", VAR_14);

  return VAR_7;
 }

 return VAR_10;
}
