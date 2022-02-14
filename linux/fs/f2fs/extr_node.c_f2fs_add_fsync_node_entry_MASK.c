
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct fsync_node_entry {unsigned int seq_id; int list; struct page* page; } ;
struct f2fs_sb_info {int fsync_node_lock; int fsync_node_num; int fsync_seg_id; int fsync_node_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct fsync_node_entry* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_6(struct f2fs_sb_info *VAR_2,
       struct page *VAR_3)
{
 struct fsync_node_entry *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6;

 VAR_4 = FUNC_1(VAR_1, VAR_0);

 FUNC_2(VAR_3);
 VAR_4->page = VAR_3;
 FUNC_0(&VAR_4->list);

 FUNC_4(&VAR_2->fsync_node_lock, VAR_5);
 FUNC_3(&VAR_4->list, &VAR_2->fsync_node_list);
 VAR_4->seq_id = VAR_2->fsync_seg_id++;
 VAR_6 = VAR_4->seq_id;
 VAR_2->fsync_node_num++;
 FUNC_5(&VAR_2->fsync_node_lock, VAR_5);

 return VAR_6;
}
