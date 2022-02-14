
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_tcp_request {size_t pdu_len; size_t pdu_sent; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvme_tcp_request*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline size_t FUNC_2(struct nvme_tcp_request *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_1)) == VAR_0 ?
   VAR_1->pdu_len - VAR_1->pdu_sent : 0;
}
