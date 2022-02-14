
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hclge_dev {int reset_type; int misc_vector; int hw; TYPE_1__* pdev; } ;
struct TYPE_2__ {int revision; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_3)
{
 u32 VAR_4 = 0;

 switch (VAR_3->reset_type) {
 case 128:
  VAR_4 = FUNC_0(VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_1);
  break;
 default:
  break;
 }

 if (!VAR_4)
  return;




 if (VAR_3->pdev->revision == 0x20)
  FUNC_2(&VAR_3->hw, VAR_0,
    VAR_4);

 FUNC_1(&VAR_3->misc_vector, 1);
}
