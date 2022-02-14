
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int n_used_nodes; int first_free; scalar_t__ n_free_nodes; } ;
struct anode {TYPE_2__ btree; int self; int magic; } ;
typedef scalar_t__ anode_secno ;
struct TYPE_3__ {scalar_t__ sb_chk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,int,char*) ;
 int FUNC_3 (struct super_block*,char*,scalar_t__) ;
 struct anode* FUNC_4 (struct super_block*,scalar_t__,struct buffer_head**,int ) ;
 TYPE_1__* FUNC_5 (struct super_block*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

struct anode *FUNC_8(struct super_block *VAR_2, anode_secno VAR_3, struct buffer_head **VAR_4)
{
 struct anode *VAR_5;
 if (FUNC_5(VAR_2)->sb_chk) if (FUNC_2(VAR_2, VAR_3, 1, "anode")) return ((void*)0);
 if ((VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_1)))
  if (FUNC_5(VAR_2)->sb_chk) {
   if (FUNC_7(VAR_5->magic) != VAR_0) {
    FUNC_3(VAR_2, "bad magic on anode %08x", VAR_3);
    goto bail;
   }
   if (FUNC_7(VAR_5->self) != VAR_3) {
    FUNC_3(VAR_2, "self pointer invalid on anode %08x", VAR_3);
    goto bail;
   }
   if ((unsigned)VAR_5->btree.n_used_nodes + (unsigned)VAR_5->btree.n_free_nodes !=
       (FUNC_0(&VAR_5->btree) ? 60 : 40)) {
    FUNC_3(VAR_2, "bad number of nodes in anode %08x", VAR_3);
    goto bail;
   }
   if (FUNC_6(VAR_5->btree.first_free) !=
       8 + VAR_5->btree.n_used_nodes * (FUNC_0(&VAR_5->btree) ? 8 : 12)) {
    FUNC_3(VAR_2, "bad first_free pointer in anode %08x", VAR_3);
    goto bail;
   }
  }
 return VAR_5;
 bail:
 FUNC_1(*VAR_4);
 return ((void*)0);
}
