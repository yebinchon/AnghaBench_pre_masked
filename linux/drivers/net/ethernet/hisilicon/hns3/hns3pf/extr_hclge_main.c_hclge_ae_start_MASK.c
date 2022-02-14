
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_3__ {scalar_t__ link; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hclge_dev*,int) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclge_dev*) ;
 int FUNC_4 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_5(struct hnae3_handle *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_2(VAR_1);
 struct hclge_dev *VAR_3 = VAR_2->back;


 FUNC_1(VAR_3, 1);
 FUNC_0(VAR_0, &VAR_3->state);
 VAR_3->hw.mac.link = 0;


 FUNC_4(VAR_1);

 FUNC_3(VAR_3);

 return 0;
}
