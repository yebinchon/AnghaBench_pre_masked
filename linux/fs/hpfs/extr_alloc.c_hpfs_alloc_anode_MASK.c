
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int n_free_nodes; int first_free; scalar_t__ n_used_nodes; } ;
struct anode {TYPE_1__ btree; void* self; void* magic; } ;
typedef int secno ;
typedef int anode_secno ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int ,int,int ) ;
 int FUNC_3 (struct super_block*,int ,int) ;
 struct anode* FUNC_4 (struct super_block*,int ,struct buffer_head**) ;
 int FUNC_5 (struct anode*,int ,int) ;

struct anode *FUNC_6(struct super_block *VAR_2, secno VAR_3, anode_secno *VAR_4,
     struct buffer_head **VAR_5)
{
 struct anode *VAR_6;
 if (!(*VAR_4 = FUNC_2(VAR_2, VAR_3, 1, VAR_0))) return ((void*)0);
 if (!(VAR_6 = FUNC_4(VAR_2, *VAR_4, VAR_5))) {
  FUNC_3(VAR_2, *VAR_4, 1);
  return ((void*)0);
 }
 FUNC_5(VAR_6, 0, 512);
 VAR_6->magic = FUNC_1(VAR_1);
 VAR_6->self = FUNC_1(*VAR_4);
 VAR_6->btree.n_free_nodes = 40;
 VAR_6->btree.n_used_nodes = 0;
 VAR_6->btree.first_free = FUNC_0(8);
 return VAR_6;
}
