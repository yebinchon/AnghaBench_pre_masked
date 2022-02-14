
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_znode {int child_cnt; struct ubifs_zbranch* zbranch; void* level; } ;
struct ubifs_zbranch {int lnum; int offs; int len; union ubifs_key key; int * znode; int hash; } ;
struct ubifs_info {int fanout; scalar_t__ main_first; scalar_t__ leb_cnt; scalar_t__ leb_size; TYPE_1__* ranges; int max_idx_node_sz; } ;
struct ubifs_idx_node {int level; int child_cnt; } ;
struct ubifs_branch {int len; int offs; int lnum; int key; } ;
struct TYPE_2__ {scalar_t__ max_len; scalar_t__ len; scalar_t__ min_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 void* VAR_4 ;

 int FUNC_0 (char*,int,int,void*,int) ;
 int FUNC_1 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_2 (struct ubifs_info*,int *,union ubifs_key*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*) ;
 int FUNC_4 (struct ubifs_info*,union ubifs_key const*,union ubifs_key const*) ;
 int FUNC_5 (struct ubifs_idx_node*) ;
 struct ubifs_idx_node* FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_idx_node*,int ,int,int) ;
 int FUNC_10 (struct ubifs_info*,struct ubifs_branch*) ;
 int FUNC_11 (struct ubifs_info*,int ,int ) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_idx_node*) ;
 int FUNC_13 (struct ubifs_info*,char*,int,...) ;
 struct ubifs_branch* FUNC_14 (struct ubifs_info*,struct ubifs_idx_node*,int) ;
 int FUNC_15 (struct ubifs_info*,struct ubifs_idx_node*,int ) ;
 int FUNC_16 (struct ubifs_info*,struct ubifs_idx_node*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_17(struct ubifs_info *VAR_5, struct ubifs_zbranch *VAR_6,
        struct ubifs_znode *VAR_7)
{
 int VAR_8 = VAR_6->lnum;
 int VAR_9 = VAR_6->offs;
 int VAR_10 = VAR_6->len;
 int VAR_11, VAR_12, VAR_13, VAR_14;
 struct ubifs_idx_node *VAR_15;

 VAR_15 = FUNC_6(VAR_5->max_idx_node_sz, VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_12 = FUNC_16(VAR_5, VAR_15, VAR_3, VAR_10, VAR_8, VAR_9);
 if (VAR_12 < 0) {
  FUNC_5(VAR_15);
  return VAR_12;
 }

 VAR_12 = FUNC_15(VAR_5, VAR_15, VAR_6->hash);
 if (VAR_12) {
  FUNC_9(VAR_5, VAR_15, VAR_6->hash, VAR_8, VAR_9);
  FUNC_5(VAR_15);
  return VAR_12;
 }

 VAR_7->child_cnt = FUNC_7(VAR_15->child_cnt);
 VAR_7->level = FUNC_7(VAR_15->level);

 FUNC_0("LEB %d:%d, level %d, %d branch",
  VAR_8, VAR_9, VAR_7->level, VAR_7->child_cnt);

 if (VAR_7->child_cnt > VAR_5->fanout || VAR_7->level > VAR_4) {
  FUNC_13(VAR_5, "current fanout %d, branch count %d",
     VAR_5->fanout, VAR_7->child_cnt);
  FUNC_13(VAR_5, "max levels %d, znode level %d",
     VAR_4, VAR_7->level);
  VAR_12 = 1;
  goto out_dump;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->child_cnt; VAR_11++) {
  struct ubifs_branch *VAR_16 = FUNC_14(VAR_5, VAR_15, VAR_11);
  struct ubifs_zbranch *VAR_17 = &VAR_7->zbranch[VAR_11];

  FUNC_2(VAR_5, &VAR_16->key, &VAR_17->key);
  VAR_17->lnum = FUNC_8(VAR_16->lnum);
  VAR_17->offs = FUNC_8(VAR_16->offs);
  VAR_17->len = FUNC_8(VAR_16->len);
  FUNC_11(VAR_5, FUNC_10(VAR_5, VAR_16), VAR_17->hash);
  VAR_17->znode = ((void*)0);



  if (VAR_17->lnum < VAR_5->main_first ||
      VAR_17->lnum >= VAR_5->leb_cnt || VAR_17->offs < 0 ||
      VAR_17->offs + VAR_17->len > VAR_5->leb_size || VAR_17->offs & 7) {
   FUNC_13(VAR_5, "bad branch %d", VAR_11);
   VAR_12 = 2;
   goto out_dump;
  }

  switch (FUNC_3(VAR_5, &VAR_17->key)) {
  case 129:
  case 131:
  case 130:
  case 128:
   break;
  default:
   FUNC_13(VAR_5, "bad key type at slot %d: %d",
      VAR_11, FUNC_3(VAR_5, &VAR_17->key));
   VAR_12 = 3;
   goto out_dump;
  }

  if (VAR_7->level)
   continue;

  VAR_13 = FUNC_3(VAR_5, &VAR_17->key);
  if (VAR_5->ranges[VAR_13].max_len == 0) {
   if (VAR_17->len != VAR_5->ranges[VAR_13].len) {
    FUNC_13(VAR_5, "bad target node (type %d) length (%d)",
       VAR_13, VAR_17->len);
    FUNC_13(VAR_5, "have to be %d", VAR_5->ranges[VAR_13].len);
    VAR_12 = 4;
    goto out_dump;
   }
  } else if (VAR_17->len < VAR_5->ranges[VAR_13].min_len ||
      VAR_17->len > VAR_5->ranges[VAR_13].max_len) {
   FUNC_13(VAR_5, "bad target node (type %d) length (%d)",
      VAR_13, VAR_17->len);
   FUNC_13(VAR_5, "have to be in range of %d-%d",
      VAR_5->ranges[VAR_13].min_len,
      VAR_5->ranges[VAR_13].max_len);
   VAR_12 = 5;
   goto out_dump;
  }
 }





 for (VAR_11 = 0; VAR_11 < VAR_7->child_cnt - 1; VAR_11++) {
  const union ubifs_key *VAR_18, *VAR_19;

  VAR_18 = &VAR_7->zbranch[VAR_11].key;
  VAR_19 = &VAR_7->zbranch[VAR_11 + 1].key;

  VAR_14 = FUNC_4(VAR_5, VAR_18, VAR_19);
  if (VAR_14 > 0) {
   FUNC_13(VAR_5, "bad key order (keys %d and %d)", VAR_11, VAR_11 + 1);
   VAR_12 = 6;
   goto out_dump;
  } else if (VAR_14 == 0 && !FUNC_1(VAR_5, VAR_18)) {

   FUNC_13(VAR_5, "keys %d and %d are not hashed but equivalent",
      VAR_11, VAR_11 + 1);
   VAR_12 = 7;
   goto out_dump;
  }
 }

 FUNC_5(VAR_15);
 return 0;

out_dump:
 FUNC_13(VAR_5, "bad indexing node at LEB %d:%d, error %d", VAR_8, VAR_9, VAR_12);
 FUNC_12(VAR_5, VAR_15);
 FUNC_5(VAR_15);
 return -VAR_0;
}
