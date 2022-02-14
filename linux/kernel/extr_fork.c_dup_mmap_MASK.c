
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mmap_sem; int exe_file; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mm_struct*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mm_struct *VAR_0, struct mm_struct *VAR_1)
{
 FUNC_1(&VAR_1->mmap_sem);
 FUNC_0(VAR_0->exe_file, FUNC_2(VAR_1));
 FUNC_3(&VAR_1->mmap_sem);
 return 0;
}
