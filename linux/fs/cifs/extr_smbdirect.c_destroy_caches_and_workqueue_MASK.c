
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {int request_cache; int request_mempool; int response_cache; int response_mempool; int workqueue; } ;


 int FUNC_0 (struct smbd_connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct smbd_connection *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->workqueue);
 FUNC_3(VAR_0->response_mempool);
 FUNC_2(VAR_0->response_cache);
 FUNC_3(VAR_0->request_mempool);
 FUNC_2(VAR_0->request_cache);
}
