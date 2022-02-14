
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int i_mmap; int private_lock; int private_list; int i_mmap_rwsem; int i_pages; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct address_space *VAR_3)
{
 FUNC_3(&VAR_3->i_pages, VAR_2 | VAR_1);
 FUNC_1(&VAR_3->i_mmap_rwsem);
 FUNC_0(&VAR_3->private_list);
 FUNC_2(&VAR_3->private_lock);
 VAR_3->i_mmap = VAR_0;
}
