
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct nvme_tcp_request {int pdu; } ;
struct blk_mq_tag_set {int dummy; } ;


 struct nvme_tcp_request* FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct blk_mq_tag_set *VAR_0,
  struct request *VAR_1, unsigned int VAR_2)
{
 struct nvme_tcp_request *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3->pdu);
}
