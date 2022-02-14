
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct gfs2_sbd {TYPE_1__* sd_statfs_inode; TYPE_1__* sd_rindex; TYPE_1__* sd_quota_inode; scalar_t__ sd_rindex_uptodate; int sd_journal_ready; int sd_master_dir; } ;
struct TYPE_4__ {int i_rwsem; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (struct gfs2_sbd*,char*,int) ;
 int FUNC_5 (struct gfs2_sbd*) ;
 void* FUNC_6 (struct inode*,char*) ;
 int VAR_1 ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (struct gfs2_sbd*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct gfs2_sbd *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 struct inode *VAR_5 = FUNC_3(VAR_2->sd_master_dir);

 if (VAR_3)
  goto fail_qinode;

 VAR_4 = FUNC_8(VAR_2, VAR_3);
 FUNC_2(&VAR_2->sd_journal_ready);
 if (VAR_4)
  goto fail;


 VAR_2->sd_statfs_inode = FUNC_6(VAR_5, "statfs");
 if (FUNC_0(VAR_2->sd_statfs_inode)) {
  VAR_4 = FUNC_1(VAR_2->sd_statfs_inode);
  FUNC_4(VAR_2, "can't read in statfs inode: %d\n", VAR_4);
  goto fail_journal;
 }


 VAR_2->sd_rindex = FUNC_6(VAR_5, "rindex");
 if (FUNC_0(VAR_2->sd_rindex)) {
  VAR_4 = FUNC_1(VAR_2->sd_rindex);
  FUNC_4(VAR_2, "can't get resource index inode: %d\n", VAR_4);
  goto fail_statfs;
 }
 VAR_2->sd_rindex_uptodate = 0;


 VAR_2->sd_quota_inode = FUNC_6(VAR_5, "quota");
 if (FUNC_0(VAR_2->sd_quota_inode)) {
  VAR_4 = FUNC_1(VAR_2->sd_quota_inode);
  FUNC_4(VAR_2, "can't get quota file inode: %d\n", VAR_4);
  goto fail_rindex;
 }




 FUNC_10(&VAR_2->sd_quota_inode->i_rwsem,
     &VAR_1);

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  goto fail_qinode;

 return 0;

fail_qinode:
 FUNC_9(VAR_2->sd_quota_inode);
fail_rindex:
 FUNC_5(VAR_2);
 FUNC_9(VAR_2->sd_rindex);
fail_statfs:
 FUNC_9(VAR_2->sd_statfs_inode);
fail_journal:
 FUNC_8(VAR_2, VAR_0);
fail:
 return VAR_4;
}
