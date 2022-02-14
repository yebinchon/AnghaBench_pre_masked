
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* external; } ;
struct fnode {int ea_size_l; int ea_secno; TYPE_2__ u; int btree; } ;
struct extended_attribute {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int fnode_secno ;
struct TYPE_3__ {int disk_secno; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct extended_attribute*) ;
 scalar_t__ FUNC_2 (struct extended_attribute*) ;
 int FUNC_3 (struct extended_attribute*) ;
 int FUNC_4 (struct extended_attribute*) ;
 struct extended_attribute* FUNC_5 (struct fnode*) ;
 struct extended_attribute* FUNC_6 (struct fnode*) ;
 int FUNC_7 (struct fnode*) ;
 int FUNC_8 (struct fnode*) ;
 int FUNC_9 (struct super_block*,int ,int ,int ) ;
 int FUNC_10 (struct super_block*,int ,int ,int ) ;
 int FUNC_11 (struct super_block*,int ,int) ;
 struct fnode* FUNC_12 (struct super_block*,int ,struct buffer_head**) ;
 int FUNC_13 (struct super_block*,int *) ;
 int FUNC_14 (struct super_block*,int ) ;
 int FUNC_15 (int ) ;
 struct extended_attribute* FUNC_16 (struct extended_attribute*) ;

void FUNC_17(struct super_block *VAR_0, fnode_secno VAR_1)
{
 struct buffer_head *VAR_2;
 struct fnode *VAR_3;
 struct extended_attribute *VAR_4;
 struct extended_attribute *VAR_5;
 if (!(VAR_3 = FUNC_12(VAR_0, VAR_1, &VAR_2))) return;
 if (!FUNC_8(VAR_3)) FUNC_13(VAR_0, &VAR_3->btree);
 else FUNC_14(VAR_0, FUNC_15(VAR_3->u.external[0].disk_secno));
 VAR_5 = FUNC_6(VAR_3);
 for (VAR_4 = FUNC_5(VAR_3); VAR_4 < VAR_5; VAR_4 = FUNC_16(VAR_4))
  if (FUNC_2(VAR_4))
   FUNC_10(VAR_0, FUNC_4(VAR_4), FUNC_1(VAR_4), FUNC_3(VAR_4));
 FUNC_9(VAR_0, FUNC_15(VAR_3->ea_secno), FUNC_7(VAR_3), FUNC_15(VAR_3->ea_size_l));
 FUNC_0(VAR_2);
 FUNC_11(VAR_0, VAR_1, 1);
}
