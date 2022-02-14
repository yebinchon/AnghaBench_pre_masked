
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ecryptfs_msg_ctx {int msg_size; int mux; int daemon_out_list; struct ecryptfs_message* msg; int type; int index; } ;
struct ecryptfs_message {size_t data_len; int data; int index; } ;
struct ecryptfs_daemon {int mux; int wait; int num_queued_msg_ctx; int msg_ctx_out_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ecryptfs_message* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(char *VAR_2, size_t VAR_3,
     struct ecryptfs_msg_ctx *VAR_4, u8 VAR_5,
     u16 VAR_6, struct ecryptfs_daemon *VAR_7)
{
 struct ecryptfs_message *VAR_8;

 VAR_8 = FUNC_0((sizeof(*VAR_8) + VAR_3), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_3(&VAR_4->mux);
 VAR_4->msg = VAR_8;
 VAR_4->msg->index = VAR_4->index;
 VAR_4->msg->data_len = VAR_3;
 VAR_4->type = VAR_5;
 FUNC_2(VAR_4->msg->data, VAR_2, VAR_3);
 VAR_4->msg_size = (sizeof(*VAR_4->msg) + VAR_3);
 FUNC_1(&VAR_4->daemon_out_list, &VAR_7->msg_ctx_out_queue);
 FUNC_4(&VAR_4->mux);

 FUNC_3(&VAR_7->mux);
 VAR_7->num_queued_msg_ctx++;
 FUNC_5(&VAR_7->wait);
 FUNC_4(&VAR_7->mux);

 return 0;
}
