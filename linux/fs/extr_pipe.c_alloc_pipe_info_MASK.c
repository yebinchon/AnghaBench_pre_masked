
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int dummy; } ;
struct pipe_inode_info {int r_counter; int w_counter; unsigned long buffers; int mutex; struct user_struct* user; int wait; scalar_t__ bufs; } ;
struct pipe_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct user_struct*,unsigned long,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct user_struct*) ;
 struct user_struct* FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long,int,int ) ;
 int FUNC_8 (struct pipe_inode_info*) ;
 struct pipe_inode_info* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (unsigned long) ;
 scalar_t__ FUNC_12 (unsigned long) ;

struct pipe_inode_info *FUNC_13(void)
{
 struct pipe_inode_info *VAR_6;
 unsigned long VAR_7 = VAR_4;
 struct user_struct *VAR_8 = FUNC_4();
 unsigned long VAR_9;
 unsigned int VAR_10 = FUNC_0(VAR_5);

 VAR_6 = FUNC_9(sizeof(struct pipe_inode_info), VAR_1);
 if (VAR_6 == ((void*)0))
  goto out_free_uid;

 if (VAR_7 * VAR_3 > VAR_10 && !FUNC_2(VAR_0))
  VAR_7 = VAR_10 >> VAR_2;

 VAR_9 = FUNC_1(VAR_8, 0, VAR_7);

 if (FUNC_12(VAR_9) && FUNC_6()) {
  VAR_9 = FUNC_1(VAR_8, VAR_7, 1);
  VAR_7 = 1;
 }

 if (FUNC_11(VAR_9) && FUNC_6())
  goto out_revert_acct;

 VAR_6->bufs = FUNC_7(VAR_7, sizeof(struct pipe_buffer),
        VAR_1);

 if (VAR_6->bufs) {
  FUNC_5(&VAR_6->wait);
  VAR_6->r_counter = VAR_6->w_counter = 1;
  VAR_6->buffers = VAR_7;
  VAR_6->user = VAR_8;
  FUNC_10(&VAR_6->mutex);
  return VAR_6;
 }

out_revert_acct:
 (void) FUNC_1(VAR_8, VAR_7, 0);
 FUNC_8(VAR_6);
out_free_uid:
 FUNC_3(VAR_8);
 return ((void*)0);
}
