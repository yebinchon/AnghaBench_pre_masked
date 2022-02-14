
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u64 ;
struct btrfs_fs_info {int tree_mod_seq; } ;
struct btrfs_delayed_ref_node {int ref_mod; int action; int in_tree; int add_list; int ref_node; int type; void* seq; scalar_t__ is_head; void* num_bytes; void* bytenr; int refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(struct btrfs_fs_info *VAR_2,
        struct btrfs_delayed_ref_node *VAR_3,
        u64 VAR_4, u64 VAR_5, u64 VAR_6,
        int VAR_7, u8 VAR_8)
{
 u64 VAR_9 = 0;

 if (VAR_7 == VAR_0)
  VAR_7 = VAR_1;

 if (FUNC_3(VAR_6))
  VAR_9 = FUNC_2(&VAR_2->tree_mod_seq);

 FUNC_4(&VAR_3->refs, 1);
 VAR_3->bytenr = VAR_4;
 VAR_3->num_bytes = VAR_5;
 VAR_3->ref_mod = 1;
 VAR_3->action = VAR_7;
 VAR_3->is_head = 0;
 VAR_3->in_tree = 1;
 VAR_3->seq = VAR_9;
 VAR_3->type = VAR_8;
 FUNC_1(&VAR_3->ref_node);
 FUNC_0(&VAR_3->add_list);
}
