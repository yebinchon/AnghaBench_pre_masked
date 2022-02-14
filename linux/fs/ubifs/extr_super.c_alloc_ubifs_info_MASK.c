
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ubi_num; } ;
struct ubifs_info {int no_chk_data_crc; int di; TYPE_1__ vi; int ltail_lnum; int lhead_lnum; int highest_inum; int assert_action; int orph_new; int orph_list; int old_buds; int unclean_leb_list; int frdi_idx_list; int freeable_list; int empty_list; int uncat_list; int replay_buds; int replay_list; int idx_gc; int infos_list; void* orph_tree; void* size_tree; void* old_idx; void* buds; int cmt_wq; int write_reserve_mutex; int bu_mutex; int umount_mutex; int log_mutex; int tnc_mutex; int lp_mutex; int commit_sem; int orphan_lock; int space_lock; int buds_lock; int cs_lock; int cnt_lock; } ;
struct ubi_volume_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ubifs_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct ubi_volume_desc*,TYPE_1__*) ;

__attribute__((used)) static struct ubifs_info *FUNC_8(struct ubi_volume_desc *VAR_5)
{
 struct ubifs_info *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct ubifs_info), VAR_1);
 if (VAR_6) {
  FUNC_5(&VAR_6->cnt_lock);
  FUNC_5(&VAR_6->cs_lock);
  FUNC_5(&VAR_6->buds_lock);
  FUNC_5(&VAR_6->space_lock);
  FUNC_5(&VAR_6->orphan_lock);
  FUNC_1(&VAR_6->commit_sem);
  FUNC_4(&VAR_6->lp_mutex);
  FUNC_4(&VAR_6->tnc_mutex);
  FUNC_4(&VAR_6->log_mutex);
  FUNC_4(&VAR_6->umount_mutex);
  FUNC_4(&VAR_6->bu_mutex);
  FUNC_4(&VAR_6->write_reserve_mutex);
  FUNC_2(&VAR_6->cmt_wq);
  VAR_6->buds = VAR_2;
  VAR_6->old_idx = VAR_2;
  VAR_6->size_tree = VAR_2;
  VAR_6->orph_tree = VAR_2;
  FUNC_0(&VAR_6->infos_list);
  FUNC_0(&VAR_6->idx_gc);
  FUNC_0(&VAR_6->replay_list);
  FUNC_0(&VAR_6->replay_buds);
  FUNC_0(&VAR_6->uncat_list);
  FUNC_0(&VAR_6->empty_list);
  FUNC_0(&VAR_6->freeable_list);
  FUNC_0(&VAR_6->frdi_idx_list);
  FUNC_0(&VAR_6->unclean_leb_list);
  FUNC_0(&VAR_6->old_buds);
  FUNC_0(&VAR_6->orph_list);
  FUNC_0(&VAR_6->orph_new);
  VAR_6->no_chk_data_crc = 1;
  VAR_6->assert_action = VAR_0;

  VAR_6->highest_inum = VAR_3;
  VAR_6->lhead_lnum = VAR_6->ltail_lnum = VAR_4;

  FUNC_7(VAR_5, &VAR_6->vi);
  FUNC_6(VAR_6->vi.ubi_num, &VAR_6->di);
 }
 return VAR_6;
}
