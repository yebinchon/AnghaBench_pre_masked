
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_mac_tnl_stats {int status; scalar_t__ time; } ;
struct hclge_dev {TYPE_1__* pdev; int mac_tnl_log; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned long FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *,struct hclge_mac_tnl_stats*) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_1)
{


 struct hclge_mac_tnl_stats VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_1->pdev->dev, "Recently generated mac tnl interruption:\n");

 while (FUNC_2(&VAR_1->mac_tnl_log, &VAR_2)) {
  VAR_3 = FUNC_1(VAR_2.time, 1000000000);
  FUNC_0(&VAR_1->pdev->dev, "[%07lu.%03lu] status = 0x%x\n",
    (unsigned long)VAR_2.time, VAR_3 / 1000,
    VAR_2.status);
 }
}
