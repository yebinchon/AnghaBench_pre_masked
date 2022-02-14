
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vf_tc_map ;
typedef int u8 ;
struct hnae3_knic_private_info {unsigned int num_tc; } ;
struct TYPE_2__ {struct hnae3_knic_private_info kinfo; } ;
struct hclge_vport {TYPE_1__ nic; } ;
struct hclge_mbx_vf_to_pf_cmd {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_0,
          struct hclge_mbx_vf_to_pf_cmd *VAR_1,
          bool VAR_2)
{
 struct hnae3_knic_private_info *VAR_3 = &VAR_0->nic.kinfo;
 u8 VAR_4 = 0;
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_tc; VAR_5++)
  VAR_4 |= FUNC_0(VAR_5);

 VAR_6 = FUNC_1(VAR_0, VAR_1, 0, &VAR_4,
       sizeof(VAR_4));

 return VAR_6;
}
