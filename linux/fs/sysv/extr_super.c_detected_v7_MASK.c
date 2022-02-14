
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v7_super_block {int s_fsize; int s_isize; int s_time; int s_tfree; int * s_free; int s_nfree; int s_tinode; int * s_inode; int s_ninode; } ;
struct sysv_sb_info {char* s_sbd1; char* s_sbd2; int s_nzones; int s_firstdatazone; int * s_sb_time; int * s_free_blocks; int * s_bcache; int * s_bcache_count; int * s_sb_total_free_inodes; int * s_sb_fic_inodes; int * s_sb_fic_count; int s_flc_size; int s_fic_size; struct buffer_head* s_bh2; } ;
struct buffer_head {scalar_t__ b_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysv_sb_info*,int ) ;
 int FUNC_1 (struct sysv_sb_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct sysv_sb_info *VAR_3, unsigned *VAR_4)
{
 struct buffer_head *VAR_5 = VAR_3->s_bh2;
 struct v7_super_block *VAR_6 = (struct v7_super_block *)VAR_5->b_data;

 *VAR_4 = VAR_0;
 VAR_3->s_fic_size = VAR_2;
 VAR_3->s_flc_size = VAR_1;
 VAR_3->s_sbd1 = (char *)VAR_6;
 VAR_3->s_sbd2 = (char *)VAR_6;
 VAR_3->s_sb_fic_count = &VAR_6->s_ninode;
 VAR_3->s_sb_fic_inodes = &VAR_6->s_inode[0];
 VAR_3->s_sb_total_free_inodes = &VAR_6->s_tinode;
 VAR_3->s_bcache_count = &VAR_6->s_nfree;
 VAR_3->s_bcache = &VAR_6->s_free[0];
 VAR_3->s_free_blocks = &VAR_6->s_tfree;
 VAR_3->s_sb_time = &VAR_6->s_time;
 VAR_3->s_firstdatazone = FUNC_0(VAR_3, VAR_6->s_isize);
 VAR_3->s_nzones = FUNC_1(VAR_3, VAR_6->s_fsize);
}
