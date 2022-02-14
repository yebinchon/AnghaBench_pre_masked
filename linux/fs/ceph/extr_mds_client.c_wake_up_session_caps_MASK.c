
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int s_mds; } ;


 int FUNC_0 (struct ceph_mds_session*,int ,void*) ;
 int FUNC_1 (char*,struct ceph_mds_session*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct ceph_mds_session *VAR_1, int VAR_2)
{
 FUNC_1("wake_up_session_caps %p mds%d\n", VAR_1, VAR_1->s_mds);
 FUNC_0(VAR_1, VAR_0,
      (void *)(unsigned long)VAR_2);
}
