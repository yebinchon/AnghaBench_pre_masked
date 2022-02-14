
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_mcp_link_capabilities {int speed_capabilities; } ;
struct qed_hwfn {int dummy; } ;
struct qed_bulletin_content {int capability_speed; } ;


 int FUNC_0 (struct qed_mcp_link_capabilities*,int ,int) ;

void FUNC_1(struct qed_hwfn *VAR_0,
       struct qed_mcp_link_capabilities *VAR_1,
       struct qed_bulletin_content *VAR_2)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->speed_capabilities = VAR_2->capability_speed;
}
