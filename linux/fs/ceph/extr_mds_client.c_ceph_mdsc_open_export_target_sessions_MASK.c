
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_session {int dummy; } ;
struct ceph_mds_client {int mutex; } ;


 int FUNC_0 (struct ceph_mds_client*,struct ceph_mds_session*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ceph_mds_client *VAR_0,
        struct ceph_mds_session *VAR_1)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->mutex);
}
