
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ceph_snap_realm {int dummy; } ;
struct ceph_mds_client {int snap_rwsem; } ;
struct TYPE_2__ {struct ceph_mds_client* mdsc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_snap_realm*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct ceph_mds_client*,struct ceph_snap_realm*) ;
 int FUNC_3 (int *) ;
 struct ceph_snap_realm* FUNC_4 (struct ceph_mds_client*,struct inode*,int) ;
 int FUNC_5 (int *) ;

bool FUNC_6(struct inode *VAR_1, struct inode *VAR_2)
{
 struct ceph_mds_client *VAR_3 = FUNC_1(VAR_1)->mdsc;
 struct ceph_snap_realm *VAR_4, *VAR_5;
 bool VAR_6;

restart:






 FUNC_3(&VAR_3->snap_rwsem);
 VAR_4 = FUNC_4(VAR_3, VAR_1, 1);
 VAR_5 = FUNC_4(VAR_3, VAR_2, 0);
 if (FUNC_0(VAR_5) == -VAR_0) {
  FUNC_5(&VAR_3->snap_rwsem);
  if (VAR_4)
   FUNC_2(VAR_3, VAR_4);
  goto restart;
 }
 VAR_6 = (VAR_4 == VAR_5);
 FUNC_5(&VAR_3->snap_rwsem);

 if (VAR_4)
  FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_3, VAR_5);

 return VAR_6;
}
