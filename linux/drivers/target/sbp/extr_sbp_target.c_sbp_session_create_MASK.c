
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sbp_tpg {int se_tpg; } ;
struct sbp_target_request {int dummy; } ;
struct sbp_session {int se_sess; int guid; int maint_work; int login_list; int lock; } ;
typedef int guid_str ;


 int VAR_0 ;
 struct sbp_session* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct sbp_session*) ;
 struct sbp_session* FUNC_6 (int,int ) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int FUNC_8 (char*,int,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,int ,char*,struct sbp_session*,int *) ;

__attribute__((used)) static struct sbp_session *FUNC_11(
  struct sbp_tpg *VAR_4,
  u64 VAR_5)
{
 struct sbp_session *VAR_6;
 int VAR_7;
 char VAR_8[17];

 FUNC_8(VAR_8, sizeof(VAR_8), "%016llx", VAR_5);

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_9(&VAR_6->lock);
 FUNC_2(&VAR_6->login_list);
 FUNC_1(&VAR_6->maint_work, VAR_3);
 VAR_6->guid = VAR_5;

 VAR_6->se_sess = FUNC_10(&VAR_4->se_tpg, 128,
          sizeof(struct sbp_target_request),
          VAR_2, VAR_8,
          VAR_6, ((void*)0));
 if (FUNC_3(VAR_6->se_sess)) {
  FUNC_7("failed to init se_session\n");
  VAR_7 = FUNC_4(VAR_6->se_sess);
  FUNC_5(VAR_6);
  return FUNC_0(VAR_7);
 }

 return VAR_6;
}
