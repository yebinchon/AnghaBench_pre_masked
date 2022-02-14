
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_4__ {scalar_t__ ar_spectator; } ;
struct TYPE_3__ {int ls_jid; scalar_t__ ls_first; } ;
struct gfs2_sbd {unsigned int sd_journals; int sd_log_idle; int sd_jindex; struct gfs2_holder sd_journal_gh; TYPE_2__ sd_args; struct gfs2_holder sd_jinode_gh; int sd_freeze_work; int sd_flags; struct gfs2_jdesc* sd_jdesc; TYPE_1__ sd_lockstruct; int sd_log_blks_free; int sd_log_thresh2; int sd_log_thresh1; int sd_log_blks_needed; int sd_master_dir; } ;
struct gfs2_jdesc {int jd_blocks; int jd_jid; int jd_inode; } ;
struct gfs2_inode {int i_gl; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct gfs2_sbd*,struct gfs2_jdesc*) ;
 struct inode* FUNC_7 (int ) ;
 int FUNC_8 (struct gfs2_sbd*,char*,...) ;
 int VAR_7 ;
 int FUNC_9 (struct gfs2_holder*) ;
 int FUNC_10 (int ,int ,int,struct gfs2_holder*) ;
 int FUNC_11 (struct gfs2_sbd*,unsigned int,int *,int ,int,struct gfs2_holder*) ;
 int FUNC_12 (struct gfs2_jdesc*) ;
 void* FUNC_13 (struct gfs2_sbd*,unsigned int) ;
 int FUNC_14 (struct gfs2_sbd*) ;
 int FUNC_15 (struct gfs2_sbd*,struct gfs2_holder*) ;
 int FUNC_16 (struct gfs2_sbd*) ;
 int VAR_8 ;
 int FUNC_17 (struct inode*,char*) ;
 int FUNC_18 (struct gfs2_sbd*,struct gfs2_jdesc*) ;
 int FUNC_19 (struct gfs2_sbd*) ;
 int FUNC_20 (struct gfs2_jdesc*,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (struct gfs2_sbd*,int ) ;

__attribute__((used)) static int FUNC_24(struct gfs2_sbd *VAR_9, int VAR_10)
{
 struct inode *VAR_11 = FUNC_7(VAR_9->sd_master_dir);
 struct gfs2_holder VAR_12;
 struct gfs2_inode *VAR_13;
 int VAR_14 = 1;
 int VAR_15 = 0;

 if (VAR_10) {
  VAR_14 = 0;
  goto fail_jinode_gh;
 }

 VAR_9->sd_jindex = FUNC_17(VAR_11, "jindex");
 if (FUNC_2(VAR_9->sd_jindex)) {
  FUNC_8(VAR_9, "can't lookup journal index: %d\n", VAR_15);
  return FUNC_3(VAR_9->sd_jindex);
 }



 VAR_15 = FUNC_15(VAR_9, &VAR_12);
 if (VAR_15) {
  FUNC_8(VAR_9, "can't read journal index: %d\n", VAR_15);
  goto fail;
 }

 VAR_15 = -VAR_0;
 if (!FUNC_16(VAR_9)) {
  FUNC_8(VAR_9, "no journals!\n");
  goto fail_jindex;
 }

 FUNC_5(&VAR_9->sd_log_blks_needed, 0);
 if (VAR_9->sd_args.ar_spectator) {
  VAR_9->sd_jdesc = FUNC_13(VAR_9, 0);
  FUNC_5(&VAR_9->sd_log_blks_free, VAR_9->sd_jdesc->jd_blocks);
  FUNC_5(&VAR_9->sd_log_thresh1, 2*VAR_9->sd_jdesc->jd_blocks/5);
  FUNC_5(&VAR_9->sd_log_thresh2, 4*VAR_9->sd_jdesc->jd_blocks/5);
 } else {
  if (VAR_9->sd_lockstruct.ls_jid >= FUNC_16(VAR_9)) {
   FUNC_8(VAR_9, "can't mount journal #%u\n",
          VAR_9->sd_lockstruct.ls_jid);
   FUNC_8(VAR_9, "there are only %u journals (0 - %u)\n",
          FUNC_16(VAR_9),
          FUNC_16(VAR_9) - 1);
   goto fail_jindex;
  }
  VAR_9->sd_jdesc = FUNC_13(VAR_9, VAR_9->sd_lockstruct.ls_jid);

  VAR_15 = FUNC_11(VAR_9, VAR_9->sd_lockstruct.ls_jid,
       &VAR_8,
       VAR_4, VAR_3,
       &VAR_9->sd_journal_gh);
  if (VAR_15) {
   FUNC_8(VAR_9, "can't acquire journal glock: %d\n", VAR_15);
   goto fail_jindex;
  }

  VAR_13 = FUNC_0(VAR_9->sd_jdesc->jd_inode);
  VAR_15 = FUNC_10(VAR_13->i_gl, VAR_5,
        VAR_3 | VAR_1 | VAR_2,
        &VAR_9->sd_jinode_gh);
  if (VAR_15) {
   FUNC_8(VAR_9, "can't acquire journal inode glock: %d\n",
          VAR_15);
   goto fail_journal_gh;
  }

  VAR_15 = FUNC_12(VAR_9->sd_jdesc);
  if (VAR_15) {
   FUNC_8(VAR_9, "my journal (%u) is bad: %d\n",
          VAR_9->sd_jdesc->jd_jid, VAR_15);
   goto fail_jinode_gh;
  }
  FUNC_5(&VAR_9->sd_log_blks_free, VAR_9->sd_jdesc->jd_blocks);
  FUNC_5(&VAR_9->sd_log_thresh1, 2*VAR_9->sd_jdesc->jd_blocks/5);
  FUNC_5(&VAR_9->sd_log_thresh2, 4*VAR_9->sd_jdesc->jd_blocks/5);


  FUNC_18(VAR_9, VAR_9->sd_jdesc);
 }
 FUNC_23(VAR_9, FUNC_4(&VAR_9->sd_log_blks_free));

 if (VAR_9->sd_lockstruct.ls_first) {
  unsigned int VAR_16;
  for (VAR_16 = 0; VAR_16 < VAR_9->sd_journals; VAR_16++) {
   struct gfs2_jdesc *VAR_17 = FUNC_13(VAR_9, VAR_16);

   if (VAR_9->sd_args.ar_spectator) {
    VAR_15 = FUNC_6(VAR_9, VAR_17);
    if (VAR_15)
     goto fail_jinode_gh;
    continue;
   }
   VAR_15 = FUNC_20(VAR_17, 1);
   if (VAR_15) {
    FUNC_8(VAR_9, "error recovering journal %u: %d\n",
           VAR_16, VAR_15);
    goto fail_jinode_gh;
   }
  }

  FUNC_19(VAR_9);
 } else if (!VAR_9->sd_args.ar_spectator) {
  VAR_15 = FUNC_20(VAR_9->sd_jdesc, 1);
  if (VAR_15) {
   FUNC_8(VAR_9, "error recovering my journal: %d\n", VAR_15);
   goto fail_jinode_gh;
  }
 }

 VAR_9->sd_log_idle = 1;
 FUNC_22(VAR_6, &VAR_9->sd_flags);
 FUNC_9(&VAR_12);
 VAR_14 = 0;
 FUNC_1(&VAR_9->sd_freeze_work, VAR_7);
 return 0;

fail_jinode_gh:
 if (!VAR_9->sd_args.ar_spectator)
  FUNC_9(&VAR_9->sd_jinode_gh);
fail_journal_gh:
 if (!VAR_9->sd_args.ar_spectator)
  FUNC_9(&VAR_9->sd_journal_gh);
fail_jindex:
 FUNC_14(VAR_9);
 if (VAR_14)
  FUNC_9(&VAR_12);
fail:
 FUNC_21(VAR_9->sd_jindex);
 return VAR_15;
}
