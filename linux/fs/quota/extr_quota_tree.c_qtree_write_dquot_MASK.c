
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {TYPE_3__* s_op; } ;
struct qtree_mem_dqinfo {int dqi_entry_size; TYPE_2__* dqi_ops; } ;
struct TYPE_4__ {int type; } ;
struct dquot {int dq_off; int dq_dqb_lock; struct super_block* dq_sb; TYPE_1__ dq_id; } ;
typedef int ssize_t ;
struct TYPE_6__ {int (* quota_write ) (struct super_block*,int,char*,int,int ) ;} ;
struct TYPE_5__ {int (* mem2disk_dqblk ) (char*,struct dquot*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qtree_mem_dqinfo*,struct dquot*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct super_block*,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,struct dquot*) ;
 int FUNC_8 (struct super_block*,int,char*,int,int ) ;

int FUNC_9(struct qtree_mem_dqinfo *VAR_3, struct dquot *VAR_4)
{
 int VAR_5 = VAR_4->dq_id.type;
 struct super_block *VAR_6 = VAR_4->dq_sb;
 ssize_t VAR_7;
 char *VAR_8 = FUNC_2(VAR_3->dqi_entry_size);

 if (!VAR_8)
  return -VAR_1;


 if (!VAR_4->dq_off) {
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  if (VAR_7 < 0) {
   FUNC_4(VAR_6, "Error %zd occurred while creating "
        "quota", VAR_7);
   FUNC_3(VAR_8);
   return VAR_7;
  }
 }
 FUNC_5(&VAR_4->dq_dqb_lock);
 VAR_3->dqi_ops->mem2disk_dqblk(VAR_8, VAR_4);
 FUNC_6(&VAR_4->dq_dqb_lock);
 VAR_7 = VAR_6->s_op->quota_write(VAR_6, VAR_5, VAR_8, VAR_3->dqi_entry_size,
        VAR_4->dq_off);
 if (VAR_7 != VAR_3->dqi_entry_size) {
  FUNC_4(VAR_6, "dquota write failed");
  if (VAR_7 >= 0)
   VAR_7 = -VAR_2;
 } else {
  VAR_7 = 0;
 }
 FUNC_1(VAR_0);
 FUNC_3(VAR_8);

 return VAR_7;
}
