
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpmsg_endpoint {int (* cb ) (int ,void*,size_t,int ,int ) ;int priv; int rpdev; } ;
struct qcom_smd_channel {unsigned int pkt_size; unsigned int fifo_size; void* rx_fifo; void* bounce_buffer; TYPE_1__* qsept; } ;
struct TYPE_2__ {struct rpmsg_endpoint ept; } ;


 unsigned int FUNC_0 (struct qcom_smd_channel*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct qcom_smd_channel*,size_t) ;
 size_t FUNC_2 (struct qcom_smd_channel*,void*,unsigned int) ;
 int FUNC_3 (int ,void*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct qcom_smd_channel *VAR_1)
{
 struct rpmsg_endpoint *VAR_2 = &VAR_1->qsept->ept;
 unsigned VAR_3;
 size_t VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_0(VAR_1, VAR_3);


 if (VAR_3 + VAR_1->pkt_size >= VAR_1->fifo_size) {
  VAR_5 = VAR_1->bounce_buffer;
  VAR_4 = FUNC_2(VAR_1, VAR_5, VAR_1->pkt_size);
 } else {
  VAR_5 = VAR_1->rx_fifo + VAR_3;
  VAR_4 = VAR_1->pkt_size;
 }

 VAR_6 = VAR_2->cb(VAR_2->rpdev, VAR_5, VAR_4, VAR_2->priv, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_1(VAR_1, VAR_4);

 VAR_1->pkt_size = 0;

 return 0;
}
