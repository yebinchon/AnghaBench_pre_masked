
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_10__ {int* val; } ;
struct kstatfs {int f_bsize; int f_frsize; int f_blocks; int f_bfree; int f_bavail; int f_files; int f_ffree; TYPE_5__ f_fsid; int f_namelen; int f_type; } ;
struct dentry {int dummy; } ;
struct ceph_statfs {int num_objects; int kb_avail; int kb; } ;
struct ceph_mon_client {int mutex; TYPE_4__* monmap; } ;
struct ceph_fs_client {TYPE_3__* mdsc; TYPE_1__* client; } ;
typedef int __le64 ;
struct TYPE_9__ {int fsid; } ;
struct TYPE_8__ {TYPE_2__* mdsmap; } ;
struct TYPE_7__ {int m_num_data_pg_pools; int* m_data_pg_pools; } ;
struct TYPE_6__ {struct ceph_mon_client monc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ceph_fs_client* FUNC_0 (int ) ;
 int FUNC_1 (struct ceph_mon_client*,int,struct ceph_statfs*) ;
 int FUNC_2 (struct ceph_fs_client*,struct kstatfs*) ;
 scalar_t__ FUNC_3 (struct ceph_fs_client*,int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct dentry *VAR_5, struct kstatfs *VAR_6)
{
 struct ceph_fs_client *VAR_7 = FUNC_0(FUNC_4(VAR_5));
 struct ceph_mon_client *VAR_8 = &VAR_7->client->monc;
 struct ceph_statfs VAR_9;
 u64 VAR_10;
 int VAR_11;
 u64 VAR_12;

 if (VAR_7->mdsc->mdsmap->m_num_data_pg_pools == 1) {
  VAR_12 = VAR_7->mdsc->mdsmap->m_data_pg_pools[0];
 } else {
  VAR_12 = VAR_1;
 }

 FUNC_5("statfs\n");
 VAR_11 = FUNC_1(VAR_8, VAR_12, &VAR_9);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_6->f_type = VAR_2;
 VAR_6->f_bsize = 1 << VAR_0;
 VAR_6->f_frsize = 1 << VAR_0;






 if (FUNC_3(VAR_7, VAR_4) ||
     !FUNC_2(VAR_7, VAR_6)) {
  VAR_6->f_blocks = FUNC_6(VAR_9.kb) >> (VAR_0-10);
  VAR_6->f_bfree = FUNC_6(VAR_9.kb_avail) >> (VAR_0-10);
  VAR_6->f_bavail = FUNC_6(VAR_9.kb_avail) >> (VAR_0-10);
 }

 VAR_6->f_files = FUNC_6(VAR_9.num_objects);
 VAR_6->f_ffree = -1;
 VAR_6->f_namelen = VAR_3;


 FUNC_7(&VAR_8->mutex);
 VAR_10 = FUNC_6(*(__le64 *)(&VAR_8->monmap->fsid)) ^
        FUNC_6(*((__le64 *)&VAR_8->monmap->fsid + 1));
 FUNC_8(&VAR_8->mutex);

 VAR_6->f_fsid.val[0] = VAR_10 & 0xffffffff;
 VAR_6->f_fsid.val[1] = VAR_10 >> 32;

 return 0;
}
