
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct ecryptfs_daemon {int euid_chain; scalar_t__ num_queued_msg_ctx; int wait; int msg_ctx_out_queue; int mux; struct file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 () ;
 int * VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct ecryptfs_daemon* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct ecryptfs_daemon **VAR_3, struct file *VAR_4)
{
 int VAR_5 = 0;

 (*VAR_3) = FUNC_4(sizeof(**VAR_3), VAR_1);
 if (!(*VAR_3)) {
  VAR_5 = -VAR_0;
  goto out;
 }
 (*VAR_3)->file = VAR_4;
 FUNC_5(&(*VAR_3)->mux);
 FUNC_0(&(*VAR_3)->msg_ctx_out_queue);
 FUNC_3(&(*VAR_3)->wait);
 (*VAR_3)->num_queued_msg_ctx = 0;
 FUNC_2(&(*VAR_3)->euid_chain,
         &VAR_2[FUNC_1()]);
out:
 return VAR_5;
}
