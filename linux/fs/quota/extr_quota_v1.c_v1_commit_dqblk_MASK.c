
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct v1_disk_dqblk {int dqb_itime; int dqb_btime; } ;
struct TYPE_12__ {short type; int gid; int uid; } ;
struct dquot {TYPE_3__* dq_sb; TYPE_7__ dq_id; int dq_dqb; } ;
typedef int ssize_t ;
struct TYPE_11__ {scalar_t__* files; TYPE_1__* info; } ;
struct TYPE_10__ {TYPE_2__* s_op; } ;
struct TYPE_9__ {int (* quota_write ) (TYPE_3__*,short,char*,int,int ) ;} ;
struct TYPE_8__ {int dqi_igrace; int dqi_bgrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_7__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 TYPE_4__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,short,char*,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct v1_disk_dqblk*,int *) ;

__attribute__((used)) static int FUNC_9(struct dquot *VAR_7)
{
 short VAR_8 = VAR_7->dq_id.type;
 ssize_t VAR_9;
 struct v1_disk_dqblk VAR_10;

 FUNC_8(&VAR_10, &VAR_7->dq_dqb);
 if (((VAR_8 == VAR_5) && FUNC_6(VAR_7->dq_id.uid, VAR_3)) ||
     ((VAR_8 == VAR_4) && FUNC_2(VAR_7->dq_id.gid, VAR_2))) {
  VAR_10.dqb_btime =
   FUNC_4(VAR_7->dq_sb)->info[VAR_8].dqi_bgrace;
  VAR_10.dqb_itime =
   FUNC_4(VAR_7->dq_sb)->info[VAR_8].dqi_igrace;
 }
 VAR_9 = 0;
 if (FUNC_4(VAR_7->dq_sb)->files[VAR_8])
  VAR_9 = VAR_7->dq_sb->s_op->quota_write(VAR_7->dq_sb, VAR_8,
   (char *)&VAR_10, sizeof(struct v1_disk_dqblk),
   FUNC_7(FUNC_1(&VAR_6, VAR_7->dq_id)));
 if (VAR_9 != sizeof(struct v1_disk_dqblk)) {
  FUNC_3(VAR_7->dq_sb, "dquota write failed");
  if (VAR_9 >= 0)
   VAR_9 = -VAR_1;
  goto out;
 }
 VAR_9 = 0;

out:
 FUNC_0(VAR_0);

 return VAR_9;
}
