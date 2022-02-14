
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_1__ i_mtime; int i_mode; } ;
struct ceph_inode_info {int i_vino; scalar_t__ fscache; int i_version; } ;
struct ceph_fs_client {int fscache; } ;
struct ceph_aux_inode {int mtime_nsec; int mtime_sec; int version; } ;
typedef int aux ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 struct ceph_fs_client* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int,struct ceph_aux_inode*,int,struct ceph_inode_info*,int ,int) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct ceph_aux_inode*,int ,int) ;

void FUNC_8(struct inode *VAR_2)
{
 struct ceph_inode_info *VAR_3 = FUNC_1(VAR_2);
 struct ceph_fs_client *VAR_4 = FUNC_2(VAR_2);
 struct ceph_aux_inode VAR_5;


 if (!VAR_4->fscache)
  return;


 if (!FUNC_0(VAR_2->i_mode))
  return;

 FUNC_5(VAR_2, VAR_0);
 if (!VAR_3->fscache) {
  FUNC_7(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.version = VAR_3->i_version;
  VAR_5.mtime_sec = VAR_2->i_mtime.tv_sec;
  VAR_5.mtime_nsec = VAR_2->i_mtime.tv_nsec;
  VAR_3->fscache = FUNC_3(VAR_4->fscache,
           &VAR_1,
           &VAR_3->i_vino, sizeof(VAR_3->i_vino),
           &VAR_5, sizeof(VAR_5),
           VAR_3, FUNC_4(VAR_2), 0);
 }
 FUNC_6(VAR_2);
}
