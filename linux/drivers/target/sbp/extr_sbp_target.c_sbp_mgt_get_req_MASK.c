
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct TYPE_2__ {int map_tag; int map_cpu; int tag; } ;
struct sbp_target_request {TYPE_1__ se_cmd; } ;
struct sbp_session {struct se_session* se_sess; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 struct sbp_target_request* FUNC_0 (int ) ;
 int FUNC_1 (struct sbp_target_request*,int ,int) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static struct sbp_target_request *FUNC_3(struct sbp_session *VAR_1,
 struct fw_card *VAR_2, u64 VAR_3)
{
 struct se_session *VAR_4 = VAR_1->se_sess;
 struct sbp_target_request *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(&VAR_4->sess_tag_pool, &VAR_7);
 if (VAR_6 < 0)
  return FUNC_0(-VAR_0);

 VAR_5 = &((struct sbp_target_request *)VAR_4->sess_cmd_map)[VAR_6];
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->se_cmd.map_tag = VAR_6;
 VAR_5->se_cmd.map_cpu = VAR_7;
 VAR_5->se_cmd.tag = VAR_3;

 return VAR_5;
}
