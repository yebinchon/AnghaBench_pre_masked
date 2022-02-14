
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mac {int fec_ability; int user_fec_mode; } ;
struct TYPE_3__ {struct hclge_mac mac; } ;
struct hclge_dev {TYPE_2__* pdev; TYPE_1__ hw; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_4(struct hnae3_handle *VAR_2, u32 VAR_3)
{
 struct hclge_vport *VAR_4 = FUNC_2(VAR_2);
 struct hclge_dev *VAR_5 = VAR_4->back;
 struct hclge_mac *VAR_6 = &VAR_5->hw.mac;
 int VAR_7;

 if (VAR_3 && !(VAR_6->fec_ability & VAR_3)) {
  FUNC_1(&VAR_5->pdev->dev, "unsupported fec mode\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_6->user_fec_mode = VAR_3 | FUNC_0(VAR_1);
 return 0;
}
