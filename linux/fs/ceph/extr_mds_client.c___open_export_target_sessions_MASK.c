
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_session {int s_mds; } ;
struct ceph_mds_info {int num_export_targets; int * export_targets; } ;
struct ceph_mds_client {TYPE_1__* mdsmap; } ;
struct TYPE_2__ {int m_num_mds; struct ceph_mds_info* m_info; } ;


 int FUNC_0 (struct ceph_mds_session*) ;
 struct ceph_mds_session* FUNC_1 (struct ceph_mds_client*,int ) ;
 int FUNC_2 (struct ceph_mds_session*) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ceph_mds_client *VAR_0,
       struct ceph_mds_session *VAR_1)
{
 struct ceph_mds_info *VAR_2;
 struct ceph_mds_session *VAR_3;
 int VAR_4, VAR_5 = VAR_1->s_mds;

 if (VAR_5 >= VAR_0->mdsmap->m_num_mds)
  return;

 VAR_2 = &VAR_0->mdsmap->m_info[VAR_5];
 FUNC_3("open_export_target_sessions for mds%d (%d targets)\n",
      VAR_1->s_mds, VAR_2->num_export_targets);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_export_targets; VAR_4++) {
  VAR_3 = FUNC_1(VAR_0, VAR_2->export_targets[VAR_4]);
  if (!FUNC_0(VAR_3))
   FUNC_2(VAR_3);
 }
}
