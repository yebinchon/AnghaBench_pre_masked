
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct inode {int i_gid; int i_uid; } ;
struct dentry {TYPE_2__* d_sb; } ;
struct autofs_sb_info {int pipefd; int exp_timeout; int min_proto; int max_proto; int flags; scalar_t__ pipe; int type; int oz_pgrp; } ;
struct TYPE_4__ {int s_root; } ;
struct TYPE_3__ {int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct autofs_sb_info* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct inode* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct seq_file*,char*,int) ;
 int FUNC_10 (struct seq_file*,char*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct seq_file *VAR_6, struct dentry *VAR_7)
{
 struct autofs_sb_info *VAR_8 = FUNC_0(VAR_7->d_sb);
 struct inode *VAR_9 = FUNC_3(VAR_7->d_sb->s_root);

 if (!VAR_8)
  return 0;

 FUNC_9(VAR_6, ",fd=%d", VAR_8->pipefd);
 if (!FUNC_11(VAR_9->i_uid, VAR_3))
  FUNC_9(VAR_6, ",uid=%u",
   FUNC_6(&VAR_5, VAR_9->i_uid));
 if (!FUNC_7(VAR_9->i_gid, VAR_2))
  FUNC_9(VAR_6, ",gid=%u",
   FUNC_5(&VAR_5, VAR_9->i_gid));
 FUNC_9(VAR_6, ",pgrp=%d", FUNC_8(VAR_8->oz_pgrp));
 FUNC_9(VAR_6, ",timeout=%lu", VAR_8->exp_timeout/VAR_4);
 FUNC_9(VAR_6, ",minproto=%d", VAR_8->min_proto);
 FUNC_9(VAR_6, ",maxproto=%d", VAR_8->max_proto);

 if (FUNC_2(VAR_8->type))
  FUNC_10(VAR_6, ",offset");
 else if (FUNC_1(VAR_8->type))
  FUNC_10(VAR_6, ",direct");
 else
  FUNC_10(VAR_6, ",indirect");
 if (VAR_8->flags & VAR_1)
  FUNC_10(VAR_6, ",strictexpire");
 if (VAR_8->flags & VAR_0)
  FUNC_10(VAR_6, ",ignore");






 return 0;
}
