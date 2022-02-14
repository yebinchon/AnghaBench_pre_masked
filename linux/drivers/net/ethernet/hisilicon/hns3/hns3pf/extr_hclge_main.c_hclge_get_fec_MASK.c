
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mac {int fec_mode; int fec_ability; } ;
struct TYPE_2__ {struct hclge_mac mac; } ;
struct hclge_dev {TYPE_1__ hw; } ;


 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static void FUNC_1(struct hnae3_handle *VAR_0, u8 *VAR_1,
     u8 *VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_0(VAR_0);
 struct hclge_dev *VAR_4 = VAR_3->back;
 struct hclge_mac *VAR_5 = &VAR_4->hw.mac;

 if (VAR_1)
  *VAR_1 = VAR_5->fec_ability;
 if (VAR_2)
  *VAR_2 = VAR_5->fec_mode;
}
