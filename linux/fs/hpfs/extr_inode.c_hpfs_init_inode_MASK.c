
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct inode {int i_size; int i_blocks; TYPE_3__ i_atime; TYPE_2__ i_mtime; TYPE_1__ i_ctime; int i_mode; int i_gid; int i_uid; struct super_block* i_sb; } ;
struct hpfs_inode_info {scalar_t__ i_dirty; int * i_rddir_off; scalar_t__ i_ea_size; scalar_t__ i_ea_gid; scalar_t__ i_ea_uid; scalar_t__ i_ea_mode; scalar_t__ i_dsubdno; scalar_t__ i_dpos; scalar_t__ i_disk_sec; scalar_t__ i_file_sec; scalar_t__ i_n_secs; scalar_t__ i_dno; } ;
struct TYPE_8__ {int sb_mode; int sb_gid; int sb_uid; } ;


 struct hpfs_inode_info* FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (struct super_block*) ;

void FUNC_2(struct inode *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->i_sb;
 struct hpfs_inode_info *VAR_2 = FUNC_0(VAR_0);

 VAR_0->i_uid = FUNC_1(VAR_1)->sb_uid;
 VAR_0->i_gid = FUNC_1(VAR_1)->sb_gid;
 VAR_0->i_mode = FUNC_1(VAR_1)->sb_mode;
 VAR_0->i_size = -1;
 VAR_0->i_blocks = -1;

 VAR_2->i_dno = 0;
 VAR_2->i_n_secs = 0;
 VAR_2->i_file_sec = 0;
 VAR_2->i_disk_sec = 0;
 VAR_2->i_dpos = 0;
 VAR_2->i_dsubdno = 0;
 VAR_2->i_ea_mode = 0;
 VAR_2->i_ea_uid = 0;
 VAR_2->i_ea_gid = 0;
 VAR_2->i_ea_size = 0;

 VAR_2->i_rddir_off = ((void*)0);
 VAR_2->i_dirty = 0;

 VAR_0->i_ctime.tv_sec = VAR_0->i_ctime.tv_nsec = 0;
 VAR_0->i_mtime.tv_sec = VAR_0->i_mtime.tv_nsec = 0;
 VAR_0->i_atime.tv_sec = VAR_0->i_atime.tv_nsec = 0;
}
