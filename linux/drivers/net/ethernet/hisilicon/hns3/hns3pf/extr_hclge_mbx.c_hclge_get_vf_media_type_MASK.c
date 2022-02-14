
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int dummy; } ;
struct TYPE_3__ {int module_type; int media_type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; } ;
typedef int resp_data ;


 int FUNC_0 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct hclge_vport *VAR_0,
       struct hclge_mbx_vf_to_pf_cmd *VAR_1)
{
 struct hclge_dev *VAR_2 = VAR_0->back;
 u8 VAR_3[2];

 VAR_3[0] = VAR_2->hw.mac.media_type;
 VAR_3[1] = VAR_2->hw.mac.module_type;
 return FUNC_0(VAR_0, VAR_1, 0, VAR_3,
        sizeof(VAR_3));
}
