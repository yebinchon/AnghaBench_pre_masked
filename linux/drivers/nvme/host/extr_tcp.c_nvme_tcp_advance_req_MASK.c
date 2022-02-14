
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_tcp_request {scalar_t__ data_sent; int pdu_sent; scalar_t__ data_len; TYPE_1__* curr_bio; int iter; } ;
struct TYPE_2__ {struct TYPE_2__* bi_next; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_tcp_request*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct nvme_tcp_request *VAR_1,
  int VAR_2)
{
 VAR_1->data_sent += VAR_2;
 VAR_1->pdu_sent += VAR_2;
 FUNC_0(&VAR_1->iter, VAR_2);
 if (!FUNC_1(&VAR_1->iter) &&
     VAR_1->data_sent < VAR_1->data_len) {
  VAR_1->curr_bio = VAR_1->curr_bio->bi_next;
  FUNC_2(VAR_1, VAR_0);
 }
}
