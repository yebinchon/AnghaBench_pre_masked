
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct qed_vf_info {int vport_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_link_state {int speed; } ;
struct qed_hwfn {int cdev; } ;
struct TYPE_4__ {TYPE_1__* mcp_info; } ;
struct TYPE_3__ {struct qed_mcp_link_state link_output; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,int *) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int ) ;
 struct qed_vf_info* FUNC_3 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_1,
         struct qed_ptt *VAR_2, int VAR_3, int VAR_4)
{
 struct qed_mcp_link_state *VAR_5;
 struct qed_vf_info *VAR_6;
 u8 VAR_7 = 0;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_1, (u16)VAR_3, 1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_1, VAR_6->vport_id, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_5 = &FUNC_0(VAR_1->cdev)->mcp_info->link_output;

 return FUNC_2(VAR_1, VAR_2, VAR_7, (u32)VAR_4,
     VAR_5->speed);
}
