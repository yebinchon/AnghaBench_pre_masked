
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct ubifs_wbuf {int lnum; int offs; size_t avail; size_t size; TYPE_1__ timer; scalar_t__ next_ino; struct ubifs_info* c; int lock; int io_mutex; int * sync_callback; scalar_t__ used; int * buf; void* inodes; } ;
struct ubifs_info {size_t max_write_size; size_t leb_start; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;

int FUNC_5(struct ubifs_info *VAR_6, struct ubifs_wbuf *VAR_7)
{
 size_t VAR_8;

 VAR_7->buf = FUNC_2(VAR_6->max_write_size, VAR_2);
 if (!VAR_7->buf)
  return -VAR_1;

 VAR_8 = (VAR_6->max_write_size / VAR_4 + 1) * sizeof(ino_t);
 VAR_7->inodes = FUNC_2(VAR_8, VAR_2);
 if (!VAR_7->inodes) {
  FUNC_1(VAR_7->buf);
  VAR_7->buf = ((void*)0);
  return -VAR_1;
 }

 VAR_7->used = 0;
 VAR_7->lnum = VAR_7->offs = -1;






 VAR_8 = VAR_6->max_write_size - (VAR_6->leb_start % VAR_6->max_write_size);
 VAR_7->avail = VAR_7->size = VAR_8;
 VAR_7->sync_callback = ((void*)0);
 FUNC_3(&VAR_7->io_mutex);
 FUNC_4(&VAR_7->lock);
 VAR_7->c = VAR_6;
 VAR_7->next_ino = 0;

 FUNC_0(&VAR_7->timer, VAR_0, VAR_3);
 VAR_7->timer.function = VAR_5;
 return 0;
}
