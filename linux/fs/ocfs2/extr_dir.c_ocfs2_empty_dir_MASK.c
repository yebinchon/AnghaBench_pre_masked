
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int actor; } ;
struct ocfs2_empty_dir_priv {int seen_other; int seen_dot_dot; int seen_dot; TYPE_1__ ctx; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,unsigned long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct ocfs2_empty_dir_priv*) ;
 int VAR_1 ;

int FUNC_6(struct inode *VAR_2)
{
 int VAR_3;
 struct ocfs2_empty_dir_priv VAR_4 = {
  .ctx.actor = VAR_1,
 };

 if (FUNC_4(VAR_2)) {
  VAR_3 = FUNC_5(VAR_2, &VAR_4);
  if (VAR_3)
   FUNC_2(VAR_3);




 }

 VAR_3 = FUNC_3(VAR_2, &VAR_4.ctx);
 if (VAR_3)
  FUNC_2(VAR_3);

 if (!VAR_4.seen_dot || !VAR_4.seen_dot_dot) {
  FUNC_1(VAR_0, "bad directory (dir #%llu) - no `.' or `..'\n",
       (unsigned long long)FUNC_0(VAR_2)->ip_blkno);



  return 1;
 }

 return !VAR_4.seen_other;
}
