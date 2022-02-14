
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct fuse_file {int kh; int poll_wait; int polled_node; int count; TYPE_1__ readdir; int write_entry; void* release_args; struct fuse_conn* fc; } ;
struct fuse_conn {int khctr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fuse_file*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int) ;

struct fuse_file *FUNC_9(struct fuse_conn *VAR_1)
{
 struct fuse_file *VAR_2;

 VAR_2 = FUNC_5(sizeof(struct fuse_file), VAR_0);
 if (FUNC_8(!VAR_2))
  return ((void*)0);

 VAR_2->fc = VAR_1;
 VAR_2->release_args = FUNC_5(sizeof(*VAR_2->release_args),
       VAR_0);
 if (!VAR_2->release_args) {
  FUNC_4(VAR_2);
  return ((void*)0);
 }

 FUNC_0(&VAR_2->write_entry);
 FUNC_6(&VAR_2->readdir.lock);
 FUNC_7(&VAR_2->count, 1);
 FUNC_1(&VAR_2->polled_node);
 FUNC_3(&VAR_2->poll_wait);

 VAR_2->kh = FUNC_2(&VAR_1->khctr);

 return VAR_2;
}
