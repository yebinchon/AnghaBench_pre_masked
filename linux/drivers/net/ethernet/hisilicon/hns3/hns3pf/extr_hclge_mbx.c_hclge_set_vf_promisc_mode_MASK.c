
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int back; int vport_id; } ;
struct hclge_promisc_param {int dummy; } ;
struct hclge_mbx_vf_to_pf_cmd {scalar_t__* msg; } ;


 int FUNC_0 (int ,struct hclge_promisc_param*) ;
 int FUNC_1 (struct hclge_promisc_param*,int,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_0,
         struct hclge_mbx_vf_to_pf_cmd *VAR_1)
{
 bool VAR_2 = VAR_1->msg[1] ? 1 : 0;
 struct hclge_promisc_param VAR_3;


 FUNC_1(&VAR_3, 0, 0, VAR_2, VAR_0->vport_id);
 return FUNC_0(VAR_0->back, &VAR_3);
}
