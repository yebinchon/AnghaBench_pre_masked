
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_session {int dummy; } ;
struct iscsi_conn {scalar_t__ auth_id; int stat_sn; int cid; struct iscsi_session* sess; } ;
typedef int __be16 ;
struct TYPE_2__ {int auth_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(
 struct iscsi_session *VAR_2,
 struct iscsi_conn *VAR_3,
 __be16 VAR_4)
{
 int VAR_5;
 VAR_3->sess = VAR_2;
 VAR_3->cid = FUNC_0(VAR_4);




 VAR_5 = FUNC_1(&VAR_3->stat_sn, sizeof(u32));
 if (FUNC_4(VAR_5))
  return VAR_5;

 FUNC_2(&VAR_0);
 VAR_3->auth_id = VAR_1->auth_id++;
 FUNC_3(&VAR_0);
 return 0;
}
