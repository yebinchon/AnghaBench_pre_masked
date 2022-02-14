
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_msg_ctx {scalar_t__ state; int mux; struct ecryptfs_message* msg; } ;
struct ecryptfs_message {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (struct ecryptfs_msg_ctx*) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (long) ;

int FUNC_4(struct ecryptfs_msg_ctx *VAR_5,
          struct ecryptfs_message **VAR_6)
{
 signed long VAR_7 = VAR_3 * VAR_2;
 int VAR_8 = 0;

sleep:
 VAR_7 = FUNC_3(VAR_7);
 FUNC_1(&VAR_4);
 FUNC_1(&VAR_5->mux);
 if (VAR_5->state != VAR_0) {
  if (VAR_7) {
   FUNC_2(&VAR_5->mux);
   FUNC_2(&VAR_4);
   goto sleep;
  }
  VAR_8 = -VAR_1;
 } else {
  *VAR_6 = VAR_5->msg;
  VAR_5->msg = ((void*)0);
 }
 FUNC_0(VAR_5);
 FUNC_2(&VAR_5->mux);
 FUNC_2(&VAR_4);
 return VAR_8;
}
