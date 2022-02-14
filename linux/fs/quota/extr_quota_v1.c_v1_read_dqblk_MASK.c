
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v1_disk_dqblk {int dummy; } ;
struct quota_info {int * files; } ;
struct TYPE_7__ {scalar_t__ dqb_bhardlimit; scalar_t__ dqb_bsoftlimit; scalar_t__ dqb_ihardlimit; scalar_t__ dqb_isoftlimit; } ;
struct TYPE_9__ {int type; } ;
struct dquot {int dq_flags; TYPE_2__ dq_dqb; TYPE_5__ dq_id; TYPE_3__* dq_sb; } ;
struct TYPE_8__ {TYPE_1__* s_op; } ;
struct TYPE_6__ {int (* quota_read ) (TYPE_3__*,int,char*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_5__) ;
 int VAR_3 ;
 int FUNC_2 (struct v1_disk_dqblk*,int ,int) ;
 struct quota_info* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_3__*,int,char*,int,int ) ;
 int FUNC_6 (TYPE_2__*,struct v1_disk_dqblk*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dquot *VAR_4)
{
 int VAR_5 = VAR_4->dq_id.type;
 struct v1_disk_dqblk VAR_6;
 struct quota_info *VAR_7 = FUNC_3(VAR_4->dq_sb);

 if (!VAR_7->files[VAR_5])
  return -VAR_2;


 FUNC_2(&VAR_6, 0, sizeof(struct v1_disk_dqblk));
 VAR_4->dq_sb->s_op->quota_read(VAR_4->dq_sb, VAR_5, (char *)&VAR_6,
   sizeof(struct v1_disk_dqblk),
   FUNC_7(FUNC_1(&VAR_3, VAR_4->dq_id)));

 FUNC_6(&VAR_4->dq_dqb, &VAR_6);
 if (VAR_4->dq_dqb.dqb_bhardlimit == 0 &&
     VAR_4->dq_dqb.dqb_bsoftlimit == 0 &&
     VAR_4->dq_dqb.dqb_ihardlimit == 0 &&
     VAR_4->dq_dqb.dqb_isoftlimit == 0)
  FUNC_4(VAR_1, &VAR_4->dq_flags);
 FUNC_0(VAR_0);

 return 0;
}
