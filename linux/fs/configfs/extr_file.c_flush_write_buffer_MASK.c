
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct configfs_fragment {int frag_sem; int frag_dead; } ;
struct configfs_buffer {int page; int item; TYPE_1__* attr; } ;
struct TYPE_2__ {int (* store ) (int ,int ,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,size_t) ;
 struct configfs_fragment* FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_1, struct configfs_buffer *VAR_2, size_t VAR_3)
{
 struct configfs_fragment *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_4->frag_sem);
 if (!VAR_4->frag_dead)
  VAR_5 = VAR_2->attr->store(VAR_2->item, VAR_2->page, VAR_3);
 FUNC_3(&VAR_4->frag_sem);
 return VAR_5;
}
