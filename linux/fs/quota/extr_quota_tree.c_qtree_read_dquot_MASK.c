
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {TYPE_1__* s_op; } ;
struct qtree_mem_dqinfo {int dqi_entry_size; TYPE_2__* dqi_ops; } ;
struct mem_dqblk {int dummy; } ;
struct TYPE_9__ {int dqb_isoftlimit; int dqb_ihardlimit; int dqb_bsoftlimit; int dqb_bhardlimit; } ;
struct TYPE_10__ {int type; } ;
struct dquot {int dq_dqb_lock; int dq_flags; TYPE_4__ dq_dqb; TYPE_5__ dq_id; void* dq_off; struct super_block* dq_sb; } ;
typedef void* loff_t ;
struct TYPE_8__ {int * files; } ;
struct TYPE_7__ {int (* disk2mem_dqblk ) (struct dquot*,char*) ;} ;
struct TYPE_6__ {int (* quota_read ) (struct super_block*,int,char*,int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct qtree_mem_dqinfo*,struct dquot*) ;
 int FUNC_2 (int *,TYPE_5__) ;
 char* FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (struct super_block*,char*,...) ;
 TYPE_3__* FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct super_block*,int,char*,int,void*) ;
 int FUNC_12 (struct dquot*,char*) ;

int FUNC_13(struct qtree_mem_dqinfo *VAR_5, struct dquot *VAR_6)
{
 int VAR_7 = VAR_6->dq_id.type;
 struct super_block *VAR_8 = VAR_6->dq_sb;
 loff_t VAR_9;
 char *VAR_10;
 int VAR_11 = 0;
 if (!VAR_6->dq_off) {
  VAR_9 = FUNC_1(VAR_5, VAR_6);
  if (VAR_9 <= 0) {
   if (VAR_9 < 0)
    FUNC_6(VAR_8,"Can't read quota structure "
         "for id %u",
         FUNC_2(&VAR_4,
            VAR_6->dq_id));
   VAR_6->dq_off = 0;
   FUNC_8(VAR_1, &VAR_6->dq_flags);
   FUNC_5(&VAR_6->dq_dqb, 0, sizeof(struct mem_dqblk));
   VAR_11 = VAR_9;
   goto out;
  }
  VAR_6->dq_off = VAR_9;
 }
 VAR_10 = FUNC_3(VAR_5->dqi_entry_size);
 if (!VAR_10)
  return -VAR_3;
 VAR_11 = VAR_8->s_op->quota_read(VAR_8, VAR_7, VAR_10, VAR_5->dqi_entry_size,
       VAR_6->dq_off);
 if (VAR_11 != VAR_5->dqi_entry_size) {
  if (VAR_11 >= 0)
   VAR_11 = -VAR_2;
  FUNC_6(VAR_8, "Error while reading quota structure for id %u",
       FUNC_2(&VAR_4, VAR_6->dq_id));
  FUNC_8(VAR_1, &VAR_6->dq_flags);
  FUNC_5(&VAR_6->dq_dqb, 0, sizeof(struct mem_dqblk));
  FUNC_4(VAR_10);
  goto out;
 }
 FUNC_9(&VAR_6->dq_dqb_lock);
 VAR_5->dqi_ops->disk2mem_dqblk(VAR_6, VAR_10);
 if (!VAR_6->dq_dqb.dqb_bhardlimit &&
     !VAR_6->dq_dqb.dqb_bsoftlimit &&
     !VAR_6->dq_dqb.dqb_ihardlimit &&
     !VAR_6->dq_dqb.dqb_isoftlimit)
  FUNC_8(VAR_1, &VAR_6->dq_flags);
 FUNC_10(&VAR_6->dq_dqb_lock);
 FUNC_4(VAR_10);
out:
 FUNC_0(VAR_0);
 return VAR_11;
}
