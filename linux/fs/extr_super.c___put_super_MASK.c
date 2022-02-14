
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int node; } ;
struct TYPE_3__ {int node; } ;
struct super_block {int rcu; int s_subtype; int s_user_ns; int s_mounts; TYPE_2__ s_inode_lru; TYPE_1__ s_dentry_lru; int s_list; int s_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct super_block*) ;

__attribute__((used)) static void FUNC_8(struct super_block *VAR_1)
{
 if (!--VAR_1->s_count) {
  FUNC_4(&VAR_1->s_list);
  FUNC_0(VAR_1->s_dentry_lru.node);
  FUNC_0(VAR_1->s_inode_lru.node);
  FUNC_0(!FUNC_5(&VAR_1->s_mounts));
  FUNC_7(VAR_1);
  FUNC_2(VAR_1);
  FUNC_6(VAR_1->s_user_ns);
  FUNC_3(VAR_1->s_subtype);
  FUNC_1(&VAR_1->rcu, VAR_0);
 }
}
