
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct se_session {struct se_portal_group* se_tpg; } ;
struct se_portal_group {int se_tpg_tfo; } ;
struct se_cmd {int work; TYPE_1__* se_tmr_req; } ;
typedef int gfp_t ;
struct TYPE_2__ {int ref_task_tag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_2 (struct se_cmd*,void*,unsigned char,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (struct se_cmd*,int) ;
 int FUNC_6 (struct se_session*,int ,int *) ;
 int FUNC_7 (struct se_cmd*) ;
 int FUNC_8 (struct se_cmd*,int ,struct se_session*,int ,int ,int ,unsigned char*) ;
 int FUNC_9 (struct se_cmd*,int ) ;

int FUNC_10(struct se_cmd *VAR_7, struct se_session *VAR_8,
  unsigned char *VAR_9, u64 VAR_10,
  void *VAR_11, unsigned char VAR_12,
  gfp_t VAR_13, u64 VAR_14, int VAR_15)
{
 struct se_portal_group *VAR_16;
 int VAR_17;

 VAR_16 = VAR_8->se_tpg;
 FUNC_0(!VAR_16);

 FUNC_8(VAR_7, VAR_16->se_tpg_tfo, VAR_8,
         0, VAR_0, VAR_4, VAR_9);




 VAR_17 = FUNC_2(VAR_7, VAR_11, VAR_12, VAR_13);
 if (VAR_17 < 0)
  return -VAR_1;

 if (VAR_12 == VAR_5)
  VAR_7->se_tmr_req->ref_task_tag = VAR_14;


 VAR_17 = FUNC_5(VAR_7, VAR_15 & VAR_2);
 if (VAR_17) {
  FUNC_3(VAR_7->se_tmr_req);
  return VAR_17;
 }





 if (VAR_12 == VAR_5 && (VAR_15 & VAR_3)) {
  if (!FUNC_6(VAR_8, VAR_14, &VAR_10))
   goto failure;
 }

 VAR_17 = FUNC_9(VAR_7, VAR_10);
 if (VAR_17)
  goto failure;

 FUNC_7(VAR_7);
 return 0;





failure:
 FUNC_1(&VAR_7->work, VAR_6);
 FUNC_4(&VAR_7->work);
 return 0;
}
