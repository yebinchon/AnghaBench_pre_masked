
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_snap_realm {int dummy; } ;
struct ceph_mds_client {int dummy; } ;


 struct ceph_snap_realm* FUNC_0 (struct ceph_mds_client*,int ) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_snap_realm*) ;

struct ceph_snap_realm *FUNC_2(struct ceph_mds_client *VAR_0,
            u64 VAR_1)
{
 struct ceph_snap_realm *VAR_2;
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_2);
 return VAR_2;
}
