
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_file {int list; int opener; } ;
struct genwqe_dev {int file_lock; int file_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct genwqe_dev *VAR_1, struct genwqe_file *VAR_2)
{
 unsigned long VAR_3;

 VAR_2->opener = FUNC_0(FUNC_4(VAR_0));
 FUNC_2(&VAR_1->file_lock, VAR_3);
 FUNC_1(&VAR_2->list, &VAR_1->file_list);
 FUNC_3(&VAR_1->file_lock, VAR_3);
}
