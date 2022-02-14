
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct the_nilfs {scalar_t__ ns_inode_size; } ;
struct nilfs_inode_info {int i_bmap; int i_flags; } ;
struct nilfs_inode {void* i_device_code; scalar_t__ i_pad; scalar_t__ i_xattr; void* i_generation; void* i_flags; void* i_blocks; void* i_mtime_nsec; void* i_ctime_nsec; void* i_mtime; void* i_ctime; void* i_size; void* i_links_count; void* i_gid; void* i_uid; void* i_mode; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_rdev; int i_mode; TYPE_3__* i_sb; int i_ino; int i_generation; int i_blocks; TYPE_2__ i_mtime; TYPE_1__ i_ctime; int i_size; int i_nlink; } ;
struct TYPE_6__ {struct the_nilfs* s_fs_info; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (void*,int ,scalar_t__) ;
 int FUNC_11 (int ,struct nilfs_inode*) ;

void FUNC_12(struct inode *VAR_0,
         struct nilfs_inode *VAR_1, int VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_0);

 VAR_1->i_mode = FUNC_4(VAR_0->i_mode);
 VAR_1->i_uid = FUNC_5(FUNC_9(VAR_0));
 VAR_1->i_gid = FUNC_5(FUNC_8(VAR_0));
 VAR_1->i_links_count = FUNC_4(VAR_0->i_nlink);
 VAR_1->i_size = FUNC_6(VAR_0->i_size);
 VAR_1->i_ctime = FUNC_6(VAR_0->i_ctime.tv_sec);
 VAR_1->i_mtime = FUNC_6(VAR_0->i_mtime.tv_sec);
 VAR_1->i_ctime_nsec = FUNC_5(VAR_0->i_ctime.tv_nsec);
 VAR_1->i_mtime_nsec = FUNC_5(VAR_0->i_mtime.tv_nsec);
 VAR_1->i_blocks = FUNC_6(VAR_0->i_blocks);

 VAR_1->i_flags = FUNC_5(VAR_3->i_flags);
 VAR_1->i_generation = FUNC_5(VAR_0->i_generation);

 if (FUNC_1(VAR_0->i_ino)) {
  struct the_nilfs *VAR_4 = VAR_0->i_sb->s_fs_info;


  VAR_1->i_xattr = 0;
  VAR_1->i_pad = 0;
  FUNC_10((void *)VAR_1 + sizeof(*VAR_1), 0,
         VAR_4->ns_inode_size - sizeof(*VAR_1));
 }

 if (VAR_2)
  FUNC_11(VAR_3->i_bmap, VAR_1);
 else if (FUNC_3(VAR_0->i_mode) || FUNC_2(VAR_0->i_mode))
  VAR_1->i_device_code =
   FUNC_6(FUNC_7(VAR_0->i_rdev));




}
