
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_page_prot; scalar_t__ vm_pgoff; } ;
struct page {int dummy; } ;
struct io_ring_ctx {void* sq_sqes; void* rings; } ;
struct file {struct io_ring_ctx* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;



 int VAR_1 ;
 unsigned long FUNC_0 (struct page*) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int ) ;
 struct page* FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 loff_t VAR_4 = (loff_t) VAR_3->vm_pgoff << VAR_1;
 unsigned long VAR_5 = VAR_3->vm_end - VAR_3->vm_start;
 struct io_ring_ctx *VAR_6 = VAR_2->private_data;
 unsigned long VAR_7;
 struct page *VAR_8;
 void *VAR_9;

 switch (VAR_4) {
 case 128:
 case 130:
  VAR_9 = VAR_6->rings;
  break;
 case 129:
  VAR_9 = VAR_6->sq_sqes;
  break;
 default:
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_9);
 if (VAR_5 > FUNC_0(VAR_8))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_9) >> VAR_1;
 return FUNC_1(VAR_3, VAR_3->vm_start, VAR_7, VAR_5, VAR_3->vm_page_prot);
}
