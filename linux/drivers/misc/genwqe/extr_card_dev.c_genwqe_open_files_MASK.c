
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int file_lock; int file_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct genwqe_dev *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_1(&VAR_0->file_lock, VAR_2);
 VAR_1 = FUNC_0(&VAR_0->file_list);
 FUNC_2(&VAR_0->file_lock, VAR_2);
 return !VAR_1;
}
