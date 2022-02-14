
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {scalar_t__ autoneg; scalar_t__ support_autoneg; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_0, bool VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_3 = VAR_2->back;

 if (VAR_3->hw.mac.support_autoneg && VAR_3->hw.mac.autoneg)
  return FUNC_1(VAR_3, !VAR_1);

 return 0;
}
