
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ring_chain_node {int dummy; } ;
struct hclge_vport {int dummy; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; } ;
typedef int ring_chain ;


 int FUNC_0 (struct hclge_vport*,int,int,struct hnae3_ring_chain_node*) ;
 int FUNC_1 (struct hnae3_ring_chain_node*) ;
 int FUNC_2 (struct hclge_mbx_vf_to_pf_cmd*,struct hnae3_ring_chain_node*,struct hclge_vport*) ;
 int FUNC_3 (struct hnae3_ring_chain_node*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_vport *VAR_0, bool VAR_1,
          struct hclge_mbx_vf_to_pf_cmd *VAR_2)
{
 struct hnae3_ring_chain_node VAR_3;
 int VAR_4 = VAR_2->msg[1];
 int VAR_5;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_5 = FUNC_2(VAR_2, &VAR_3, VAR_0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_1, &VAR_3);

 FUNC_1(&VAR_3);

 return VAR_5;
}
