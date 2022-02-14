
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct TYPE_4__ {unsigned long* supported; unsigned long* advertising; } ;
struct TYPE_3__ {TYPE_2__ mac; } ;
struct hclge_dev {TYPE_1__ hw; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_2(struct hnae3_handle *VAR_1,
    unsigned long *VAR_2,
    unsigned long *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_0);
 struct hclge_vport *VAR_5 = FUNC_1(VAR_1);
 struct hclge_dev *VAR_6 = VAR_5->back;
 unsigned int VAR_7 = 0;

 for (; VAR_7 < VAR_4; VAR_7++) {
  VAR_2[VAR_7] = VAR_6->hw.mac.supported[VAR_7];
  VAR_3[VAR_7] = VAR_6->hw.mac.advertising[VAR_7];
 }
}
