
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int n_free_nodes; void* first_free; } ;
struct fnode {TYPE_1__ btree; void* ea_offs; int magic; } ;
struct buffer_head {int dummy; } ;
typedef int secno ;
typedef int fnode_secno ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int ,int,int ) ;
 int FUNC_3 (struct super_block*,int ,int) ;
 struct fnode* FUNC_4 (struct super_block*,int ,struct buffer_head**) ;
 int FUNC_5 (struct fnode*,int ,int) ;

struct fnode *FUNC_6(struct super_block *VAR_2, secno VAR_3, fnode_secno *VAR_4,
     struct buffer_head **VAR_5)
{
 struct fnode *VAR_6;
 if (!(*VAR_4 = FUNC_2(VAR_2, VAR_3, 1, VAR_0))) return ((void*)0);
 if (!(VAR_6 = FUNC_4(VAR_2, *VAR_4, VAR_5))) {
  FUNC_3(VAR_2, *VAR_4, 1);
  return ((void*)0);
 }
 FUNC_5(VAR_6, 0, 512);
 VAR_6->magic = FUNC_1(VAR_1);
 VAR_6->ea_offs = FUNC_0(0xc4);
 VAR_6->btree.n_free_nodes = 8;
 VAR_6->btree.first_free = FUNC_0(8);
 return VAR_6;
}
