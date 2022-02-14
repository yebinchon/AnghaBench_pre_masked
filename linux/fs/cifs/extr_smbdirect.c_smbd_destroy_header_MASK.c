
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smbd_request {TYPE_2__* sge; } ;
struct smbd_connection {int send_credits; int request_mempool; TYPE_1__* id; } ;
struct TYPE_4__ {int length; int addr; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct smbd_request*,int ) ;

__attribute__((used)) static void FUNC_3(struct smbd_connection *VAR_1,
  struct smbd_request *VAR_2)
{

 FUNC_1(VAR_1->id->device,
       VAR_2->sge[0].addr,
       VAR_2->sge[0].length,
       VAR_0);
 FUNC_2(VAR_2, VAR_1->request_mempool);
 FUNC_0(&VAR_1->send_credits);
}
