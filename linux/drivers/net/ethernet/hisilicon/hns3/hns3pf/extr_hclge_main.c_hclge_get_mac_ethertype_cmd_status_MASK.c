
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hclge_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;




 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_1,
           u16 VAR_2, u8 VAR_3)
{





 int VAR_4;

 if (VAR_2) {
  FUNC_0(&VAR_1->pdev->dev,
   "cmdq execute failed for get_mac_ethertype_cmd_status, status=%d.\n",
   VAR_2);
  return -VAR_0;
 }

 switch (VAR_3) {
 case 0:
 case 1:
  VAR_4 = 0;
  break;
 case 2:
  FUNC_0(&VAR_1->pdev->dev,
   "add mac ethertype failed for manager table overflow.\n");
  VAR_4 = -VAR_0;
  break;
 case 3:
  FUNC_0(&VAR_1->pdev->dev,
   "add mac ethertype failed for key conflict.\n");
  VAR_4 = -VAR_0;
  break;
 default:
  FUNC_0(&VAR_1->pdev->dev,
   "add mac ethertype failed for undefined, code=%d.\n",
   VAR_3);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
