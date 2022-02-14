
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct privcmd_buf_vma_private* vm_private_data; int * vm_ops; } ;
struct privcmd_buf_vma_private {unsigned long n_pages; int users; int * pages; int list; struct privcmd_buf_private* file_priv; } ;
struct privcmd_buf_private {int lock; int list; } ;
struct file {struct privcmd_buf_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct privcmd_buf_vma_private* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct privcmd_buf_vma_private*) ;
 int FUNC_6 (struct privcmd_buf_vma_private*,int ,unsigned long) ;
 int FUNC_7 (struct vm_area_struct*,int *,unsigned long) ;
 unsigned long FUNC_8 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 struct privcmd_buf_private *VAR_11 = VAR_9->private_data;
 struct privcmd_buf_vma_private *VAR_12;
 unsigned long VAR_13 = FUNC_8(VAR_10);
 unsigned int VAR_14;
 int VAR_15 = 0;

 if (!(VAR_10->vm_flags & VAR_5))
  return -VAR_0;

 VAR_12 = FUNC_1(FUNC_6(VAR_12, VAR_7, VAR_13), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_12->pages[VAR_14] = FUNC_0(VAR_2 | VAR_6);
  if (!VAR_12->pages[VAR_14])
   break;
  VAR_12->n_pages++;
 }

 FUNC_3(&VAR_11->lock);

 VAR_12->file_priv = VAR_11;
 VAR_12->users = 1;

 VAR_10->vm_flags |= VAR_4 | VAR_3;
 VAR_10->vm_ops = &VAR_8;
 VAR_10->vm_private_data = VAR_12;

 FUNC_2(&VAR_12->list, &VAR_11->list);

 if (VAR_12->n_pages != VAR_13)
  VAR_15 = -VAR_1;
 else
  VAR_15 = FUNC_7(VAR_10, VAR_12->pages,
      VAR_12->n_pages);

 if (VAR_15)
  FUNC_5(VAR_12);

 FUNC_4(&VAR_11->lock);

 return VAR_15;
}
