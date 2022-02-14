
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nsumblk; scalar_t__ sumbytes; } ;
struct nilfs_segment_buffer {TYPE_2__ sb_sum; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct nilfs_sc_info {scalar_t__ sc_blk_cnt; scalar_t__ sc_datablk_cnt; TYPE_3__ sc_binfo_ptr; TYPE_3__ sc_finfo_ptr; TYPE_1__* sc_super; struct nilfs_segment_buffer* sc_curseg; scalar_t__ sc_cno; } ;
struct nilfs_inode_info {scalar_t__ i_cno; int i_state; } ;
struct nilfs_finfo {void* fi_cno; void* fi_ndatablk; void* fi_nblocks; void* fi_ino; } ;
struct inode {scalar_t__ i_ino; } ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {int s_blocksize; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 struct nilfs_finfo* FUNC_4 (struct nilfs_sc_info*,TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct nilfs_sc_info *VAR_1,
        struct inode *VAR_2)
{
 struct nilfs_finfo *VAR_3;
 struct nilfs_inode_info *VAR_4;
 struct nilfs_segment_buffer *VAR_5;
 __u64 VAR_6;

 if (VAR_1->sc_blk_cnt == 0)
  return;

 VAR_4 = FUNC_0(VAR_2);

 if (FUNC_5(VAR_0, &VAR_4->i_state))
  VAR_6 = VAR_4->i_cno;
 else if (FUNC_1(VAR_2->i_ino))
  VAR_6 = 0;
 else
  VAR_6 = VAR_1->sc_cno;

 VAR_3 = FUNC_4(VAR_1, &VAR_1->sc_finfo_ptr,
       sizeof(*VAR_3));
 VAR_3->fi_ino = FUNC_3(VAR_2->i_ino);
 VAR_3->fi_nblocks = FUNC_2(VAR_1->sc_blk_cnt);
 VAR_3->fi_ndatablk = FUNC_2(VAR_1->sc_datablk_cnt);
 VAR_3->fi_cno = FUNC_3(VAR_6);

 VAR_5 = VAR_1->sc_curseg;
 VAR_5->sb_sum.sumbytes = VAR_1->sc_binfo_ptr.offset +
  VAR_1->sc_super->s_blocksize * (VAR_5->sb_sum.nsumblk - 1);
 VAR_1->sc_finfo_ptr = VAR_1->sc_binfo_ptr;
 VAR_1->sc_blk_cnt = VAR_1->sc_datablk_cnt = 0;
}
