
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int dummy; } ;
struct hclge_dev {int num_rx_desc; int num_tx_desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_1,
        struct hclge_mbx_vf_to_pf_cmd *VAR_2,
        bool VAR_3)
{

 u8 VAR_4[4];
 struct hclge_dev *VAR_5 = VAR_1->back;


 FUNC_1(&VAR_4[0], &VAR_5->num_tx_desc, sizeof(u16));
 FUNC_1(&VAR_4[2], &VAR_5->num_rx_desc, sizeof(u16));
 return FUNC_0(VAR_1, VAR_2, 0, VAR_4,
        4);
}
