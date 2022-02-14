
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_session {int s_cap_lock; scalar_t__ s_cap_ttl; int s_mds; scalar_t__ s_renew_requested; } ;
struct ceph_mds_client {TYPE_1__* mdsmap; } ;
struct TYPE_2__ {int m_session_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,scalar_t__,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct ceph_mds_session*,int ) ;

__attribute__((used)) static void FUNC_7(struct ceph_mds_client *VAR_3,
    struct ceph_mds_session *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 FUNC_2(&VAR_4->s_cap_lock);
 VAR_6 = VAR_5 && FUNC_4(VAR_2, VAR_4->s_cap_ttl);

 VAR_4->s_cap_ttl = VAR_4->s_renew_requested +
  VAR_3->mdsmap->m_session_timeout*VAR_0;

 if (VAR_6) {
  if (FUNC_5(VAR_2, VAR_4->s_cap_ttl)) {
   FUNC_1("mds%d caps renewed\n", VAR_4->s_mds);
   VAR_7 = 1;
  } else {
   FUNC_1("mds%d caps still stale\n", VAR_4->s_mds);
  }
 }
 FUNC_0("renewed_caps mds%d ttl now %lu, was %s, now %s\n",
      VAR_4->s_mds, VAR_4->s_cap_ttl, VAR_6 ? "stale" : "fresh",
      FUNC_5(VAR_2, VAR_4->s_cap_ttl) ? "stale" : "fresh");
 FUNC_3(&VAR_4->s_cap_lock);

 if (VAR_7)
  FUNC_6(VAR_4, VAR_1);
}
