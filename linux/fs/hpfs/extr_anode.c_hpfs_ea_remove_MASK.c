
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct anode {int btree; } ;
typedef int secno ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct super_block*,int ,unsigned int) ;
 struct anode* FUNC_2 (struct super_block*,int ,struct buffer_head**) ;
 int FUNC_3 (struct super_block*,int *) ;

void FUNC_4(struct super_block *VAR_0, secno VAR_1, int VAR_2, unsigned VAR_3)
{
 struct anode *VAR_4;
 struct buffer_head *VAR_5;
 if (VAR_2) {
  if (!(VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_5))) return;
  FUNC_3(VAR_0, &VAR_4->btree);
  FUNC_0(VAR_5);
  FUNC_1(VAR_0, VAR_1, 1);
 } else FUNC_1(VAR_0, VAR_1, (VAR_3 + 511) >> 9);
}
