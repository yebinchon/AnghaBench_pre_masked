
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int map_tag; int map_cpu; int tag; } ;
struct usbg_cmd {struct f_uas* fu; int tag; TYPE_1__ se_cmd; } ;
struct tcm_usbg_nexus {struct se_session* tvn_se_sess; } ;
struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct f_uas {int dummy; } ;


 int VAR_0 ;
 struct usbg_cmd* FUNC_0 (int ) ;
 int FUNC_1 (struct usbg_cmd*,int ,int) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static struct usbg_cmd *FUNC_3(struct f_uas *VAR_1,
  struct tcm_usbg_nexus *VAR_2, u32 VAR_3)
{
 struct se_session *VAR_4 = VAR_2->tvn_se_sess;
 struct usbg_cmd *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(&VAR_4->sess_tag_pool, &VAR_7);
 if (VAR_6 < 0)
  return FUNC_0(-VAR_0);

 VAR_5 = &((struct usbg_cmd *)VAR_4->sess_cmd_map)[VAR_6];
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->se_cmd.map_tag = VAR_6;
 VAR_5->se_cmd.map_cpu = VAR_7;
 VAR_5->se_cmd.tag = VAR_5->tag = VAR_3;
 VAR_5->fu = VAR_1;

 return VAR_5;
}
