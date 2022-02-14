
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int transfer_len; int sg; } ;
struct nvmet_tcp_cmd {TYPE_1__ req; int exp_ddgst; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*,int ,void*,int ) ;
 int FUNC_1 (struct ahash_request*) ;

__attribute__((used)) static void FUNC_2(struct ahash_request *VAR_0,
  struct nvmet_tcp_cmd *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->req.sg,
  (void *)&VAR_1->exp_ddgst, VAR_1->req.transfer_len);
 FUNC_1(VAR_0);
}
