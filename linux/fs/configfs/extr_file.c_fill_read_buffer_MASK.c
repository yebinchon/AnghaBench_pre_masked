
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct configfs_fragment {int frag_sem; int frag_dead; } ;
struct configfs_buffer {char* page; scalar_t__ count; scalar_t__ needs_read_fill; int item; TYPE_1__* attr; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ (* show ) (int ,char*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 struct configfs_fragment* FUNC_4 (struct file*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_5, struct configfs_buffer *VAR_6)
{
 struct configfs_fragment *VAR_7 = FUNC_4(VAR_5);
 ssize_t VAR_8 = -VAR_1;

 if (!VAR_6->page)
  VAR_6->page = (char *) FUNC_2(VAR_3);
 if (!VAR_6->page)
  return -VAR_2;

 FUNC_1(&VAR_7->frag_sem);
 if (!VAR_7->frag_dead)
  VAR_8 = VAR_6->attr->show(VAR_6->item, VAR_6->page);
 FUNC_5(&VAR_7->frag_sem);

 if (VAR_8 < 0)
  return VAR_8;
 if (FUNC_0(VAR_8 > (ssize_t)VAR_4))
  return -VAR_0;
 VAR_6->needs_read_fill = 0;
 VAR_6->count = VAR_8;
 return 0;
}
