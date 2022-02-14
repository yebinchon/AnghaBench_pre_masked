
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_vport {int dummy; } ;
struct hclge_mbx_vf_to_pf_cmd {int * msg; } ;
typedef int mtu ;


 int FUNC_0 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int,int *,int ) ;
 int FUNC_1 (struct hclge_vport*,int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hclge_vport *VAR_0,
       struct hclge_mbx_vf_to_pf_cmd *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 FUNC_2(&VAR_3, &VAR_1->msg[2], sizeof(VAR_3));
 VAR_2 = FUNC_1(VAR_0, VAR_3);

 return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), 0);
}
