
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct anode {int btree; } ;
typedef int secno ;
typedef int anode_secno ;


 int FUNC_0 (struct super_block*,int *,int *,unsigned int,struct buffer_head*) ;
 struct anode* FUNC_1 (struct super_block*,int ,struct buffer_head**) ;

__attribute__((used)) static secno FUNC_2(struct super_block *VAR_0, anode_secno VAR_1, unsigned VAR_2)
{
 struct anode *VAR_3;
 struct buffer_head *VAR_4;
 if (!(VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4))) return -1;
 return FUNC_0(VAR_0, ((void*)0), &VAR_3->btree, VAR_2, VAR_4);
}
