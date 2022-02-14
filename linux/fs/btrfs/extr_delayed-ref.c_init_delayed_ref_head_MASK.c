
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_qgroup_extent_record {int * old_roots; void* num_bytes; void* bytenr; void* data_rsv_refroot; void* data_rsv; } ;
struct btrfs_delayed_ref_head {int ref_mod; int must_insert_reserved; int is_data; int is_system; int total_ref_mod; int mutex; int lock; scalar_t__ processing; int href_node; int ref_add_list; int ref_tree; void* num_bytes; void* bytenr; int refs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct btrfs_delayed_ref_head *VAR_4,
      struct btrfs_qgroup_extent_record *VAR_5,
      u64 VAR_6, u64 VAR_7, u64 VAR_8,
      u64 VAR_9, int VAR_10, bool VAR_11,
      bool VAR_12)
{
 int VAR_13 = 1;
 int VAR_14 = 0;


 FUNC_0(!VAR_11 && VAR_9);





 if (VAR_10 == VAR_2)
  VAR_13 = 0;
 else if (VAR_10 == VAR_1)
  VAR_13 = -1;
 if (VAR_10 == VAR_0)
  VAR_14 = 1;
 else
  VAR_14 = 0;

 FUNC_4(&VAR_4->refs, 1);
 VAR_4->bytenr = VAR_6;
 VAR_4->num_bytes = VAR_7;
 VAR_4->ref_mod = VAR_13;
 VAR_4->must_insert_reserved = VAR_14;
 VAR_4->is_data = VAR_11;
 VAR_4->is_system = VAR_12;
 VAR_4->ref_tree = VAR_3;
 FUNC_1(&VAR_4->ref_add_list);
 FUNC_2(&VAR_4->href_node);
 VAR_4->processing = 0;
 VAR_4->total_ref_mod = VAR_13;
 FUNC_5(&VAR_4->lock);
 FUNC_3(&VAR_4->mutex);

 if (VAR_5) {
  if (VAR_8 && VAR_9) {
   VAR_5->data_rsv = VAR_9;
   VAR_5->data_rsv_refroot = VAR_8;
  }
  VAR_5->bytenr = VAR_6;
  VAR_5->num_bytes = VAR_7;
  VAR_5->old_roots = ((void*)0);
 }
}
