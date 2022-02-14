
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct inode {int i_io_list; } ;
struct bdi_writeback {struct list_head b_dirty_time; int list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct bdi_writeback*) ;
 int FUNC_3 (struct bdi_writeback*) ;

__attribute__((used)) static bool FUNC_4(struct inode *VAR_0,
          struct bdi_writeback *VAR_1,
          struct list_head *VAR_2)
{
 FUNC_0(&VAR_1->list_lock);

 FUNC_1(&VAR_0->i_io_list, VAR_2);


 if (VAR_2 != &VAR_1->b_dirty_time)
  return FUNC_3(VAR_1);

 FUNC_2(VAR_1);
 return 0;
}
