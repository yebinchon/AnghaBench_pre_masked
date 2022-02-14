
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct vxfs_sb_info {int dummy; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_nsec; void* tv_sec; } ;
struct inode {void* i_generation; void* i_blocks; TYPE_3__ i_mtime; TYPE_2__ i_ctime; TYPE_1__ i_atime; int i_size; int i_mode; } ;
struct vxfs_inode_info {void* vii_gen; void* vii_blocks; void* vii_mtime; void* vii_ctime; void* vii_atime; int vii_size; void* vii_nlink; void* vii_gid; void* vii_uid; int vii_org; void* vii_rdev; void* vii_dotdot; int vii_orgtype; void* vii_cutime; void* vii_mutime; void* vii_autime; void* vii_mode; struct inode vfs_inode; } ;
struct vxfs_dinode {int vdi_org; int vdi_rdev; int vdi_dotdot; int vdi_gen; int vdi_blocks; int vdi_orgtype; int vdi_cutime; int vdi_ctime; int vdi_mutime; int vdi_mtime; int vdi_autime; int vdi_atime; int vdi_size; int vdi_gid; int vdi_uid; int vdi_nlink; int vdi_mode; } ;
typedef int gid_t ;


 scalar_t__ FUNC_0 (struct vxfs_inode_info*) ;
 int FUNC_1 (struct vxfs_inode_info*) ;
 int FUNC_2 (struct vxfs_inode_info*) ;
 void* FUNC_3 (struct vxfs_sb_info*,int ) ;
 int FUNC_4 (struct vxfs_sb_info*,int ) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct inode*,void*) ;
 int FUNC_9 (struct vxfs_inode_info*) ;

__attribute__((used)) static inline void FUNC_10(struct vxfs_sb_info *VAR_0,
  struct vxfs_inode_info *VAR_1, struct vxfs_dinode *VAR_2)
{
 struct inode *VAR_3 = &VAR_1->vfs_inode;

 VAR_1->vii_mode = FUNC_3(VAR_0, VAR_2->vdi_mode);
 VAR_1->vii_nlink = FUNC_3(VAR_0, VAR_2->vdi_nlink);
 VAR_1->vii_uid = FUNC_3(VAR_0, VAR_2->vdi_uid);
 VAR_1->vii_gid = FUNC_3(VAR_0, VAR_2->vdi_gid);
 VAR_1->vii_size = FUNC_4(VAR_0, VAR_2->vdi_size);
 VAR_1->vii_atime = FUNC_3(VAR_0, VAR_2->vdi_atime);
 VAR_1->vii_autime = FUNC_3(VAR_0, VAR_2->vdi_autime);
 VAR_1->vii_mtime = FUNC_3(VAR_0, VAR_2->vdi_mtime);
 VAR_1->vii_mutime = FUNC_3(VAR_0, VAR_2->vdi_mutime);
 VAR_1->vii_ctime = FUNC_3(VAR_0, VAR_2->vdi_ctime);
 VAR_1->vii_cutime = FUNC_3(VAR_0, VAR_2->vdi_cutime);
 VAR_1->vii_orgtype = VAR_2->vdi_orgtype;

 VAR_1->vii_blocks = FUNC_3(VAR_0, VAR_2->vdi_blocks);
 VAR_1->vii_gen = FUNC_3(VAR_0, VAR_2->vdi_gen);

 if (FUNC_0(VAR_1))
  VAR_1->vii_dotdot = FUNC_3(VAR_0, VAR_2->vdi_dotdot);
 else if (!FUNC_2(VAR_1) && !FUNC_1(VAR_1))
  VAR_1->vii_rdev = FUNC_3(VAR_0, VAR_2->vdi_rdev);


 FUNC_7(&VAR_1->vii_org, &VAR_2->vdi_org, sizeof(VAR_1->vii_org));

 VAR_3->i_mode = FUNC_9(VAR_1);
 FUNC_6(VAR_3, (uid_t)VAR_1->vii_uid);
 FUNC_5(VAR_3, (gid_t)VAR_1->vii_gid);

 FUNC_8(VAR_3, VAR_1->vii_nlink);
 VAR_3->i_size = VAR_1->vii_size;

 VAR_3->i_atime.tv_sec = VAR_1->vii_atime;
 VAR_3->i_ctime.tv_sec = VAR_1->vii_ctime;
 VAR_3->i_mtime.tv_sec = VAR_1->vii_mtime;
 VAR_3->i_atime.tv_nsec = 0;
 VAR_3->i_ctime.tv_nsec = 0;
 VAR_3->i_mtime.tv_nsec = 0;

 VAR_3->i_blocks = VAR_1->vii_blocks;
 VAR_3->i_generation = VAR_1->vii_gen;
}
