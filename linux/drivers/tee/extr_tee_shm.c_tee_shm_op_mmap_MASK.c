
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; size_t vm_start; int vm_page_prot; } ;
struct tee_shm {int flags; int paddr; } ;
struct dma_buf {struct tee_shm* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,size_t,int,size_t,int ) ;

__attribute__((used)) static int FUNC_1(struct dma_buf *VAR_3, struct vm_area_struct *VAR_4)
{
 struct tee_shm *VAR_5 = VAR_3->priv;
 size_t VAR_6 = VAR_4->vm_end - VAR_4->vm_start;


 if (VAR_5->flags & VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_4->vm_start, VAR_5->paddr >> VAR_1,
          VAR_6, VAR_4->vm_page_prot);
}
