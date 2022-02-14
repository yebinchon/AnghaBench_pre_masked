
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_last_segment_lock; int ns_prot_seq; int ns_nongc_ctime; int ns_ctime; } ;
struct nilfs_sustat {int ss_prot_seq; int ss_nongc_ctime; int ss_ctime; void* ss_ndirtysegs; void* ss_ncleansegs; int ss_nsegs; } ;
struct nilfs_sufile_header {int sh_ndirtysegs; int sh_ncleansegs; } ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_page; } ;
struct TYPE_4__ {int mi_sem; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct buffer_head**) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct inode *VAR_0, struct nilfs_sustat *VAR_1)
{
 struct buffer_head *VAR_2;
 struct nilfs_sufile_header *VAR_3;
 struct the_nilfs *VAR_4 = VAR_0->i_sb->s_fs_info;
 void *VAR_5;
 int VAR_6;

 FUNC_3(&FUNC_0(VAR_0)->mi_sem);

 VAR_6 = FUNC_7(VAR_0, &VAR_2);
 if (VAR_6 < 0)
  goto out_sem;

 VAR_5 = FUNC_4(VAR_2->b_page);
 VAR_3 = VAR_5 + FUNC_1(VAR_2);
 VAR_1->ss_nsegs = FUNC_8(VAR_0);
 VAR_1->ss_ncleansegs = FUNC_6(VAR_3->sh_ncleansegs);
 VAR_1->ss_ndirtysegs = FUNC_6(VAR_3->sh_ndirtysegs);
 VAR_1->ss_ctime = VAR_4->ns_ctime;
 VAR_1->ss_nongc_ctime = VAR_4->ns_nongc_ctime;
 FUNC_9(&VAR_4->ns_last_segment_lock);
 VAR_1->ss_prot_seq = VAR_4->ns_prot_seq;
 FUNC_10(&VAR_4->ns_last_segment_lock);
 FUNC_5(VAR_5);
 FUNC_2(VAR_2);

 out_sem:
 FUNC_11(&FUNC_0(VAR_0)->mi_sem);
 return VAR_6;
}
