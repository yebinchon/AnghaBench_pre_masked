
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_response {int dummy; } ;
struct smbd_connection {int response_mempool; } ;


 struct smbd_response* FUNC_0 (struct smbd_connection*) ;
 struct smbd_response* FUNC_1 (struct smbd_connection*) ;
 int FUNC_2 (struct smbd_response*,int ) ;

__attribute__((used)) static void FUNC_3(struct smbd_connection *VAR_0)
{
 struct smbd_response *VAR_1;

 while ((VAR_1 = FUNC_1(VAR_0)))
  FUNC_2(VAR_1, VAR_0->response_mempool);

 while ((VAR_1 = FUNC_0(VAR_0)))
  FUNC_2(VAR_1, VAR_0->response_mempool);
}
