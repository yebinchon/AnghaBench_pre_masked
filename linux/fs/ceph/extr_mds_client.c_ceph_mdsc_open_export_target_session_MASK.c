
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int dummy; } ;
struct ceph_mds_client {int mutex; } ;


 struct ceph_mds_session* FUNC_0 (struct ceph_mds_client*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct ceph_mds_session *
FUNC_4(struct ceph_mds_client *VAR_0, int VAR_1)
{
 struct ceph_mds_session *VAR_2;

 FUNC_1("open_export_target_session to mds%d\n", VAR_1);

 FUNC_2(&VAR_0->mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_3(&VAR_0->mutex);

 return VAR_2;
}
