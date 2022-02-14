
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; struct mm_struct* vm_mm; struct file* vm_file; } ;
struct mm_struct {int ioctx_lock; int ioctx_table; } ;
struct kioctx_table {int nr; int * table; } ;
struct kioctx {int mmap_base; int user_id; int dead; struct file* aio_ring_file; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_1)
{
 struct file *VAR_2 = VAR_1->vm_file;
 struct mm_struct *VAR_3 = VAR_1->vm_mm;
 struct kioctx_table *VAR_4;
 int VAR_5, VAR_6 = -VAR_0;

 FUNC_4(&VAR_3->ioctx_lock);
 FUNC_2();
 VAR_4 = FUNC_1(VAR_3->ioctx_table);
 for (VAR_5 = 0; VAR_5 < VAR_4->nr; VAR_5++) {
  struct kioctx *VAR_7;

  VAR_7 = FUNC_1(VAR_4->table[VAR_5]);
  if (VAR_7 && VAR_7->aio_ring_file == VAR_2) {
   if (!FUNC_0(&VAR_7->dead)) {
    VAR_7->user_id = VAR_7->mmap_base = VAR_1->vm_start;
    VAR_6 = 0;
   }
   break;
  }
 }

 FUNC_3();
 FUNC_5(&VAR_3->ioctx_lock);
 return VAR_6;
}
