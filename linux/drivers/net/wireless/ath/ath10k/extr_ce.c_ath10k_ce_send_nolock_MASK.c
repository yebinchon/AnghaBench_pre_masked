
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_ce_pipe {TYPE_1__* ops; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* ce_send_nolock ) (struct ath10k_ce_pipe*,void*,int ,unsigned int,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct ath10k_ce_pipe*,void*,int ,unsigned int,unsigned int,unsigned int) ;

int FUNC_1(struct ath10k_ce_pipe *VAR_0,
     void *VAR_1,
     dma_addr_t VAR_2,
     unsigned int VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5)
{
 return VAR_0->ops->ce_send_nolock(VAR_0, VAR_1,
        VAR_2, VAR_3, VAR_4, VAR_5);
}
