
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_response {int dummy; } ;
struct smbd_request {int dummy; } ;
struct smbd_data_transfer {int dummy; } ;
struct smbd_connection {int max_receive_size; void* request_cache; void* request_mempool; void* response_cache; void* response_mempool; int workqueue; int receive_credit_max; int send_credit_target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct smbd_connection*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (char*,int,int ,int ,int *) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_4 ;
 void* FUNC_6 (int ,int ,int ,void*) ;
 int FUNC_7 (void*) ;
 int VAR_5 ;
 int FUNC_8 (char*,int,char*,struct smbd_connection*) ;

__attribute__((used)) static int FUNC_9(struct smbd_connection *VAR_6)
{
 char VAR_7[VAR_2];
 int VAR_8;

 FUNC_8(VAR_7, VAR_2, "smbd_request_%p", VAR_6);
 VAR_6->request_cache =
  FUNC_3(
   VAR_7,
   sizeof(struct smbd_request) +
    sizeof(struct smbd_data_transfer),
   0, VAR_3, ((void*)0));
 if (!VAR_6->request_cache)
  return -VAR_0;

 VAR_6->request_mempool =
  FUNC_6(VAR_6->send_credit_target, VAR_4,
   VAR_5, VAR_6->request_cache);
 if (!VAR_6->request_mempool)
  goto out1;

 FUNC_8(VAR_7, VAR_2, "smbd_response_%p", VAR_6);
 VAR_6->response_cache =
  FUNC_3(
   VAR_7,
   sizeof(struct smbd_response) +
    VAR_6->max_receive_size,
   0, VAR_3, ((void*)0));
 if (!VAR_6->response_cache)
  goto out2;

 VAR_6->response_mempool =
  FUNC_6(VAR_6->receive_credit_max, VAR_4,
         VAR_5, VAR_6->response_cache);
 if (!VAR_6->response_mempool)
  goto out3;

 FUNC_8(VAR_7, VAR_2, "smbd_%p", VAR_6);
 VAR_6->workqueue = FUNC_1(VAR_7);
 if (!VAR_6->workqueue)
  goto out4;

 VAR_8 = FUNC_0(VAR_6, VAR_6->receive_credit_max);
 if (VAR_8) {
  FUNC_5(VAR_1, "failed to allocate receive buffers\n");
  goto out5;
 }

 return 0;

out5:
 FUNC_2(VAR_6->workqueue);
out4:
 FUNC_7(VAR_6->response_mempool);
out3:
 FUNC_4(VAR_6->response_cache);
out2:
 FUNC_7(VAR_6->request_mempool);
out1:
 FUNC_4(VAR_6->request_cache);
 return -VAR_0;
}
