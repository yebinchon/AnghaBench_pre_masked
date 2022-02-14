
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_zbranch {int lnum; int offs; int len; } ;
struct ubifs_info {int max_idx_node_sz; struct ubifs_debug_info* dbg; } ;
struct TYPE_2__ {int sqnum; } ;
struct ubifs_idx_node {TYPE_1__ ch; int level; } ;
struct ubifs_debug_info {int old_zroot_sqnum; int old_zroot_level; struct ubifs_zbranch old_zroot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ubifs_idx_node*) ;
 struct ubifs_idx_node* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubifs_info*,struct ubifs_idx_node*,int ,int,int,int) ;

int FUNC_5(struct ubifs_info *VAR_3, struct ubifs_zbranch *VAR_4)
{
 struct ubifs_idx_node *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 struct ubifs_debug_info *VAR_10 = VAR_3->dbg;

 VAR_10->old_zroot = *VAR_4;
 VAR_6 = VAR_10->old_zroot.lnum;
 VAR_7 = VAR_10->old_zroot.offs;
 VAR_8 = VAR_10->old_zroot.len;

 VAR_5 = FUNC_1(VAR_3->max_idx_node_sz, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_3, VAR_5, VAR_2, VAR_8, VAR_6, VAR_7);
 if (VAR_9)
  goto out;

 VAR_10->old_zroot_level = FUNC_2(VAR_5->level);
 VAR_10->old_zroot_sqnum = FUNC_3(VAR_5->ch.sqnum);
out:
 FUNC_0(VAR_5);
 return VAR_9;
}
