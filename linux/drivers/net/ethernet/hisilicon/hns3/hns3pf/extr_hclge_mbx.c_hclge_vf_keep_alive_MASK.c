
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_vport {int last_active_jiffies; } ;
struct hclge_mbx_vf_to_pf_cmd {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hclge_vport *VAR_1,
    struct hclge_mbx_vf_to_pf_cmd *VAR_2)
{
 VAR_1->last_active_jiffies = VAR_0;
}
