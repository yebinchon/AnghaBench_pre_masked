
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_7__ {TYPE_2__* external; TYPE_1__* internal; } ;
struct bplus_header {int n_free_nodes; int n_used_nodes; void* first_free; TYPE_3__ u; int flags; } ;
struct fnode {struct bplus_header btree; } ;
struct buffer_head {int dummy; } ;
struct anode {struct bplus_header btree; } ;
typedef unsigned int secno ;
typedef unsigned int anode_secno ;
struct TYPE_8__ {scalar_t__ sb_chk; } ;
struct TYPE_6__ {int length; int disk_secno; int file_secno; } ;
struct TYPE_5__ {int down; int file_secno; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bplus_header*) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct super_block*,unsigned int,int,int ) ;
 int FUNC_5 (struct super_block*,char*,unsigned int,...) ;
 int FUNC_6 (struct super_block*,unsigned int,unsigned int) ;
 struct anode* FUNC_7 (struct super_block*,unsigned int,struct buffer_head**) ;
 struct fnode* FUNC_8 (struct super_block*,unsigned int,struct buffer_head**) ;
 int FUNC_9 (struct super_block*,struct bplus_header*) ;
 TYPE_4__* FUNC_10 (struct super_block*) ;
 scalar_t__ FUNC_11 (struct super_block*,unsigned int,int*,int*,char*) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (struct buffer_head*) ;

void FUNC_14(struct super_block *VAR_1, secno VAR_2, int VAR_3, unsigned VAR_4)
{
 struct fnode *VAR_5;
 struct anode *VAR_6;
 struct buffer_head *VAR_7;
 struct bplus_header *VAR_8;
 anode_secno VAR_9 = VAR_2;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14 = 0;
 if (VAR_3) {
  if (!(VAR_5 = FUNC_8(VAR_1, VAR_2, &VAR_7))) return;
  VAR_8 = &VAR_5->btree;
 } else {
  if (!(VAR_6 = FUNC_7(VAR_1, VAR_2, &VAR_7))) return;
  VAR_8 = &VAR_6->btree;
 }
 if (!VAR_4) {
  FUNC_9(VAR_1, VAR_8);
  if (VAR_3) {
   VAR_8->n_free_nodes = 8;
   VAR_8->n_used_nodes = 0;
   VAR_8->first_free = FUNC_2(8);
   VAR_8->flags &= ~VAR_0;
   FUNC_13(VAR_7);
  } else FUNC_6(VAR_1, VAR_2, 1);
  FUNC_1(VAR_7);
  return;
 }
 while (FUNC_0(VAR_8)) {
  VAR_12 = VAR_8->n_used_nodes + VAR_8->n_free_nodes;
  for (VAR_10 = 0; VAR_10 < VAR_8->n_used_nodes; VAR_10++)
   if (FUNC_12(VAR_8->u.internal[VAR_10].file_secno) >= VAR_4) goto f;
  FUNC_1(VAR_7);
  FUNC_5(VAR_1, "internal btree %08x doesn't end with -1", VAR_9);
  return;
  f:
  for (VAR_11 = VAR_10 + 1; VAR_11 < VAR_8->n_used_nodes; VAR_11++)
   FUNC_4(VAR_1, FUNC_12(VAR_8->u.internal[VAR_11].down), 1, 0);
  VAR_8->n_used_nodes = VAR_10 + 1;
  VAR_8->n_free_nodes = VAR_12 - VAR_8->n_used_nodes;
  VAR_8->first_free = FUNC_2(8 + 8 * VAR_8->n_used_nodes);
  FUNC_13(VAR_7);
  if (VAR_8->u.internal[VAR_10].file_secno == FUNC_3(VAR_4)) {
   FUNC_1(VAR_7);
   return;
  }
  VAR_9 = FUNC_12(VAR_8->u.internal[VAR_10].down);
  FUNC_1(VAR_7);
  if (FUNC_10(VAR_1)->sb_chk)
   if (FUNC_11(VAR_1, VAR_9, &VAR_13, &VAR_14, "hpfs_truncate_btree"))
    return;
  if (!(VAR_6 = FUNC_7(VAR_1, VAR_9, &VAR_7))) return;
  VAR_8 = &VAR_6->btree;
 }
 VAR_12 = VAR_8->n_used_nodes + VAR_8->n_free_nodes;
 for (VAR_10 = 0; VAR_10 < VAR_8->n_used_nodes; VAR_10++)
  if (FUNC_12(VAR_8->u.external[VAR_10].file_secno) + FUNC_12(VAR_8->u.external[VAR_10].length) >= VAR_4) goto ff;
 FUNC_1(VAR_7);
 return;
 ff:
 if (VAR_4 <= FUNC_12(VAR_8->u.external[VAR_10].file_secno)) {
  FUNC_5(VAR_1, "there is an allocation error in file %08x, sector %08x", VAR_2, VAR_4);
  if (VAR_10) VAR_10--;
 }
 else if (FUNC_12(VAR_8->u.external[VAR_10].file_secno) + FUNC_12(VAR_8->u.external[VAR_10].length) > VAR_4) {
  FUNC_6(VAR_1, FUNC_12(VAR_8->u.external[VAR_10].disk_secno) + VAR_4 -
   FUNC_12(VAR_8->u.external[VAR_10].file_secno), FUNC_12(VAR_8->u.external[VAR_10].length)
   - VAR_4 + FUNC_12(VAR_8->u.external[VAR_10].file_secno));
  VAR_8->u.external[VAR_10].length = FUNC_3(VAR_4 - FUNC_12(VAR_8->u.external[VAR_10].file_secno));
 }
 for (VAR_11 = VAR_10 + 1; VAR_11 < VAR_8->n_used_nodes; VAR_11++)
  FUNC_6(VAR_1, FUNC_12(VAR_8->u.external[VAR_11].disk_secno), FUNC_12(VAR_8->u.external[VAR_11].length));
 VAR_8->n_used_nodes = VAR_10 + 1;
 VAR_8->n_free_nodes = VAR_12 - VAR_8->n_used_nodes;
 VAR_8->first_free = FUNC_2(8 + 12 * VAR_8->n_used_nodes);
 FUNC_13(VAR_7);
 FUNC_1(VAR_7);
}
