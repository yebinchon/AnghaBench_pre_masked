
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_dat; int ns_gc_inodes; struct nilfs_sc_info* ns_writer; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_transaction_info {int dummy; } ;
struct nilfs_sc_info {scalar_t__ sc_nfreesegs; int * sc_freesegs; int sc_interval; int sc_gc_inodes; } ;
struct nilfs_argv {scalar_t__ v_nmembs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct the_nilfs*,int ) ;
 int FUNC_3 (struct the_nilfs*,int *,scalar_t__) ;
 int FUNC_4 (struct the_nilfs*,struct nilfs_argv*,void**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct super_block*,int ,char*,int) ;
 int FUNC_9 (struct the_nilfs*,int *) ;
 int FUNC_10 (struct nilfs_sc_info*,int ) ;
 scalar_t__ FUNC_11 (struct the_nilfs*,int ) ;
 int FUNC_12 (struct super_block*,struct nilfs_transaction_info*,int) ;
 int FUNC_13 (struct super_block*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int) ;

int FUNC_17(struct super_block *VAR_5, struct nilfs_argv *VAR_6,
    void **VAR_7)
{
 struct the_nilfs *VAR_8 = VAR_5->s_fs_info;
 struct nilfs_sc_info *VAR_9 = VAR_8->ns_writer;
 struct nilfs_transaction_info VAR_10;
 int VAR_11;

 if (FUNC_16(!VAR_9))
  return -VAR_1;

 FUNC_12(VAR_5, &VAR_10, 1);

 VAR_11 = FUNC_7(VAR_8->ns_dat);
 if (FUNC_16(VAR_11))
  goto out_unlock;

 VAR_11 = FUNC_4(VAR_8, VAR_6, VAR_7);
 if (FUNC_16(VAR_11)) {
  FUNC_6(VAR_8->ns_dat);
  goto out_unlock;
 }

 VAR_9->sc_freesegs = VAR_7[4];
 VAR_9->sc_nfreesegs = VAR_6[4].v_nmembs;
 FUNC_1(&VAR_8->ns_gc_inodes, &VAR_9->sc_gc_inodes);

 for (;;) {
  VAR_11 = FUNC_10(VAR_9, VAR_3);
  FUNC_9(VAR_8, &VAR_9->sc_gc_inodes);

  if (FUNC_0(!VAR_11))
   break;

  FUNC_8(VAR_5, VAR_2, "error %d cleaning segments", VAR_11);
  FUNC_15(VAR_4);
  FUNC_14(VAR_9->sc_interval);
 }
 if (FUNC_11(VAR_8, VAR_0)) {
  int VAR_12 = FUNC_3(VAR_8, VAR_9->sc_freesegs,
       VAR_9->sc_nfreesegs);
  if (VAR_12) {
   FUNC_8(VAR_5, VAR_2,
      "error %d on discard request, turning discards off for the device",
      VAR_12);
   FUNC_2(VAR_8, VAR_0);
  }
 }

 out_unlock:
 VAR_9->sc_freesegs = ((void*)0);
 VAR_9->sc_nfreesegs = 0;
 FUNC_5(VAR_8->ns_dat);
 FUNC_13(VAR_5);
 return VAR_11;
}
