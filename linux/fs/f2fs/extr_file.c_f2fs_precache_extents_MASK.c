
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_map_blocks {scalar_t__ m_lblk; scalar_t__* m_next_extent; int m_may_create; scalar_t__ m_len; int m_seg_type; int * m_next_pgofs; } ;
struct f2fs_inode_info {int * i_gc_rwsem; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ max_file_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_inode_info* FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,struct f2fs_map_blocks*,int ,int ) ;
 scalar_t__ FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct inode *VAR_5)
{
 struct f2fs_inode_info *VAR_6 = FUNC_0(VAR_5);
 struct f2fs_map_blocks VAR_7;
 pgoff_t VAR_8;
 loff_t VAR_9;
 int VAR_10;

 if (FUNC_4(VAR_5, VAR_2))
  return -VAR_0;

 VAR_7.m_lblk = 0;
 VAR_7.m_next_pgofs = ((void*)0);
 VAR_7.m_next_extent = &VAR_8;
 VAR_7.m_seg_type = VAR_3;
 VAR_7.m_may_create = 0;
 VAR_9 = FUNC_1(VAR_5)->max_file_blocks;

 while (VAR_7.m_lblk < VAR_9) {
  VAR_7.m_len = VAR_9 - VAR_7.m_lblk;

  FUNC_2(&VAR_6->i_gc_rwsem[VAR_4]);
  VAR_10 = FUNC_3(VAR_5, &VAR_7, 0, VAR_1);
  FUNC_5(&VAR_6->i_gc_rwsem[VAR_4]);
  if (VAR_10)
   return VAR_10;

  VAR_7.m_lblk = VAR_8;
 }

 return VAR_10;
}
