
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct configfs_buffer* private_data; } ;
struct configfs_fragment {int frag_sem; int frag_dead; } ;
struct configfs_buffer {int read_in_progress; int write_in_progress; int needs_read_fill; scalar_t__ bin_buffer_size; int * bin_buffer; int item; TYPE_1__* bin_attr; } ;
struct TYPE_2__ {int (* write ) (int ,int *,scalar_t__) ;} ;


 int FUNC_0 (struct inode*,struct file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 struct configfs_fragment* FUNC_3 (struct file*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct configfs_buffer *VAR_2 = VAR_1->private_data;

 VAR_2->read_in_progress = 0;

 if (VAR_2->write_in_progress) {
  struct configfs_fragment *VAR_3 = FUNC_3(VAR_1);
  VAR_2->write_in_progress = 0;

  FUNC_1(&VAR_3->frag_sem);
  if (!VAR_3->frag_dead) {

   VAR_2->bin_attr->write(VAR_2->item,
     VAR_2->bin_buffer,
     VAR_2->bin_buffer_size);
  }
  FUNC_4(&VAR_3->frag_sem);

  FUNC_5(VAR_2->bin_buffer);
  VAR_2->bin_buffer = ((void*)0);
  VAR_2->bin_buffer_size = 0;
  VAR_2->needs_read_fill = 1;
 }

 FUNC_0(VAR_0, VAR_1);
 return 0;
}
