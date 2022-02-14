
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {unsigned long pgoff; struct page* page; TYPE_2__* vma; } ;
struct page {int dummy; } ;
struct mon_reader_bin {unsigned long b_size; int fetch_lock; TYPE_1__* b_vec; } ;
struct TYPE_4__ {struct mon_reader_bin* vm_private_data; } ;
struct TYPE_3__ {struct page* pg; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static vm_fault_t FUNC_3(struct vm_fault *VAR_3)
{
 struct mon_reader_bin *VAR_4 = VAR_3->vma->vm_private_data;
 unsigned long VAR_5, VAR_6;
 struct page *VAR_7;

 FUNC_1(&VAR_4->fetch_lock);
 VAR_5 = VAR_3->pgoff << VAR_1;
 if (VAR_5 >= VAR_4->b_size) {
  FUNC_2(&VAR_4->fetch_lock);
  return VAR_2;
 }
 VAR_6 = VAR_5 / VAR_0;
 VAR_7 = VAR_4->b_vec[VAR_6].pg;
 FUNC_0(VAR_7);
 FUNC_2(&VAR_4->fetch_lock);
 VAR_3->page = VAR_7;
 return 0;
}
