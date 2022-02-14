
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hclge_dev {int hw; TYPE_1__* pdev; } ;
struct hclge_desc {int * data; } ;
struct device {int dummy; } ;
typedef enum hclge_opcode_type { ____Placeholder_hclge_opcode_type } hclge_opcode_type ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_7, bool VAR_8,
         int *VAR_9, int *VAR_10)
{
 struct device *VAR_11 = &VAR_7->pdev->dev;
 u32 VAR_12, VAR_13;
 enum hclge_opcode_type VAR_14;
 struct hclge_desc VAR_15;
 int VAR_16;

 if (VAR_8) {
  VAR_14 = VAR_6;
  VAR_12 = VAR_2;
  VAR_13 = VAR_4;
 } else {
  VAR_14 = VAR_5;
  VAR_12 = VAR_1;
  VAR_13 = VAR_3;
 }

 FUNC_2(&VAR_15, VAR_14, 1);
 VAR_16 = FUNC_1(&VAR_7->hw, &VAR_15, 1);
 if (VAR_16) {
  FUNC_0(VAR_11, "fail(%d) to query msix int status bd num\n",
   VAR_16);
  return VAR_16;
 }

 *VAR_9 = FUNC_3(VAR_15.data[0]);
 *VAR_10 = FUNC_3(VAR_15.data[1]);
 if (*VAR_9 < VAR_12 || *VAR_10 < VAR_13) {
  FUNC_0(VAR_11, "Invalid bd num: mpf(%d), pf(%d)\n",
   *VAR_9, *VAR_10);
  return -VAR_0;
 }

 return 0;
}
