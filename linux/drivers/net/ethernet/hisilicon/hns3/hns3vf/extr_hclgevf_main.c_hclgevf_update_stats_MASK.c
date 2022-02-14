
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {int dummy; } ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 struct hclgevf_dev* FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_3(struct hnae3_handle *VAR_0,
     struct net_device_stats *VAR_1)
{
 struct hclgevf_dev *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  FUNC_0(&VAR_2->pdev->dev,
   "VF update of TQPS stats fail, status = %d.\n",
   VAR_3);
}
