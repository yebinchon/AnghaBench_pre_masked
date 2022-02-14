
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_last_segment_lock; scalar_t__ ns_prot_seq; struct nilfs_super_block** ns_sbp; scalar_t__* ns_sbh; int ns_sbwcount; int ns_sbsize; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int s_last_seq; int s_last_cno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct the_nilfs*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct nilfs_super_block*,struct nilfs_super_block*,int ) ;
 int FUNC_4 (struct the_nilfs*) ;
 int FUNC_5 (struct super_block*,int ,char*,int) ;
 scalar_t__ FUNC_6 (struct the_nilfs*,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_7, int VAR_8)
{
 struct the_nilfs *VAR_9 = VAR_7->s_fs_info;
 int VAR_10;

 retry:
 FUNC_7(VAR_9->ns_sbh[0]);
 if (FUNC_6(VAR_9, VAR_0)) {
  VAR_10 = FUNC_0(VAR_9->ns_sbh[0],
       VAR_6 | VAR_5 | VAR_4);
 } else {
  VAR_10 = FUNC_10(VAR_9->ns_sbh[0]);
 }

 if (FUNC_11(VAR_10)) {
  FUNC_5(VAR_7, VAR_2, "unable to write superblock: err=%d",
     VAR_10);
  if (VAR_10 == -VAR_1 && VAR_9->ns_sbh[1]) {




   FUNC_3(VAR_9->ns_sbp[1], VAR_9->ns_sbp[0],
          VAR_9->ns_sbsize);
   FUNC_4(VAR_9);
   goto retry;
  }
 } else {
  struct nilfs_super_block *VAR_11 = VAR_9->ns_sbp[0];

  VAR_9->ns_sbwcount++;





  FUNC_1(VAR_9);


  if (VAR_9->ns_sbh[1]) {
   if (VAR_8 == VAR_3) {
    FUNC_7(VAR_9->ns_sbh[1]);
    if (FUNC_10(VAR_9->ns_sbh[1]) < 0)
     goto out;
   }
   if (FUNC_2(VAR_9->ns_sbp[1]->s_last_cno) <
       FUNC_2(VAR_9->ns_sbp[0]->s_last_cno))
    VAR_11 = VAR_9->ns_sbp[1];
  }

  FUNC_8(&VAR_9->ns_last_segment_lock);
  VAR_9->ns_prot_seq = FUNC_2(VAR_11->s_last_seq);
  FUNC_9(&VAR_9->ns_last_segment_lock);
 }
 out:
 return VAR_10;
}
