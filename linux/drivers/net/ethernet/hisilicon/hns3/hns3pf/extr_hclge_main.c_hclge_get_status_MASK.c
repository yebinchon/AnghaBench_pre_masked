
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {int link; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_0)
{
 struct hclge_vport *VAR_1 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_2 = VAR_1->back;

 FUNC_1(VAR_2);

 return VAR_2->hw.mac.link;
}
