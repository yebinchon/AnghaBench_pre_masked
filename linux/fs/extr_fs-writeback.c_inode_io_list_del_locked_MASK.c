
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_io_list; } ;
struct bdi_writeback {int list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bdi_writeback*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0,
         struct bdi_writeback *VAR_1)
{
 FUNC_0(&VAR_1->list_lock);

 FUNC_1(&VAR_0->i_io_list);
 FUNC_2(VAR_1);
}
