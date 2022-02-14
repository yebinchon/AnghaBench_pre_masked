
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_knic_private_info {int num_tqps; } ;
struct hnae3_handle {int dummy; } ;
struct TYPE_4__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {TYPE_2__ nic; struct hclge_dev* back; } ;
struct hclge_dev {TYPE_1__* pdev; } ;
typedef enum hnae3_loop { ____Placeholder_hnae3_loop } hnae3_loop ;
struct TYPE_3__ {int revision; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct hclge_dev*,int ,int ,int ) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hclge_dev*,int) ;
 int FUNC_5 (struct hclge_dev*,int) ;
 int FUNC_6 (struct hclge_dev*,int,int) ;
 int FUNC_7 (struct hclge_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_8(struct hnae3_handle *VAR_4,
         enum hnae3_loop VAR_5, bool VAR_6)
{
 struct hclge_vport *VAR_7 = FUNC_3(VAR_4);
 struct hnae3_knic_private_info *VAR_8;
 struct hclge_dev *VAR_9 = VAR_7->back;
 int VAR_10, VAR_11;






 if (VAR_9->pdev->revision >= 0x21) {
  u8 VAR_12 = VAR_6 ? 0 : FUNC_0(VAR_1);

  VAR_11 = FUNC_2(VAR_9, VAR_3, VAR_12,
      VAR_2);
  if (VAR_11)
   return VAR_11;
 }

 switch (VAR_5) {
 case 131:
  VAR_11 = FUNC_4(VAR_9, VAR_6);
  break;
 case 128:
 case 130:
  VAR_11 = FUNC_6(VAR_9, VAR_6, VAR_5);
  break;
 case 129:
  VAR_11 = FUNC_5(VAR_9, VAR_6);
  break;
 default:
  VAR_11 = -VAR_0;
  FUNC_1(&VAR_9->pdev->dev,
   "loop_mode %d is not supported\n", VAR_5);
  break;
 }

 if (VAR_11)
  return VAR_11;

 VAR_8 = &VAR_7->nic.kinfo;
 for (VAR_10 = 0; VAR_10 < VAR_8->num_tqps; VAR_10++) {
  VAR_11 = FUNC_7(VAR_9, VAR_10, 0, VAR_6);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
