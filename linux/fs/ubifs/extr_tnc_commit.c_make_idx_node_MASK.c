
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_znode {int child_cnt; int level; int lnum; int offs; int len; size_t iip; int flags; struct ubifs_zbranch* zbranch; struct ubifs_znode* parent; } ;
struct ubifs_zbranch {int lnum; int offs; int len; int * hash; struct ubifs_znode* znode; int key; } ;
struct TYPE_4__ {int lnum; int offs; int len; int * hash; } ;
struct ubifs_info {int dirty_zn_cnt; int calc_idx_sz; TYPE_2__ zroot; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_idx_node {void* level; void* child_cnt; TYPE_1__ ch; } ;
struct ubifs_branch {void* len; void* offs; void* lnum; int key; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_6 (struct ubifs_info*,int *,int *) ;
 int FUNC_7 (struct ubifs_info*,int ) ;
 int * FUNC_8 (struct ubifs_info*,struct ubifs_branch*) ;
 int FUNC_9 (struct ubifs_info*,int *,int *) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_znode*) ;
 int FUNC_11 (struct ubifs_info*,char*) ;
 struct ubifs_branch* FUNC_12 (struct ubifs_info*,struct ubifs_idx_node*,int) ;
 int FUNC_13 (struct ubifs_info*,struct ubifs_idx_node*,int *) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_idx_node*,int,int ) ;
 int FUNC_15 (struct ubifs_znode*) ;
 int FUNC_16 (struct ubifs_znode*) ;

__attribute__((used)) static int FUNC_17(struct ubifs_info *VAR_5, struct ubifs_idx_node *VAR_6,
    struct ubifs_znode *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
 struct ubifs_znode *VAR_11;
 u8 VAR_12[VAR_3];
 int VAR_13, VAR_14;


 VAR_6->ch.node_type = VAR_4;
 VAR_6->child_cnt = FUNC_3(VAR_7->child_cnt);
 VAR_6->level = FUNC_3(VAR_7->level);
 for (VAR_13 = 0; VAR_13 < VAR_7->child_cnt; VAR_13++) {
  struct ubifs_branch *VAR_15 = FUNC_12(VAR_5, VAR_6, VAR_13);
  struct ubifs_zbranch *VAR_16 = &VAR_7->zbranch[VAR_13];

  FUNC_6(VAR_5, &VAR_16->key, &VAR_15->key);
  VAR_15->lnum = FUNC_4(VAR_16->lnum);
  VAR_15->offs = FUNC_4(VAR_16->offs);
  VAR_15->len = FUNC_4(VAR_16->len);
  FUNC_9(VAR_5, VAR_16->hash, FUNC_8(VAR_5, VAR_15));
  if (!VAR_16->lnum || !VAR_16->len) {
   FUNC_11(VAR_5, "bad ref in znode");
   FUNC_10(VAR_5, VAR_7);
   if (VAR_16->znode)
    FUNC_10(VAR_5, VAR_16->znode);

   return -VAR_2;
  }
 }
 FUNC_14(VAR_5, VAR_6, VAR_10, 0);
 FUNC_13(VAR_5, VAR_6, VAR_12);

 VAR_7->lnum = VAR_8;
 VAR_7->offs = VAR_9;
 VAR_7->len = VAR_10;

 VAR_14 = FUNC_5(VAR_5, VAR_7);


 VAR_11 = VAR_7->parent;
 if (VAR_11) {
  struct ubifs_zbranch *VAR_17;

  VAR_17 = &VAR_11->zbranch[VAR_7->iip];
  VAR_17->lnum = VAR_8;
  VAR_17->offs = VAR_9;
  VAR_17->len = VAR_10;
  FUNC_9(VAR_5, VAR_12, VAR_17->hash);
 } else {
  VAR_5->zroot.lnum = VAR_8;
  VAR_5->zroot.offs = VAR_9;
  VAR_5->zroot.len = VAR_10;
  FUNC_9(VAR_5, VAR_12, VAR_5->zroot.hash);
 }
 VAR_5->calc_idx_sz += FUNC_0(VAR_10, 8);

 FUNC_2(&VAR_5->dirty_zn_cnt);

 FUNC_7(VAR_5, FUNC_16(VAR_7));
 FUNC_7(VAR_5, FUNC_15(VAR_7));





 FUNC_1(VAR_1, &VAR_7->flags);
 FUNC_1(VAR_0, &VAR_7->flags);

 return VAR_14;
}
