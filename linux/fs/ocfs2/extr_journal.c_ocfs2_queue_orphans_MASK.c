
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct TYPE_2__ {int actor; } ;
struct ocfs2_orphan_filldir_priv {int orphan_reco_type; struct inode* head; TYPE_1__ ctx; struct ocfs2_super* osb; } ;
struct inode {int dummy; } ;
typedef enum ocfs2_orphan_reco_type { ____Placeholder_ocfs2_orphan_reco_type } ocfs2_orphan_reco_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,TYPE_1__*) ;
 struct inode* FUNC_5 (struct ocfs2_super*,int ,int) ;
 int FUNC_6 (struct inode*,int *,int ) ;
 int FUNC_7 (struct inode*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct ocfs2_super *VAR_3,
          int VAR_4,
          struct inode **VAR_5,
          enum ocfs2_orphan_reco_type VAR_6)
{
 int VAR_7;
 struct inode *VAR_8 = ((void*)0);
 struct ocfs2_orphan_filldir_priv VAR_9 = {
  .ctx.actor = VAR_2,
  .osb = VAR_3,
  .head = *VAR_5,
  .orphan_reco_type = VAR_6
 };

 VAR_8 = FUNC_5(VAR_3,
             VAR_1,
             VAR_4);
 if (!VAR_8) {
  VAR_7 = -VAR_0;
  FUNC_3(VAR_7);
  return VAR_7;
 }

 FUNC_0(VAR_8);
 VAR_7 = FUNC_6(VAR_8, ((void*)0), 0);
 if (VAR_7 < 0) {
  FUNC_3(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_8, &VAR_9.ctx);
 if (VAR_7) {
  FUNC_3(VAR_7);
  goto out_cluster;
 }

 *VAR_5 = VAR_9.head;

out_cluster:
 FUNC_7(VAR_8, 0);
out:
 FUNC_1(VAR_8);
 FUNC_2(VAR_8);
 return VAR_7;
}
