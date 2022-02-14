
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_vport {int nic; } ;
struct hclge_mbx_vf_to_pf_cmd {int * msg; } ;
typedef int queue_id ;
typedef int qid_in_pf ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_vport *VAR_0,
        struct hclge_mbx_vf_to_pf_cmd *VAR_1)
{
 u16 VAR_2, VAR_3;
 u8 VAR_4[2];

 FUNC_2(&VAR_2, &VAR_1->msg[2], sizeof(VAR_2));
 VAR_3 = FUNC_0(&VAR_0->nic, VAR_2);
 FUNC_2(VAR_4, &VAR_3, sizeof(VAR_3));

 return FUNC_1(VAR_0, VAR_1, 0, VAR_4, 2);
}
