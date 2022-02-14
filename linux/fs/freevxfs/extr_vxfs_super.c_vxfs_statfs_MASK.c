
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxfs_sb_info {struct vxfs_sb* vsi_raw; } ;
struct vxfs_sb {int vs_ifree; int vs_free; int vs_dsize; } ;
struct kstatfs {int f_namelen; void* f_ffree; scalar_t__ f_files; scalar_t__ f_bavail; void* f_bfree; void* f_blocks; int f_bsize; int f_type; } ;
struct dentry {TYPE_1__* d_sb; } ;
struct TYPE_2__ {int s_blocksize; } ;


 int VAR_0 ;
 struct vxfs_sb_info* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 void* FUNC_1 (struct vxfs_sb_info*,int ) ;

__attribute__((used)) static int
FUNC_2(struct dentry *VAR_2, struct kstatfs *VAR_3)
{
 struct vxfs_sb_info *VAR_4 = FUNC_0(VAR_2->d_sb);
 struct vxfs_sb *VAR_5 = VAR_4->vsi_raw;

 VAR_3->f_type = VAR_1;
 VAR_3->f_bsize = VAR_2->d_sb->s_blocksize;
 VAR_3->f_blocks = FUNC_1(VAR_4, VAR_5->vs_dsize);
 VAR_3->f_bfree = FUNC_1(VAR_4, VAR_5->vs_free);
 VAR_3->f_bavail = 0;
 VAR_3->f_files = 0;
 VAR_3->f_ffree = FUNC_1(VAR_4, VAR_5->vs_ifree);
 VAR_3->f_namelen = VAR_0;

 return 0;
}
