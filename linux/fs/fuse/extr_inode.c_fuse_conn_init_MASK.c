
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct fuse_iqueue_ops {int dummy; } ;
struct fuse_conn {int connected; int max_pages; int user_ns; int pid_ns; int scramble_key; int attr_version; scalar_t__ initialized; scalar_t__ blocked; int polled_files; int khctr; int congestion_threshold; int max_background; int num_waiting; int devices; int entry; int bg_queue; int iq; int blocked_waitq; int dev_count; int count; int killsb; int bg_lock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,struct fuse_iqueue_ops const*,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct user_namespace*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct fuse_conn*,int ,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct fuse_conn *VAR_5, struct user_namespace *VAR_6,
      const struct fuse_iqueue_ops *VAR_7, void *VAR_8)
{
 FUNC_9(VAR_5, 0, sizeof(*VAR_5));
 FUNC_11(&VAR_5->lock);
 FUNC_11(&VAR_5->bg_lock);
 FUNC_7(&VAR_5->killsb);
 FUNC_10(&VAR_5->count, 1);
 FUNC_2(&VAR_5->dev_count, 1);
 FUNC_8(&VAR_5->blocked_waitq);
 FUNC_3(&VAR_5->iq, VAR_7, VAR_8);
 FUNC_0(&VAR_5->bg_queue);
 FUNC_0(&VAR_5->entry);
 FUNC_0(&VAR_5->devices);
 FUNC_2(&VAR_5->num_waiting, 0);
 VAR_5->max_background = VAR_1;
 VAR_5->congestion_threshold = VAR_0;
 FUNC_1(&VAR_5->khctr, 0);
 VAR_5->polled_files = VAR_3;
 VAR_5->blocked = 0;
 VAR_5->initialized = 0;
 VAR_5->connected = 1;
 FUNC_1(&VAR_5->attr_version, 1);
 FUNC_5(&VAR_5->scramble_key, sizeof(VAR_5->scramble_key));
 VAR_5->pid_ns = FUNC_4(FUNC_12(VAR_4));
 VAR_5->user_ns = FUNC_6(VAR_6);
 VAR_5->max_pages = VAR_2;
}
